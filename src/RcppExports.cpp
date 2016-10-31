// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// which_eq_one
IntegerVector which_eq_one(int d);
RcppExport SEXP isofor_which_eq_one(SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(which_eq_one(d));
    return rcpp_result_gen;
END_RCPP
}
// iTreeFilter_numeric
LogicalVector iTreeFilter_numeric(NumericVector x, int ni, NumericMatrix Tree, List Forest);
RcppExport SEXP isofor_iTreeFilter_numeric(SEXP xSEXP, SEXP niSEXP, SEXP TreeSEXP, SEXP ForestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ni(niSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Tree(TreeSEXP);
    Rcpp::traits::input_parameter< List >::type Forest(ForestSEXP);
    rcpp_result_gen = Rcpp::wrap(iTreeFilter_numeric(x, ni, Tree, Forest));
    return rcpp_result_gen;
END_RCPP
}
// iTreeFilter_factor
LogicalVector iTreeFilter_factor(IntegerVector x, int ni, NumericMatrix Tree, List Forest);
RcppExport SEXP isofor_iTreeFilter_factor(SEXP xSEXP, SEXP niSEXP, SEXP TreeSEXP, SEXP ForestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type ni(niSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Tree(TreeSEXP);
    Rcpp::traits::input_parameter< List >::type Forest(ForestSEXP);
    rcpp_result_gen = Rcpp::wrap(iTreeFilter_factor(x, ni, Tree, Forest));
    return rcpp_result_gen;
END_RCPP
}
// pathLength_cpp
NumericVector pathLength_cpp(DataFrame x, NumericMatrix Tree, List Forest, double e, int ni, int len);
RcppExport SEXP isofor_pathLength_cpp(SEXP xSEXP, SEXP TreeSEXP, SEXP ForestSEXP, SEXP eSEXP, SEXP niSEXP, SEXP lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Tree(TreeSEXP);
    Rcpp::traits::input_parameter< List >::type Forest(ForestSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< int >::type ni(niSEXP);
    Rcpp::traits::input_parameter< int >::type len(lenSEXP);
    rcpp_result_gen = Rcpp::wrap(pathLength_cpp(x, Tree, Forest, e, ni, len));
    return rcpp_result_gen;
END_RCPP
}
