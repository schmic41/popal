/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "int_xc.h"
#include "log.h"
#include "error.h"
#include "int_xc_data.h"

/* Function Definitions */
void b_log(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (*x < 0.0) {
    st.site = &p_emlrtRSI;
    b_st.site = &p_emlrtRSI;
    c_error(&b_st);
  }

  *x = muDoubleScalarLog(*x);
}

/* End of code generation (log.c) */
