#include "Rcpp.h"
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector fuse(NumericVector x) {
  int n = x.size();
  NumericVector result(n);
  
  for(int i = 0; i < n; ++i) {
    result[i] = exp(x[i]) + 3 * sin(x[i]);
  }
  return result;
}
