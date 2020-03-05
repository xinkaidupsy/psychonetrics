// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// kronecker_I_X
arma::sp_mat kronecker_I_X(const arma::mat& X, int n);
RcppExport SEXP _psychonetrics_kronecker_I_X(SEXP XSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(kronecker_I_X(X, n));
    return rcpp_result_gen;
END_RCPP
}
// kronecker_X_I
arma::sp_mat kronecker_X_I(const arma::mat& X, int n);
RcppExport SEXP _psychonetrics_kronecker_X_I(SEXP XSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(kronecker_X_I(X, n));
    return rcpp_result_gen;
END_RCPP
}
// FisherInformation_inner_cpp_DSS
arma::mat FisherInformation_inner_cpp_DSS(const arma::mat& estimator, const arma::sp_mat& model, const arma::sp_mat& manual);
RcppExport SEXP _psychonetrics_FisherInformation_inner_cpp_DSS(SEXP estimatorSEXP, SEXP modelSEXP, SEXP manualSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type estimator(estimatorSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type manual(manualSEXP);
    rcpp_result_gen = Rcpp::wrap(FisherInformation_inner_cpp_DSS(estimator, model, manual));
    return rcpp_result_gen;
END_RCPP
}
// FisherInformation_inner_cpp_DDS
arma::mat FisherInformation_inner_cpp_DDS(const arma::mat& estimator, const arma::mat& model, const arma::sp_mat& manual);
RcppExport SEXP _psychonetrics_FisherInformation_inner_cpp_DDS(SEXP estimatorSEXP, SEXP modelSEXP, SEXP manualSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type estimator(estimatorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type manual(manualSEXP);
    rcpp_result_gen = Rcpp::wrap(FisherInformation_inner_cpp_DDS(estimator, model, manual));
    return rcpp_result_gen;
END_RCPP
}
// gradient_inner_cpp_DSS
arma::mat gradient_inner_cpp_DSS(const arma::mat& estimator, const arma::sp_mat& model, const arma::sp_mat& manual);
RcppExport SEXP _psychonetrics_gradient_inner_cpp_DSS(SEXP estimatorSEXP, SEXP modelSEXP, SEXP manualSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type estimator(estimatorSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type manual(manualSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_inner_cpp_DSS(estimator, model, manual));
    return rcpp_result_gen;
END_RCPP
}
// gradient_inner_cpp_DDS
arma::mat gradient_inner_cpp_DDS(const arma::mat& estimator, const arma::mat& model, const arma::sp_mat& manual);
RcppExport SEXP _psychonetrics_gradient_inner_cpp_DDS(SEXP estimatorSEXP, SEXP modelSEXP, SEXP manualSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type estimator(estimatorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type manual(manualSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_inner_cpp_DDS(estimator, model, manual));
    return rcpp_result_gen;
END_RCPP
}
// logLikelihood_gaussian_subgroup_fiml_cpp_inner
double logLikelihood_gaussian_subgroup_fiml_cpp_inner(const arma::mat& sigma, const arma::mat& kappa, const arma::vec& mu, Rcpp::List dat, double epsilon);
RcppExport SEXP _psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp_inner(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP datSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dat(datSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(logLikelihood_gaussian_subgroup_fiml_cpp_inner(sigma, kappa, mu, dat, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// logLikelihood_gaussian_subgroup_fiml_cpp
double logLikelihood_gaussian_subgroup_fiml_cpp(const arma::mat& sigma, const arma::mat& kappa, const arma::vec& mu, Rcpp::List fimldata, double epsilon);
RcppExport SEXP _psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(logLikelihood_gaussian_subgroup_fiml_cpp(sigma, kappa, mu, fimldata, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// logLikelihood_gaussian_subgroup_fiml_cpp_fullFIML
double logLikelihood_gaussian_subgroup_fiml_cpp_fullFIML(Rcpp::List sigma, Rcpp::List kappa, Rcpp::List mu, Rcpp::List fimldata, double epsilon);
RcppExport SEXP _psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp_fullFIML(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(logLikelihood_gaussian_subgroup_fiml_cpp_fullFIML(sigma, kappa, mu, fimldata, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// DWLS_wmat
arma::sp_mat DWLS_wmat(arma::mat data, arma::vec means, const int ncase, const int nvar);
RcppExport SEXP _psychonetrics_DWLS_wmat(SEXP dataSEXP, SEXP meansSEXP, SEXP ncaseSEXP, SEXP nvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type means(meansSEXP);
    Rcpp::traits::input_parameter< const int >::type ncase(ncaseSEXP);
    Rcpp::traits::input_parameter< const int >::type nvar(nvarSEXP);
    rcpp_result_gen = Rcpp::wrap(DWLS_wmat(data, means, ncase, nvar));
    return rcpp_result_gen;
END_RCPP
}
// WLS_wmat
arma::mat WLS_wmat(arma::mat data, arma::vec means, const int ncase, const int nvar);
RcppExport SEXP _psychonetrics_WLS_wmat(SEXP dataSEXP, SEXP meansSEXP, SEXP ncaseSEXP, SEXP nvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type means(meansSEXP);
    Rcpp::traits::input_parameter< const int >::type ncase(ncaseSEXP);
    Rcpp::traits::input_parameter< const int >::type nvar(nvarSEXP);
    rcpp_result_gen = Rcpp::wrap(WLS_wmat(data, means, ncase, nvar));
    return rcpp_result_gen;
END_RCPP
}
// expected_hessian_fiml_Gaussian_group_cpp_inner
arma::mat expected_hessian_fiml_Gaussian_group_cpp_inner(const arma::mat& sigma, const arma::mat& kappa, const arma::vec& mu, Rcpp::List dat, double epsilon);
RcppExport SEXP _psychonetrics_expected_hessian_fiml_Gaussian_group_cpp_inner(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP datSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dat(datSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(expected_hessian_fiml_Gaussian_group_cpp_inner(sigma, kappa, mu, dat, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// expected_hessian_fiml_Gaussian_group_cpp
arma::mat expected_hessian_fiml_Gaussian_group_cpp(const arma::mat& sigma, const arma::mat& kappa, const arma::vec& mu, Rcpp::List fimldata, double epsilon);
RcppExport SEXP _psychonetrics_expected_hessian_fiml_Gaussian_group_cpp(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(expected_hessian_fiml_Gaussian_group_cpp(sigma, kappa, mu, fimldata, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// expected_hessian_fiml_Gaussian_group_cpp_fullFIML
arma::mat expected_hessian_fiml_Gaussian_group_cpp_fullFIML(Rcpp::List sigma, Rcpp::List kappa, Rcpp::List mu, Rcpp::List fimldata, double epsilon);
RcppExport SEXP _psychonetrics_expected_hessian_fiml_Gaussian_group_cpp_fullFIML(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(expected_hessian_fiml_Gaussian_group_cpp_fullFIML(sigma, kappa, mu, fimldata, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// fimlEstimator_Gauss_group_cpp_inner
double fimlEstimator_Gauss_group_cpp_inner(arma::mat sigma, arma::mat kappa, arma::vec mu, Rcpp::List dat, double epsilon, double n);
RcppExport SEXP _psychonetrics_fimlEstimator_Gauss_group_cpp_inner(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP datSEXP, SEXP epsilonSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dat(datSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fimlEstimator_Gauss_group_cpp_inner(sigma, kappa, mu, dat, epsilon, n));
    return rcpp_result_gen;
END_RCPP
}
// fimlEstimator_Gauss_group_cpp
double fimlEstimator_Gauss_group_cpp(arma::mat sigma, arma::mat kappa, arma::vec mu, Rcpp::List fimldata, double epsilon, double n);
RcppExport SEXP _psychonetrics_fimlEstimator_Gauss_group_cpp(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fimlEstimator_Gauss_group_cpp(sigma, kappa, mu, fimldata, epsilon, n));
    return rcpp_result_gen;
END_RCPP
}
// fimlEstimator_Gauss_group_cpp_fullFIML
double fimlEstimator_Gauss_group_cpp_fullFIML(Rcpp::List sigma, Rcpp::List kappa, Rcpp::List mu, Rcpp::List fimldata, double epsilon, double n);
RcppExport SEXP _psychonetrics_fimlEstimator_Gauss_group_cpp_fullFIML(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fimlEstimator_Gauss_group_cpp_fullFIML(sigma, kappa, mu, fimldata, epsilon, n));
    return rcpp_result_gen;
END_RCPP
}
// jacobian_fiml_gaussian_subgroup_sigma_cpp_inner
arma::mat jacobian_fiml_gaussian_subgroup_sigma_cpp_inner(const arma::mat& sigma, const arma::mat& kappa, const arma::vec& mu, Rcpp::List dat, double epsilon);
RcppExport SEXP _psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp_inner(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP datSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dat(datSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(jacobian_fiml_gaussian_subgroup_sigma_cpp_inner(sigma, kappa, mu, dat, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// jacobian_fiml_gaussian_subgroup_sigma_cpp
arma::mat jacobian_fiml_gaussian_subgroup_sigma_cpp(arma::mat sigma, arma::mat kappa, arma::vec mu, Rcpp::List fimldata, double epsilon);
RcppExport SEXP _psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(jacobian_fiml_gaussian_subgroup_sigma_cpp(sigma, kappa, mu, fimldata, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// jacobian_fiml_gaussian_subgroup_sigma_cpp_fullFIML
arma::mat jacobian_fiml_gaussian_subgroup_sigma_cpp_fullFIML(Rcpp::List sigma, Rcpp::List kappa, Rcpp::List mu, Rcpp::List fimldata, double epsilon);
RcppExport SEXP _psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp_fullFIML(SEXP sigmaSEXP, SEXP kappaSEXP, SEXP muSEXP, SEXP fimldataSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fimldata(fimldataSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(jacobian_fiml_gaussian_subgroup_sigma_cpp_fullFIML(sigma, kappa, mu, fimldata, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// covPrepare_cpp
List covPrepare_cpp(NumericMatrix data, LogicalVector isOrdered, double tol, bool WLSweights, bool verbose);
RcppExport SEXP _psychonetrics_covPrepare_cpp(SEXP dataSEXP, SEXP isOrderedSEXP, SEXP tolSEXP, SEXP WLSweightsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type isOrdered(isOrderedSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type WLSweights(WLSweightsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(covPrepare_cpp(data, isOrdered, tol, WLSweights, verbose));
    return rcpp_result_gen;
END_RCPP
}
// computeMean
double computeMean(NumericVector y);
RcppExport SEXP _psychonetrics_computeMean(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(computeMean(y));
    return rcpp_result_gen;
END_RCPP
}
// computeThresholds
NumericVector computeThresholds(IntegerVector y);
RcppExport SEXP _psychonetrics_computeThresholds(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(computeThresholds(y));
    return rcpp_result_gen;
END_RCPP
}
// pearsonCov
double pearsonCov(Rcpp::NumericVector y1, Rcpp::NumericVector y2, double mean1, double mean2, bool unbiased);
RcppExport SEXP _psychonetrics_pearsonCov(SEXP y1SEXP, SEXP y2SEXP, SEXP mean1SEXP, SEXP mean2SEXP, SEXP unbiasedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< double >::type mean1(mean1SEXP);
    Rcpp::traits::input_parameter< double >::type mean2(mean2SEXP);
    Rcpp::traits::input_parameter< bool >::type unbiased(unbiasedSEXP);
    rcpp_result_gen = Rcpp::wrap(pearsonCov(y1, y2, mean1, mean2, unbiased));
    return rcpp_result_gen;
END_RCPP
}
// toOrdinal
IntegerVector toOrdinal(NumericVector var);
RcppExport SEXP _psychonetrics_toOrdinal(SEXP varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type var(varSEXP);
    rcpp_result_gen = Rcpp::wrap(toOrdinal(var));
    return rcpp_result_gen;
END_RCPP
}
// cpp_table
IntegerMatrix cpp_table(IntegerVector y1, IntegerVector y2);
RcppExport SEXP _psychonetrics_cpp_table(SEXP y1SEXP, SEXP y2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y2(y2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_table(y1, y2));
    return rcpp_result_gen;
END_RCPP
}
// polychoric_fit_summary
double polychoric_fit_summary(double rho, NumericMatrix tab, NumericVector t1, NumericVector t2);
RcppExport SEXP _psychonetrics_polychoric_fit_summary(SEXP rhoSEXP, SEXP tabSEXP, SEXP t1SEXP, SEXP t2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t2(t2SEXP);
    rcpp_result_gen = Rcpp::wrap(polychoric_fit_summary(rho, tab, t1, t2));
    return rcpp_result_gen;
END_RCPP
}
// binormal_density
double binormal_density(double x1, double x2, double rho, double sigma1, double sigma2, double mu1, double mu2);
RcppExport SEXP _psychonetrics_binormal_density(SEXP x1SEXP, SEXP x2SEXP, SEXP rhoSEXP, SEXP sigma1SEXP, SEXP sigma2SEXP, SEXP mu1SEXP, SEXP mu2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type sigma1(sigma1SEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type mu1(mu1SEXP);
    Rcpp::traits::input_parameter< double >::type mu2(mu2SEXP);
    rcpp_result_gen = Rcpp::wrap(binormal_density(x1, x2, rho, sigma1, sigma2, mu1, mu2));
    return rcpp_result_gen;
END_RCPP
}
// polychoric_grad_summary
double polychoric_grad_summary(double rho, NumericMatrix tab, NumericVector t1, NumericVector t2);
RcppExport SEXP _psychonetrics_polychoric_grad_summary(SEXP rhoSEXP, SEXP tabSEXP, SEXP t1SEXP, SEXP t2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t2(t2SEXP);
    rcpp_result_gen = Rcpp::wrap(polychoric_grad_summary(rho, tab, t1, t2));
    return rcpp_result_gen;
END_RCPP
}
// estimate_polychoric
double estimate_polychoric(IntegerVector y1, IntegerVector y2, NumericVector t1, NumericVector t2, double tol, double stepsize, int maxIt, double zeroAdd);
RcppExport SEXP _psychonetrics_estimate_polychoric(SEXP y1SEXP, SEXP y2SEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP tolSEXP, SEXP stepsizeSEXP, SEXP maxItSEXP, SEXP zeroAddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< int >::type maxIt(maxItSEXP);
    Rcpp::traits::input_parameter< double >::type zeroAdd(zeroAddSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_polychoric(y1, y2, t1, t2, tol, stepsize, maxIt, zeroAdd));
    return rcpp_result_gen;
END_RCPP
}
// threshold_grad_singlesubject
double threshold_grad_singlesubject(int y, int j, NumericVector t_aug);
RcppExport SEXP _psychonetrics_threshold_grad_singlesubject(SEXP ySEXP, SEXP jSEXP, SEXP t_augSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_aug(t_augSEXP);
    rcpp_result_gen = Rcpp::wrap(threshold_grad_singlesubject(y, j, t_aug));
    return rcpp_result_gen;
END_RCPP
}
// polychor_grad_singlesubject
double polychor_grad_singlesubject(int y1, int y2, double rho, NumericVector t_aug1, NumericVector t_aug2, double pi);
RcppExport SEXP _psychonetrics_polychor_grad_singlesubject(SEXP y1SEXP, SEXP y2SEXP, SEXP rhoSEXP, SEXP t_aug1SEXP, SEXP t_aug2SEXP, SEXP piSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< int >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_aug1(t_aug1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_aug2(t_aug2SEXP);
    Rcpp::traits::input_parameter< double >::type pi(piSEXP);
    rcpp_result_gen = Rcpp::wrap(polychor_grad_singlesubject(y1, y2, rho, t_aug1, t_aug2, pi));
    return rcpp_result_gen;
END_RCPP
}
// bthreshold_grad_singlesubject
double bthreshold_grad_singlesubject(int y1, int y2, double rho, int tIndex, NumericVector t_aug1, NumericVector t_aug2, double pi);
RcppExport SEXP _psychonetrics_bthreshold_grad_singlesubject(SEXP y1SEXP, SEXP y2SEXP, SEXP rhoSEXP, SEXP tIndexSEXP, SEXP t_aug1SEXP, SEXP t_aug2SEXP, SEXP piSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< int >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< int >::type tIndex(tIndexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_aug1(t_aug1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t_aug2(t_aug2SEXP);
    Rcpp::traits::input_parameter< double >::type pi(piSEXP);
    rcpp_result_gen = Rcpp::wrap(bthreshold_grad_singlesubject(y1, y2, rho, tIndex, t_aug1, t_aug2, pi));
    return rcpp_result_gen;
END_RCPP
}
// d_sigma_cholesky_cpp
arma::mat d_sigma_cholesky_cpp(const arma::mat& lowertri, const arma::sp_mat& L, const arma::sp_mat& C, const arma::sp_mat In);
RcppExport SEXP _psychonetrics_d_sigma_cholesky_cpp(SEXP lowertriSEXP, SEXP LSEXP, SEXP CSEXP, SEXP InSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type lowertri(lowertriSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type In(InSEXP);
    rcpp_result_gen = Rcpp::wrap(d_sigma_cholesky_cpp(lowertri, L, C, In));
    return rcpp_result_gen;
END_RCPP
}
// d_sigma_delta_cpp
arma::mat d_sigma_delta_cpp(const arma::sp_mat& L, const arma::mat& delta_IminOinv, const arma::sp_mat& In, const arma::sp_mat& A, const arma::sp_mat& delta);
RcppExport SEXP _psychonetrics_d_sigma_delta_cpp(SEXP LSEXP, SEXP delta_IminOinvSEXP, SEXP InSEXP, SEXP ASEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type delta_IminOinv(delta_IminOinvSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type In(InSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(d_sigma_delta_cpp(L, delta_IminOinv, In, A, delta));
    return rcpp_result_gen;
END_RCPP
}
// d_sigma_omega_cpp
arma::mat d_sigma_omega_cpp(const arma::sp_mat& L, const arma::mat& delta_IminOinv, const arma::sp_mat& A, const arma::sp_mat& delta, const arma::sp_mat& Dstar);
RcppExport SEXP _psychonetrics_d_sigma_omega_cpp(SEXP LSEXP, SEXP delta_IminOinvSEXP, SEXP ASEXP, SEXP deltaSEXP, SEXP DstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type delta_IminOinv(delta_IminOinvSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type Dstar(DstarSEXP);
    rcpp_result_gen = Rcpp::wrap(d_sigma_omega_cpp(L, delta_IminOinv, A, delta, Dstar));
    return rcpp_result_gen;
END_RCPP
}
// d_sigma_kappa_cpp
arma::mat d_sigma_kappa_cpp(const arma::sp_mat& L, const arma::sp_mat& D, const arma::mat& sigma);
RcppExport SEXP _psychonetrics_d_sigma_kappa_cpp(SEXP LSEXP, SEXP DSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(d_sigma_kappa_cpp(L, D, sigma));
    return rcpp_result_gen;
END_RCPP
}
// d_sigma_rho_cpp
arma::mat d_sigma_rho_cpp(const arma::sp_mat& L, const arma::sp_mat& SD, const arma::sp_mat& A, const arma::sp_mat& delta, const arma::sp_mat& Dstar);
RcppExport SEXP _psychonetrics_d_sigma_rho_cpp(SEXP LSEXP, SEXP SDSEXP, SEXP ASEXP, SEXP deltaSEXP, SEXP DstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type SD(SDSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type Dstar(DstarSEXP);
    rcpp_result_gen = Rcpp::wrap(d_sigma_rho_cpp(L, SD, A, delta, Dstar));
    return rcpp_result_gen;
END_RCPP
}
// d_sigma_SD_cpp
arma::mat d_sigma_SD_cpp(const arma::sp_mat& L, const arma::mat& SD_IplusRho, const arma::sp_mat& In, const arma::sp_mat& A);
RcppExport SEXP _psychonetrics_d_sigma_SD_cpp(SEXP LSEXP, SEXP SD_IplusRhoSEXP, SEXP InSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SD_IplusRho(SD_IplusRhoSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type In(InSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(d_sigma_SD_cpp(L, SD_IplusRho, In, A));
    return rcpp_result_gen;
END_RCPP
}
// d_sigma_omega_corinput_cpp
arma::mat d_sigma_omega_corinput_cpp(const arma::sp_mat& L, const arma::mat& delta_IminOinv, const arma::sp_mat& A, const arma::sp_mat& delta, const arma::sp_mat& Dstar, const arma::mat& IminOinv, const arma::sp_mat& In);
RcppExport SEXP _psychonetrics_d_sigma_omega_corinput_cpp(SEXP LSEXP, SEXP delta_IminOinvSEXP, SEXP ASEXP, SEXP deltaSEXP, SEXP DstarSEXP, SEXP IminOinvSEXP, SEXP InSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type delta_IminOinv(delta_IminOinvSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type Dstar(DstarSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type IminOinv(IminOinvSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type In(InSEXP);
    rcpp_result_gen = Rcpp::wrap(d_sigma_omega_corinput_cpp(L, delta_IminOinv, A, delta, Dstar, IminOinv, In));
    return rcpp_result_gen;
END_RCPP
}
// expHcpp
double expHcpp(const arma::mat& states, const arma::vec& probabilities, const arma::mat& omega, const arma::vec& tau, const int nstate, const int nvar);
RcppExport SEXP _psychonetrics_expHcpp(SEXP statesSEXP, SEXP probabilitiesSEXP, SEXP omegaSEXP, SEXP tauSEXP, SEXP nstateSEXP, SEXP nvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type states(statesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type probabilities(probabilitiesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const int >::type nstate(nstateSEXP);
    Rcpp::traits::input_parameter< const int >::type nvar(nvarSEXP);
    rcpp_result_gen = Rcpp::wrap(expHcpp(states, probabilities, omega, tau, nstate, nvar));
    return rcpp_result_gen;
END_RCPP
}
// expHessianCpp
arma::mat expHessianCpp(const arma::mat& states, const arma::vec& probabilities, const arma::mat& omega, const arma::vec& tau, double beta, const int nstate, const int nvar);
RcppExport SEXP _psychonetrics_expHessianCpp(SEXP statesSEXP, SEXP probabilitiesSEXP, SEXP omegaSEXP, SEXP tauSEXP, SEXP betaSEXP, SEXP nstateSEXP, SEXP nvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type states(statesSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type probabilities(probabilitiesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const int >::type nstate(nstateSEXP);
    Rcpp::traits::input_parameter< const int >::type nvar(nvarSEXP);
    rcpp_result_gen = Rcpp::wrap(expHessianCpp(states, probabilities, omega, tau, beta, nstate, nvar));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_psychonetrics_kronecker_I_X", (DL_FUNC) &_psychonetrics_kronecker_I_X, 2},
    {"_psychonetrics_kronecker_X_I", (DL_FUNC) &_psychonetrics_kronecker_X_I, 2},
    {"_psychonetrics_FisherInformation_inner_cpp_DSS", (DL_FUNC) &_psychonetrics_FisherInformation_inner_cpp_DSS, 3},
    {"_psychonetrics_FisherInformation_inner_cpp_DDS", (DL_FUNC) &_psychonetrics_FisherInformation_inner_cpp_DDS, 3},
    {"_psychonetrics_gradient_inner_cpp_DSS", (DL_FUNC) &_psychonetrics_gradient_inner_cpp_DSS, 3},
    {"_psychonetrics_gradient_inner_cpp_DDS", (DL_FUNC) &_psychonetrics_gradient_inner_cpp_DDS, 3},
    {"_psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp_inner", (DL_FUNC) &_psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp_inner, 5},
    {"_psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp", (DL_FUNC) &_psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp, 5},
    {"_psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp_fullFIML", (DL_FUNC) &_psychonetrics_logLikelihood_gaussian_subgroup_fiml_cpp_fullFIML, 5},
    {"_psychonetrics_DWLS_wmat", (DL_FUNC) &_psychonetrics_DWLS_wmat, 4},
    {"_psychonetrics_WLS_wmat", (DL_FUNC) &_psychonetrics_WLS_wmat, 4},
    {"_psychonetrics_expected_hessian_fiml_Gaussian_group_cpp_inner", (DL_FUNC) &_psychonetrics_expected_hessian_fiml_Gaussian_group_cpp_inner, 5},
    {"_psychonetrics_expected_hessian_fiml_Gaussian_group_cpp", (DL_FUNC) &_psychonetrics_expected_hessian_fiml_Gaussian_group_cpp, 5},
    {"_psychonetrics_expected_hessian_fiml_Gaussian_group_cpp_fullFIML", (DL_FUNC) &_psychonetrics_expected_hessian_fiml_Gaussian_group_cpp_fullFIML, 5},
    {"_psychonetrics_fimlEstimator_Gauss_group_cpp_inner", (DL_FUNC) &_psychonetrics_fimlEstimator_Gauss_group_cpp_inner, 6},
    {"_psychonetrics_fimlEstimator_Gauss_group_cpp", (DL_FUNC) &_psychonetrics_fimlEstimator_Gauss_group_cpp, 6},
    {"_psychonetrics_fimlEstimator_Gauss_group_cpp_fullFIML", (DL_FUNC) &_psychonetrics_fimlEstimator_Gauss_group_cpp_fullFIML, 6},
    {"_psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp_inner", (DL_FUNC) &_psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp_inner, 5},
    {"_psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp", (DL_FUNC) &_psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp, 5},
    {"_psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp_fullFIML", (DL_FUNC) &_psychonetrics_jacobian_fiml_gaussian_subgroup_sigma_cpp_fullFIML, 5},
    {"_psychonetrics_covPrepare_cpp", (DL_FUNC) &_psychonetrics_covPrepare_cpp, 5},
    {"_psychonetrics_computeMean", (DL_FUNC) &_psychonetrics_computeMean, 1},
    {"_psychonetrics_computeThresholds", (DL_FUNC) &_psychonetrics_computeThresholds, 1},
    {"_psychonetrics_pearsonCov", (DL_FUNC) &_psychonetrics_pearsonCov, 5},
    {"_psychonetrics_toOrdinal", (DL_FUNC) &_psychonetrics_toOrdinal, 1},
    {"_psychonetrics_cpp_table", (DL_FUNC) &_psychonetrics_cpp_table, 2},
    {"_psychonetrics_polychoric_fit_summary", (DL_FUNC) &_psychonetrics_polychoric_fit_summary, 4},
    {"_psychonetrics_binormal_density", (DL_FUNC) &_psychonetrics_binormal_density, 7},
    {"_psychonetrics_polychoric_grad_summary", (DL_FUNC) &_psychonetrics_polychoric_grad_summary, 4},
    {"_psychonetrics_estimate_polychoric", (DL_FUNC) &_psychonetrics_estimate_polychoric, 8},
    {"_psychonetrics_threshold_grad_singlesubject", (DL_FUNC) &_psychonetrics_threshold_grad_singlesubject, 3},
    {"_psychonetrics_polychor_grad_singlesubject", (DL_FUNC) &_psychonetrics_polychor_grad_singlesubject, 6},
    {"_psychonetrics_bthreshold_grad_singlesubject", (DL_FUNC) &_psychonetrics_bthreshold_grad_singlesubject, 7},
    {"_psychonetrics_d_sigma_cholesky_cpp", (DL_FUNC) &_psychonetrics_d_sigma_cholesky_cpp, 4},
    {"_psychonetrics_d_sigma_delta_cpp", (DL_FUNC) &_psychonetrics_d_sigma_delta_cpp, 5},
    {"_psychonetrics_d_sigma_omega_cpp", (DL_FUNC) &_psychonetrics_d_sigma_omega_cpp, 5},
    {"_psychonetrics_d_sigma_kappa_cpp", (DL_FUNC) &_psychonetrics_d_sigma_kappa_cpp, 3},
    {"_psychonetrics_d_sigma_rho_cpp", (DL_FUNC) &_psychonetrics_d_sigma_rho_cpp, 5},
    {"_psychonetrics_d_sigma_SD_cpp", (DL_FUNC) &_psychonetrics_d_sigma_SD_cpp, 4},
    {"_psychonetrics_d_sigma_omega_corinput_cpp", (DL_FUNC) &_psychonetrics_d_sigma_omega_corinput_cpp, 7},
    {"_psychonetrics_expHcpp", (DL_FUNC) &_psychonetrics_expHcpp, 6},
    {"_psychonetrics_expHessianCpp", (DL_FUNC) &_psychonetrics_expHessianCpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_psychonetrics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
