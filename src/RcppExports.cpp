// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;


RcppExport SEXP _rcpp_module_boot_SPLITT__Tree();
RcppExport SEXP _rcpp_module_boot_SPLITT__OrderedTree();
RcppExport SEXP _rcpp_module_boot_SPLITT__OrderedTreeStringNodes();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_SPLITT__Tree", (DL_FUNC) &_rcpp_module_boot_SPLITT__Tree, 0},
    {"_rcpp_module_boot_SPLITT__OrderedTree", (DL_FUNC) &_rcpp_module_boot_SPLITT__OrderedTree, 0},
    {"_rcpp_module_boot_SPLITT__OrderedTreeStringNodes", (DL_FUNC) &_rcpp_module_boot_SPLITT__OrderedTreeStringNodes, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_SPLITT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
