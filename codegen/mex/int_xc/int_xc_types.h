/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * int_xc_types.h
 *
 * Code generation for function 'int_xc'
 *
 */

#ifndef INT_XC_TYPES_H
#define INT_XC_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T atom;
  real_T A[3];
  real_T a[3];
  real_T alpha[3];
  real_T d[3];
  real_T N[3];
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  emxArray_real_T *xyz;
  emxArray_real_T *weights;
} struct1_T;

#endif                                 /*typedef_struct1_T*/
#endif

/* End of code generation (int_xc_types.h) */
