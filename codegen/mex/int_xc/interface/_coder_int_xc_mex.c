/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_int_xc_mex.c
 *
 * Code generation for function '_coder_int_xc_mex'
 *
 */

/* Include files */
#include "int_xc.h"
#include "_coder_int_xc_mex.h"
#include "int_xc_terminate.h"
#include "_coder_int_xc_api.h"
#include "int_xc_initialize.h"
#include "int_xc_data.h"

/* Function Declarations */
static void int_xc_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
  const mxArray *prhs[6]);

/* Function Definitions */
static void int_xc_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
  const mxArray *prhs[6])
{
  int32_T n;
  const mxArray *inputs[6];
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4, 6,
                        "int_xc");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "int_xc");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  int_xc_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  int_xc_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(int_xc_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  int_xc_initialize();

  /* Dispatch the entry-point. */
  int_xc_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_int_xc_mex.c) */
