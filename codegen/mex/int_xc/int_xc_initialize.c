/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * int_xc_initialize.c
 *
 * Code generation for function 'int_xc_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "int_xc.h"
#include "int_xc_initialize.h"
#include "_coder_int_xc_mex.h"
#include "int_xc_data.h"

/* Function Definitions */
void int_xc_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (int_xc_initialize.c) */
