// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// multiReplaceC
arma::uvec multiReplaceC(arma::uvec const& x, arma::uvec const& a, arma::uvec const& b);
RcppExport SEXP ParallelPruning_multiReplaceC(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< arma::uvec const& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(multiReplaceC(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
