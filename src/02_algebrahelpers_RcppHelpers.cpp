// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-

// we only include RcppArmadillo.h which pulls Rcpp.h in for us
#include <RcppArmadillo.h>
#include <math.h>
#include <vector>
#include <pbv.h>
#include <cmath>

// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;
using namespace arma;

// Eigenvalues of symmetric matrix:
// [[Rcpp::export]]
arma::vec eig_sym_cpp(
    arma::mat X
){
  return(eig_sym(X));
}

// Check symmetric pd:
// [[Rcpp::export]]
bool sympd_cpp(
    arma::mat X
){
  // Check if symmetric:
  bool issym = X.is_symmetric();
  
  // if not, make symmetric:
  if (!issym){
    X = 0.5* (X + X.t());
  }
  
  
  // Check if posdef:
  double epsilon = 1.490116e-08;
  bool posdef = eig_sym(X)[0] > -epsilon; //X.is_sympd();
  
  // return:
  return(posdef);
}

// Symmetric solve:
// [[Rcpp::export]]
Rcpp::List solve_symmetric_cpp(
    arma::mat X,
    bool logdet = false,
    double epsilon  = 1.490116e-08
){
  double logdetval = R_NegInf;
  Rcpp::List res;
  int i;
  int nvar = X.n_cols;
  
  // Check if symmetric:
  bool issym = X.is_symmetric();
  
  // if not, make symmetric:
  if (!issym){
    X = 0.5* (X + X.t());
  }
  
  // // Check if posdef:
  // bool posdef = X.is_sympd();
  // Check if posdef:
  double lowestEV = eig_sym(X)[0];
  bool posdef = lowestEV > -sqrt(epsilon); //X.is_sympd();
  
  // If not, pseudoinverse:
  if (!posdef){
    arma::mat inv = pinv(X);
    res["inv"] = inv;
    
    if (logdet){
      logdetval = log(epsilon);
      res["logdet"] = logdetval;
    }
    
  } else {
    // Small spectral shift:
    if (lowestEV < sqrt(epsilon)){
      for (i=0;i<nvar;i++){
        //X(i,i) -= lowestEV;
        X(i,i) = X(i,i) -lowestEV + sqrt(epsilon);
      }
    }
    // Rf_PrintValue(wrap(lowestEV));
    // invert:
    arma::mat inv = inv_sympd(X); // FIXME
    // arma::mat inv = inv(X);
    res["inv"] = inv;
    
    if (logdet){
      double logepsilon = log(epsilon);
      logdetval =  log(det(inv));
      if (logdetval < logepsilon){
        logdetval = logepsilon;
      }
      
      res["logdet"] = logdetval;
    }
  }
  
  return(res);
}


// [[Rcpp::export]]
arma::mat solve_symmetric_cpp_matrixonly(
    arma::mat X,
    double epsilon  = 1.490116e-08
){
  int i;
  int nvar = X.n_cols;
  
  // Check if symmetric:
  bool issym = X.is_symmetric();
  
  // if not, make symmetric:
  if (!issym){
    X = 0.5* (X + X.t());
  }
  
  // // Check if posdef:
  // bool posdef = X.is_sympd();
  // Check if posdef:
  double lowestEV = eig_sym(X)[0];
  bool posdef = lowestEV > - sqrt(epsilon); //X.is_sympd();
  
  // If not, pseudoinverse:
  if (!posdef){
    arma::mat res = pinv(X);
    return(res);
    
  } else {
    // Small spectral shift:
    if (lowestEV < sqrt(epsilon)){
      for (i=0;i<nvar;i++){
        X(i,i) = X(i,i) - lowestEV + sqrt(epsilon);
      }
    }
    
    // invert:
    arma::mat res = inv_sympd(X); // FIXME
    return(res);
  }
  
  
}

// Block diag:
// [[Rcpp::export]]
arma::mat bdiag_psychonetrics(
    const Rcpp::List  mats
){
  int nMat = mats.length();
  arma::vec cols(nMat);
  arma::vec rows(nMat);
  int totalrow = 0;
  int totalcol = 0;
  int i, j, k;
  
  // Compute size:
  for (i=0;i<nMat;i++){
    arma::mat curmat = mats[i];
    cols[i] = curmat.n_cols;
    totalcol += cols[i];
    rows[i] = curmat.n_rows;
    totalrow += rows[i];
  }
  
  // Form zero matrix:
  arma::mat diagmat = zeros(totalrow, totalcol);
  
  // Fill the matrix:
  int startrow = 0;
  int startcol = 0;
  
  for (k =0; k<nMat; k++){
    arma::mat curmat = mats[k];
    
    for (i=0;i<rows[k];i++){
      
      for (j=0;j<cols[k];j++){
        
        diagmat(startrow+i, startcol + j)  = curmat(i,j);
        
      }
    }
    startrow += rows[k];
    startcol += cols[k];
  }
  
  
  return(diagmat);
}

// [[Rcpp::export]]
arma::mat cbind_psychonetrics(
    const Rcpp::List  mats
){
  int nMat = mats.length();
  arma::vec cols(nMat);
  arma::vec rows(nMat);
  
  arma::mat curmat = mats[0];
  
  int totalrow = curmat.n_rows;
  int totalcol = 0;
  int i, j, k;
  
  // Compute size:
  for (i=0;i<nMat;i++){
    arma::mat curmat = mats[i];
    cols[i] = curmat.n_cols;
    totalcol += cols[i];
    rows[i] = curmat.n_rows;
    if (rows[i] != totalrow){
      Rf_error("Number of rows are not consistent");
    }
    // totalrow += rows[i];
  }
  
  // Form zero matrix:
  arma::mat resmat = zeros(totalrow, totalcol);
  
  // Fill the matrix:
  // int startrow = 0;
  int startcol = 0;
  
  for (k =0; k<nMat; k++){
    arma::mat curmat = mats[k];
    
    for (i=0;i<rows[k];i++){
      
      for (j=0;j<cols[k];j++){
        
        resmat(i, startcol + j)  = curmat(i,j);
        
      }
    }
    // startrow += rows[k];
    startcol += cols[k];
  }
  
  
  return(resmat);
}

// Half vectorization (lower triangle):
// [[Rcpp::export]]
arma::vec vech(
    arma::mat& X,
    bool diag = true
){
  int nvar = X.n_rows;
  int nelement = nvar * (nvar - 1 + 2 * diag) / 2;
  int curel = 0;
  arma::vec out(nelement);
  for (int j=0;j<nvar;j++){
    for (int i=j;i<nvar;i++){
      
      if (diag || (i != j)){
        
        // if (diag){
        out(curel) = X(i,j);  
        curel++;
        // }
        //   
        // } else {
        //   out(curel) = X(i,j);
        //   curel++;
        // }
        
      }
    }
  }
  
  
  return(out);
}


// Indices (start end) for seq_len - 1:
// [[Rcpp::export]]
arma::vec seq_len_inds(
    int start,
    int n
){
  arma::vec res(2);
  res[0] = start;
  res[1] = start + n - 1;
  return(res);
}


// [[Rcpp::export]]
arma::mat cov2cor_cpp(
    const arma::mat& X
){
  int n = X.n_rows;
  
  arma::mat Y = eye(n,n);
  
  int i, j;
  for (i=0;i<n;i++){
    for (j=0;j<=i;j++){
      Y(i,j) = Y(j,i) = 
        X(i,j) / sqrt(X(i,i) * X(j,j));
    }  
  }
  
  return(Y);
}

// [[Rcpp::export]]
arma::mat wi2net_cpp(
    const arma::mat& X
){
  int n = X.n_rows;
  arma::mat Y = zeros(n,n);
  
  int i, j;
  for (i=0;i<n;i++){
    for (j=0;j<i;j++){
      Y(i,j) = Y(j,i) = 
        - X(i,j) / sqrt(X(i,i) * X(j,j));
    }  
  }
  
  return(Y);
}

// [[Rcpp::export]]
arma::mat SDmat(
    const arma::mat& X
){
  int n = X.n_rows;
  arma::mat Y = zeros(n,n);
  
  int i;
  for (i=0;i<n;i++){
    Y(i,i) = sqrt(X(i,i));
  }
  
  return(Y);
}

// [[Rcpp::export]]
arma::mat invSDmat(
    const arma::mat& X
){
  int n = X.n_rows;
  arma::mat Y = zeros(n,n);
  
  int i;
  for (i=0;i<n;i++){
    Y(i,i) = pow(X(i,i), -0.5);
  }
  
  return(Y);
}

// [[Rcpp::export]]
bool anyNon0(
    const arma::mat& X
){
  bool anyNon0 = false;
  for (int i=0; i<X.n_rows; i++){
    for (int j=0; j<X.n_cols; j++){
      
      if (X(i,j) != 0){
        anyNon0 = true;
      }
      
    }
  }
  
  return(anyNon0);
}


// [[Rcpp::export]]
void growlist(
  Rcpp::List& X,
  const Rcpp::List Y
){
  // Names of Y:
  CharacterVector names = Y.names();
  
  // Length of Y:
  int n = Y.length();
  
  // var:
  std::string var;
  
  // Loop
  for (int i=0; i < n; i++){
    var = names[i];
    X[var] = Y[i];
  }
  
}

// [[Rcpp::export]]
arma::vec parVector_cpp(
    const S4& model
){
  Rcpp::List pars = model.slot("parameters");
  arma::vec parnum = pars["par"];
  arma::vec parest = pars["est"];
  
  // Number of free parameters:
  int freePar = max(parnum);
  
  // Number of total parameters:
  int totalPar = parnum.n_elem;
  
  // output:
  arma::vec parvec(freePar);
  
  for (int i=0;i<totalPar;i++){
    if (parnum(i)>0){
      parvec(parnum(i)-1) = parest(i);
    }
  }
  
  return(parvec);
}