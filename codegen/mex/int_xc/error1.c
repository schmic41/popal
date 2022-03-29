/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error1.c
 *
 * Code generation for function 'error1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "int_xc.h"
#include "error1.h"
#include "int_xc_mexutil.h"
#include "int_xc_data.h"

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 30 };

  static const char_T varargin_1[30] = { 'E', 'x', 'c', 'h', 'F', 'u', 'n', 'c',
    't', 'i', 'o', 'n', 'a', 'l', ' ', 'n', 'o', 't', ' ', 'r', 'e', 'c', 'o',
    'g', 'n', 'i', 'z', 'e', 'd', '!' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 30, m1, &varargin_1[0]);
  emlrtAssign(&y, m1);
  st.site = &q_emlrtRSI;
  d_error(&st, y, &emlrtMCI);
}

/* End of code generation (error1.c) */
