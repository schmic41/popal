/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * int_xc.h
 *
 * Code generation for function 'int_xc'
 *
 */

#ifndef INT_XC_H
#define INT_XC_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "int_xc_types.h"

/* Function Declarations */
extern void int_xc(const emlrtStack *sp, const struct0_T basis_data[], const
                   int32_T basis_size[2], const real_T P_data[], const int32_T
                   P_size[2], const struct1_T *grid, const char_T
                   ExchFunctional[6], const char_T CorrFunctional[4], const
                   emxArray_real_T *evaluated_funcs, real_T Vxc_data[], int32_T
                   Vxc_size[2], real_T *Exc, real_T *rhoInt);

#endif

/* End of code generation (int_xc.h) */
