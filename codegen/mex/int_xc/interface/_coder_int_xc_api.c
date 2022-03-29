/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_int_xc_api.c
 *
 * Code generation for function '_coder_int_xc_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "int_xc.h"
#include "_coder_int_xc_api.h"
#include "int_xc_emxutil.h"
#include "int_xc_data.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_int_xc_api",                 /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T y_data[], int32_T y_size[2]);
static const mxArray *b_emlrt_marshallOut(const real_T u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P, const
  char_T *identifier, real_T **y_data, int32_T y_size[2]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *basis, const
  char_T *identifier, struct0_T y_data[], int32_T y_size[2]);
static const mxArray *emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *grid, const
  char_T *identifier, struct1_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ExchFunctional, const char_T *identifier, char_T y[6]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[6]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *CorrFunctional, const char_T *identifier, char_T y[4]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *evaluated_funcs, const char_T *identifier, emxArray_real_T *y);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[6]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T y_data[], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[6] = { "atom", "A", "a", "alpha", "d", "N" };

  static const int32_T dims[2] = { 1, 20 };

  const boolean_T bv0[2] = { false, true };

  int32_T sizes[2];
  int32_T i1;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckVsStructR2012b(sp, parentId, u, 6, fieldNames, 2U, dims, &bv0[0],
    sizes);
  y_size[0] = sizes[0];
  y_size[1] = sizes[1];
  for (i1 = 0; i1 < sizes[1]; i1++) {
    thisId.fIdentifier = "atom";
    y_data[i1].atom = c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
      u, i1, 0, "atom")), &thisId);
    thisId.fIdentifier = "A";
    d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, i1, 1, "A")),
                       &thisId, y_data[i1].A);
    thisId.fIdentifier = "a";
    d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, i1, 2, "a")),
                       &thisId, y_data[i1].a);
    thisId.fIdentifier = "alpha";
    d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, i1, 3, "alpha")),
                       &thisId, y_data[i1].alpha);
    thisId.fIdentifier = "d";
    d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, i1, 4, "d")),
                       &thisId, y_data[i1].d);
    thisId.fIdentifier = "N";
    d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, i1, 5, "N")),
                       &thisId, y_data[i1].N);
  }

  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m3);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P, const
  char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r0;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(P), &thisId, &r0, y_size);
  *y_data = r0;
  emlrtDestroyArray(&P);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *basis, const
  char_T *identifier, struct0_T y_data[], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(basis), &thisId, y_data, y_size);
  emlrtDestroyArray(&basis);
}

static const mxArray *emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 0, 0 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m2, u_size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  real_T *r1;
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r1, y_size);
  *y_data = r1;
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *grid, const
  char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(grid), &thisId, y);
  emlrtDestroyArray(&grid);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "xyz", "weights" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "xyz";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "xyz")),
                     &thisId, y->xyz);
  thisId.fIdentifier = "weights";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "weights")),
                     &thisId, y->weights);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ExchFunctional, const char_T *identifier, char_T y[6])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(ExchFunctional), &thisId, y);
  emlrtDestroyArray(&ExchFunctional);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[6])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *CorrFunctional, const char_T *identifier, char_T y[4])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(CorrFunctional), &thisId, y);
  emlrtDestroyArray(&CorrFunctional);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *evaluated_funcs, const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(evaluated_funcs), &thisId, y);
  emlrtDestroyArray(&evaluated_funcs);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[2] = { 1, 3 };

  int32_T i2;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i2 = 0; i2 < 3; i2++) {
    ret[i2] = (*(real_T (*)[3])emlrtMxGetData(src))[i2];
  }

  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 20, 20 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv3[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv3);
  ret_size[0] = iv3[0];
  ret_size[1] = iv3[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 3 };

  const boolean_T bv2[2] = { true, false };

  int32_T iv4[2];
  int32_T i3;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv4);
  i3 = ret->size[0] * ret->size[1];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  emxEnsureCapacity_real_T1(sp, ret, i3, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv3[1] = { true };

  int32_T iv5[1];
  int32_T i4;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv3[0],
    iv5);
  i4 = ret->size[0];
  ret->size[0] = iv5[0];
  emxEnsureCapacity_real_T(sp, ret, i4, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[6])
{
  static const int32_T dims[2] = { 1, 6 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 6);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4])
{
  static const int32_T dims[2] = { 1, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 4);
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 20, -1 };

  const boolean_T bv4[2] = { true, true };

  int32_T iv6[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv4[0],
    iv6);
  ret->size[0] = iv6[0];
  ret->size[1] = iv6[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void int_xc_api(const mxArray * const prhs[6], const mxArray *plhs[3])
{
  real_T (*Vxc_data)[400];
  struct1_T grid;
  emxArray_real_T *evaluated_funcs;
  struct0_T basis_data[20];
  int32_T basis_size[2];
  real_T (*P_data)[400];
  int32_T P_size[2];
  char_T ExchFunctional[6];
  char_T CorrFunctional[4];
  int32_T Vxc_size[2];
  real_T Exc;
  real_T rhoInt;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  Vxc_data = (real_T (*)[400])mxMalloc(sizeof(real_T [400]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct1_T(&st, &grid, &g_emlrtRTEI, true);
  emxInit_real_T1(&st, &evaluated_funcs, 2, &g_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "basis", basis_data, basis_size);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "P", (real_T **)&P_data, P_size);
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "grid", &grid);
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "ExchFunctional", ExchFunctional);
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "CorrFunctional", CorrFunctional);
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "evaluated_funcs",
                     evaluated_funcs);

  /* Invoke the target function */
  int_xc(&st, basis_data, basis_size, *P_data, P_size, &grid, ExchFunctional,
         CorrFunctional, evaluated_funcs, *Vxc_data, Vxc_size, &Exc, &rhoInt);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Vxc_data, Vxc_size);
  plhs[1] = b_emlrt_marshallOut(Exc);
  plhs[2] = b_emlrt_marshallOut(rhoInt);
  evaluated_funcs->canFreeData = false;
  emxFree_real_T(&evaluated_funcs);
  emxFreeStruct_struct1_T(&grid);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_int_xc_api.c) */
