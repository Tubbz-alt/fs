// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mkdir_
void mkdir_(CharacterVector path, std::string mode_str);
RcppExport SEXP _fs_mkdir_(SEXP pathSEXP, SEXP mode_strSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode_str(mode_strSEXP);
    mkdir_(path, mode_str);
    return R_NilValue;
END_RCPP
}
// scandir_
CharacterVector scandir_(CharacterVector path, bool all, IntegerVector type, bool recurse);
RcppExport SEXP _fs_scandir_(SEXP pathSEXP, SEXP allSEXP, SEXP typeSEXP, SEXP recurseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< bool >::type recurse(recurseSEXP);
    rcpp_result_gen = Rcpp::wrap(scandir_(path, all, type, recurse));
    return rcpp_result_gen;
END_RCPP
}
// rmdir_
void rmdir_(CharacterVector path);
RcppExport SEXP _fs_rmdir_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rmdir_(path);
    return R_NilValue;
END_RCPP
}
// dir_walk_
void dir_walk_(CharacterVector path, Function fun, bool all, IntegerVector type, bool recurse);
RcppExport SEXP _fs_dir_walk_(SEXP pathSEXP, SEXP funSEXP, SEXP allSEXP, SEXP typeSEXP, SEXP recurseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Function >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< bool >::type recurse(recurseSEXP);
    dir_walk_(path, fun, all, type, recurse);
    return R_NilValue;
END_RCPP
}
// move_
void move_(CharacterVector path, CharacterVector new_path);
RcppExport SEXP _fs_move_(SEXP pathSEXP, SEXP new_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    move_(path, new_path);
    return R_NilValue;
END_RCPP
}
// create_
void create_(CharacterVector path, std::string mode_str);
RcppExport SEXP _fs_create_(SEXP pathSEXP, SEXP mode_strSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode_str(mode_strSEXP);
    create_(path, mode_str);
    return R_NilValue;
END_RCPP
}
// stat_
List stat_(CharacterVector path);
RcppExport SEXP _fs_stat_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(stat_(path));
    return rcpp_result_gen;
END_RCPP
}
// access_
LogicalVector access_(CharacterVector path, int mode);
RcppExport SEXP _fs_access_(SEXP pathSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(access_(path, mode));
    return rcpp_result_gen;
END_RCPP
}
// chmod_
void chmod_(CharacterVector path, std::string mode_str);
RcppExport SEXP _fs_chmod_(SEXP pathSEXP, SEXP mode_strSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode_str(mode_strSEXP);
    chmod_(path, mode_str);
    return R_NilValue;
END_RCPP
}
// getmode_
int getmode_(std::string mode);
RcppExport SEXP _fs_getmode_(SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(getmode_(mode));
    return rcpp_result_gen;
END_RCPP
}
// strmode_
std::string strmode_(int mode);
RcppExport SEXP _fs_strmode_(SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(strmode_(mode));
    return rcpp_result_gen;
END_RCPP
}
// unlink_
void unlink_(CharacterVector path);
RcppExport SEXP _fs_unlink_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    unlink_(path);
    return R_NilValue;
END_RCPP
}
// copyfile_
void copyfile_(CharacterVector path, CharacterVector new_path, bool overwrite);
RcppExport SEXP _fs_copyfile_(SEXP pathSEXP, SEXP new_pathSEXP, SEXP overwriteSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    Rcpp::traits::input_parameter< bool >::type overwrite(overwriteSEXP);
    copyfile_(path, new_path, overwrite);
    return R_NilValue;
END_RCPP
}
// chown_
void chown_(CharacterVector path, int uid, int gid);
RcppExport SEXP _fs_chown_(SEXP pathSEXP, SEXP uidSEXP, SEXP gidSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type uid(uidSEXP);
    Rcpp::traits::input_parameter< int >::type gid(gidSEXP);
    chown_(path, uid, gid);
    return R_NilValue;
END_RCPP
}
// link_create_hard_
void link_create_hard_(CharacterVector path, CharacterVector new_path);
RcppExport SEXP _fs_link_create_hard_(SEXP pathSEXP, SEXP new_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    link_create_hard_(path, new_path);
    return R_NilValue;
END_RCPP
}
// link_create_symbolic_
void link_create_symbolic_(CharacterVector path, CharacterVector new_path);
RcppExport SEXP _fs_link_create_symbolic_(SEXP pathSEXP, SEXP new_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    link_create_symbolic_(path, new_path);
    return R_NilValue;
END_RCPP
}
// readlink_
CharacterVector readlink_(CharacterVector path);
RcppExport SEXP _fs_readlink_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(readlink_(path));
    return rcpp_result_gen;
END_RCPP
}
// normalize_
CharacterVector normalize_(CharacterVector path);
RcppExport SEXP _fs_normalize_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_(path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fs_mkdir_", (DL_FUNC) &_fs_mkdir_, 2},
    {"_fs_scandir_", (DL_FUNC) &_fs_scandir_, 4},
    {"_fs_rmdir_", (DL_FUNC) &_fs_rmdir_, 1},
    {"_fs_dir_walk_", (DL_FUNC) &_fs_dir_walk_, 5},
    {"_fs_move_", (DL_FUNC) &_fs_move_, 2},
    {"_fs_create_", (DL_FUNC) &_fs_create_, 2},
    {"_fs_stat_", (DL_FUNC) &_fs_stat_, 1},
    {"_fs_access_", (DL_FUNC) &_fs_access_, 2},
    {"_fs_chmod_", (DL_FUNC) &_fs_chmod_, 2},
    {"_fs_getmode_", (DL_FUNC) &_fs_getmode_, 1},
    {"_fs_strmode_", (DL_FUNC) &_fs_strmode_, 1},
    {"_fs_unlink_", (DL_FUNC) &_fs_unlink_, 1},
    {"_fs_copyfile_", (DL_FUNC) &_fs_copyfile_, 3},
    {"_fs_chown_", (DL_FUNC) &_fs_chown_, 3},
    {"_fs_link_create_hard_", (DL_FUNC) &_fs_link_create_hard_, 2},
    {"_fs_link_create_symbolic_", (DL_FUNC) &_fs_link_create_symbolic_, 2},
    {"_fs_readlink_", (DL_FUNC) &_fs_readlink_, 1},
    {"_fs_normalize_", (DL_FUNC) &_fs_normalize_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_fs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
