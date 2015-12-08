// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// znorm
NumericVector znorm(NumericVector ts, double threshold);
RcppExport SEXP jmotif_znorm(SEXP tsSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(znorm(ts, threshold));
    return __result;
END_RCPP
}
// col_means
NumericVector col_means(NumericMatrix m);
RcppExport SEXP jmotif_col_means(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    __result = Rcpp::wrap(col_means(m));
    return __result;
END_RCPP
}
// paa
NumericVector paa(NumericVector ts, int paa_num);
RcppExport SEXP jmotif_paa(SEXP tsSEXP, SEXP paa_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type paa_num(paa_numSEXP);
    __result = Rcpp::wrap(paa(ts, paa_num));
    return __result;
END_RCPP
}
// idx_to_letter
char idx_to_letter(int idx);
RcppExport SEXP jmotif_idx_to_letter(SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    __result = Rcpp::wrap(idx_to_letter(idx));
    return __result;
END_RCPP
}
// letter_to_idx
int letter_to_idx(char letter);
RcppExport SEXP jmotif_letter_to_idx(SEXP letterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< char >::type letter(letterSEXP);
    __result = Rcpp::wrap(letter_to_idx(letter));
    return __result;
END_RCPP
}
// letters_to_idx
IntegerVector letters_to_idx(CharacterVector str);
RcppExport SEXP jmotif_letters_to_idx(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type str(strSEXP);
    __result = Rcpp::wrap(letters_to_idx(str));
    return __result;
END_RCPP
}
// alphabet_to_cuts
NumericVector alphabet_to_cuts(int a_size);
RcppExport SEXP jmotif_alphabet_to_cuts(SEXP a_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    __result = Rcpp::wrap(alphabet_to_cuts(a_size));
    return __result;
END_RCPP
}
// series_to_chars
CharacterVector series_to_chars(NumericVector ts, int a_size);
RcppExport SEXP jmotif_series_to_chars(SEXP tsSEXP, SEXP a_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    __result = Rcpp::wrap(series_to_chars(ts, a_size));
    return __result;
END_RCPP
}
// series_to_string
CharacterVector series_to_string(NumericVector ts, int a_size);
RcppExport SEXP jmotif_series_to_string(SEXP tsSEXP, SEXP a_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    __result = Rcpp::wrap(series_to_string(ts, a_size));
    return __result;
END_RCPP
}
// subseries
NumericVector subseries(NumericVector ts, int start, int end);
RcppExport SEXP jmotif_subseries(SEXP tsSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    __result = Rcpp::wrap(subseries(ts, start, end));
    return __result;
END_RCPP
}
// is_equal_str
bool is_equal_str(CharacterVector a, CharacterVector b);
RcppExport SEXP jmotif_is_equal_str(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type b(bSEXP);
    __result = Rcpp::wrap(is_equal_str(a, b));
    return __result;
END_RCPP
}
// is_equal_mindist
bool is_equal_mindist(CharacterVector a, CharacterVector b);
RcppExport SEXP jmotif_is_equal_mindist(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type b(bSEXP);
    __result = Rcpp::wrap(is_equal_mindist(a, b));
    return __result;
END_RCPP
}
// sax_via_window
std::map<int, CharacterVector> sax_via_window(NumericVector ts, int w_size, int paa_size, int a_size, CharacterVector nr_strategy, double n_threshold);
RcppExport SEXP jmotif_sax_via_window(SEXP tsSEXP, SEXP w_sizeSEXP, SEXP paa_sizeSEXP, SEXP a_sizeSEXP, SEXP nr_strategySEXP, SEXP n_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type w_size(w_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type paa_size(paa_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nr_strategy(nr_strategySEXP);
    Rcpp::traits::input_parameter< double >::type n_threshold(n_thresholdSEXP);
    __result = Rcpp::wrap(sax_via_window(ts, w_size, paa_size, a_size, nr_strategy, n_threshold));
    return __result;
END_RCPP
}
// sax_by_chunking
std::map<int, CharacterVector> sax_by_chunking(NumericVector ts, int paa_size, int a_size, double n_threshold);
RcppExport SEXP jmotif_sax_by_chunking(SEXP tsSEXP, SEXP paa_sizeSEXP, SEXP a_sizeSEXP, SEXP n_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type paa_size(paa_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type n_threshold(n_thresholdSEXP);
    __result = Rcpp::wrap(sax_by_chunking(ts, paa_size, a_size, n_threshold));
    return __result;
END_RCPP
}
// series_to_wordbag
Rcpp::DataFrame series_to_wordbag(NumericVector ts, int w_size, int paa_size, int a_size, CharacterVector nr_strategy, double n_threshold);
RcppExport SEXP jmotif_series_to_wordbag(SEXP tsSEXP, SEXP w_sizeSEXP, SEXP paa_sizeSEXP, SEXP a_sizeSEXP, SEXP nr_strategySEXP, SEXP n_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type w_size(w_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type paa_size(paa_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nr_strategy(nr_strategySEXP);
    Rcpp::traits::input_parameter< double >::type n_threshold(n_thresholdSEXP);
    __result = Rcpp::wrap(series_to_wordbag(ts, w_size, paa_size, a_size, nr_strategy, n_threshold));
    return __result;
END_RCPP
}
// manyseries_to_wordbag
Rcpp::DataFrame manyseries_to_wordbag(NumericMatrix data, int w_size, int paa_size, int a_size, CharacterVector nr_strategy, double n_threshold);
RcppExport SEXP jmotif_manyseries_to_wordbag(SEXP dataSEXP, SEXP w_sizeSEXP, SEXP paa_sizeSEXP, SEXP a_sizeSEXP, SEXP nr_strategySEXP, SEXP n_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type w_size(w_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type paa_size(paa_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nr_strategy(nr_strategySEXP);
    Rcpp::traits::input_parameter< double >::type n_threshold(n_thresholdSEXP);
    __result = Rcpp::wrap(manyseries_to_wordbag(data, w_size, paa_size, a_size, nr_strategy, n_threshold));
    return __result;
END_RCPP
}
// bags_to_tfidf
Rcpp::DataFrame bags_to_tfidf(Rcpp::List data);
RcppExport SEXP jmotif_bags_to_tfidf(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    __result = Rcpp::wrap(bags_to_tfidf(data));
    return __result;
END_RCPP
}
// cosine_sim
Rcpp::DataFrame cosine_sim(Rcpp::List data);
RcppExport SEXP jmotif_cosine_sim(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type data(dataSEXP);
    __result = Rcpp::wrap(cosine_sim(data));
    return __result;
END_RCPP
}
// euclidean_dist
double euclidean_dist(NumericVector seq1, NumericVector seq2);
RcppExport SEXP jmotif_euclidean_dist(SEXP seq1SEXP, SEXP seq2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type seq1(seq1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type seq2(seq2SEXP);
    __result = Rcpp::wrap(euclidean_dist(seq1, seq2));
    return __result;
END_RCPP
}
// early_abandoned_dist
double early_abandoned_dist(NumericVector seq1, NumericVector seq2, double upper_limit);
RcppExport SEXP jmotif_early_abandoned_dist(SEXP seq1SEXP, SEXP seq2SEXP, SEXP upper_limitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type seq1(seq1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type seq2(seq2SEXP);
    Rcpp::traits::input_parameter< double >::type upper_limit(upper_limitSEXP);
    __result = Rcpp::wrap(early_abandoned_dist(seq1, seq2, upper_limit));
    return __result;
END_RCPP
}
// find_discords_brute_force
Rcpp::DataFrame find_discords_brute_force(NumericVector ts, int w_size, int discords_num);
RcppExport SEXP jmotif_find_discords_brute_force(SEXP tsSEXP, SEXP w_sizeSEXP, SEXP discords_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type w_size(w_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type discords_num(discords_numSEXP);
    __result = Rcpp::wrap(find_discords_brute_force(ts, w_size, discords_num));
    return __result;
END_RCPP
}
// find_discords_hot_sax
Rcpp::DataFrame find_discords_hot_sax(NumericVector ts, int w_size, int paa_size, int a_size, double n_threshold, int discords_num);
RcppExport SEXP jmotif_find_discords_hot_sax(SEXP tsSEXP, SEXP w_sizeSEXP, SEXP paa_sizeSEXP, SEXP a_sizeSEXP, SEXP n_thresholdSEXP, SEXP discords_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< int >::type w_size(w_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type paa_size(paa_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type a_size(a_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type n_threshold(n_thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type discords_num(discords_numSEXP);
    __result = Rcpp::wrap(find_discords_hot_sax(ts, w_size, paa_size, a_size, n_threshold, discords_num));
    return __result;
END_RCPP
}
