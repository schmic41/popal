/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * int_xc.c
 *
 * Code generation for function 'int_xc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "int_xc.h"
#include "int_xc_emxutil.h"
#include "error.h"
#include "log.h"
#include "ifWhileCond.h"
#include "error1.h"
#include "int_xc_mexutil.h"
#include "int_xc_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 2,     /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 21,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 22,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 24,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 33,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 43,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 44,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 45,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 54,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 55,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 56,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 59,  /* lineNo */
  "int_xc",                            /* fcnName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 40,  /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  29,                                  /* colNo */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 3, /* lineNo */
  1,                                   /* colNo */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 5, /* lineNo */
  1,                                   /* colNo */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 9, /* lineNo */
  1,                                   /* colNo */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  65,                                  /* lineNo */
  7,                                   /* colNo */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  27,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  27,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  27,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  22,                                  /* colNo */
  "exc",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  35,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  13,                                  /* colNo */
  "Vxc",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  15,                                  /* colNo */
  "Vxc",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  34,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  36,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  59,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  61,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  81,                                  /* colNo */
  "grid.weights",                      /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  92,                                  /* colNo */
  "Vx",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  102,                                 /* colNo */
  "Vc",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  28,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  48,                                  /* colNo */
  "grid.weights",                      /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  12,                                  /* colNo */
  "Ex",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  12,                                  /* colNo */
  "Vx",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  12,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  16,                                  /* colNo */
  "Ec",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  29,                                  /* colNo */
  "Ec",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  16,                                  /* colNo */
  "Vc",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  16,                                  /* colNo */
  "Ec",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  29,                                  /* colNo */
  "Ec",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  16,                                  /* colNo */
  "Vc",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  24,                                  /* colNo */
  "Ex",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  46,                                  /* colNo */
  "grid.weights",                      /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  12,                                  /* colNo */
  "Ex",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  24,                                  /* colNo */
  "Ec",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  46,                                  /* colNo */
  "grid.weights",                      /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  12,                                  /* colNo */
  "Ec",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  12,                                  /* colNo */
  "Ec",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  12,                                  /* colNo */
  "Vc",                                /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  32,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  58,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  60,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  85,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  87,                                  /* colNo */
  "evaluated_funcs",                   /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  98,                                  /* colNo */
  "P",                                 /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  100,                                 /* colNo */
  "P",                                 /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  17,                                  /* colNo */
  "rho",                               /* aName */
  "int_xc",                            /* fName */
  "C:\\Users\\Cameron\\Desktop\\Popal\\int_xc.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void int_xc(const emlrtStack *sp, const struct0_T basis_data[], const int32_T
            basis_size[2], const real_T P_data[], const int32_T P_size[2], const
            struct1_T *grid, const char_T ExchFunctional[6], const char_T
            CorrFunctional[4], const emxArray_real_T *evaluated_funcs, real_T
            Vxc_data[], int32_T Vxc_size[2], real_T *Exc, real_T *rhoInt)
{
  emxArray_real_T *Vc;
  int32_T i0;
  int32_T loop_ub;
  emxArray_real_T *Vx;
  emxArray_real_T *Ex;
  emxArray_real_T *Ec;
  emxArray_real_T *rho;
  int32_T point;
  int32_T s;
  boolean_T b_ExchFunctional[6];
  static const char_T cv0[6] = { 'S', 'l', 'a', 't', 'e', 'r' };

  real_T tempsum;
  boolean_T p;
  real_T xr;
  boolean_T b_CorrFunctional[4];
  static const char_T cv1[4] = { 'V', 'W', 'N', '3' };

  real_T nu;
  static const char_T cv2[4] = { 'V', 'W', 'N', '5' };

  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 30 };

  static const char_T varargin_1[30] = { 'C', 'o', 'r', 'r', 'F', 'u', 'n', 'c',
    't', 'i', 'o', 'n', 'a', 'l', ' ', 'n', 'o', 't', ' ', 'r', 'e', 'c', 'o',
    'g', 'n', 'i', 'z', 'e', 'd', '!' };

  real_T x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  (void)basis_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Vc, 1, &b_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  i0 = Vc->size[0];
  Vc->size[0] = grid->xyz->size[0];
  emxEnsureCapacity_real_T(sp, Vc, i0, &emlrtRTEI);
  loop_ub = grid->xyz->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Vc->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Vx, 1, &c_emlrtRTEI, true);
  i0 = Vx->size[0];
  Vx->size[0] = grid->xyz->size[0];
  emxEnsureCapacity_real_T(sp, Vx, i0, &emlrtRTEI);
  loop_ub = grid->xyz->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Vx->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Ex, 1, &d_emlrtRTEI, true);
  i0 = Ex->size[0];
  Ex->size[0] = grid->xyz->size[0];
  emxEnsureCapacity_real_T(sp, Ex, i0, &emlrtRTEI);
  loop_ub = grid->xyz->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ex->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Ec, 1, &e_emlrtRTEI, true);
  i0 = Ec->size[0];
  Ec->size[0] = grid->xyz->size[0];
  emxEnsureCapacity_real_T(sp, Ec, i0, &emlrtRTEI);
  loop_ub = grid->xyz->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ec->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &rho, 1, &f_emlrtRTEI, true);
  *rhoInt = 0.0;
  i0 = rho->size[0];
  rho->size[0] = grid->xyz->size[0];
  emxEnsureCapacity_real_T(sp, rho, i0, &emlrtRTEI);
  loop_ub = grid->xyz->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    rho->data[i0] = 0.0;
  }

  /*  Calculate density matrix here */
  point = 1;
  while (point - 1 <= grid->xyz->size[0] - 1) {
    loop_ub = 1;
    while (loop_ub - 1 <= basis_size[1] - 1) {
      s = 1;
      while (s - 1 <= basis_size[1] - 1) {
        i0 = rho->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &ib_emlrtBCI, sp);
        }

        i0 = evaluated_funcs->size[0];
        if (!((loop_ub >= 1) && (loop_ub <= i0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &jb_emlrtBCI, sp);
        }

        i0 = evaluated_funcs->size[1];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &kb_emlrtBCI, sp);
        }

        i0 = evaluated_funcs->size[0];
        if (!((s >= 1) && (s <= i0))) {
          emlrtDynamicBoundsCheckR2012b(s, 1, i0, &lb_emlrtBCI, sp);
        }

        i0 = evaluated_funcs->size[1];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &mb_emlrtBCI, sp);
        }

        if (!((loop_ub >= 1) && (loop_ub <= P_size[0]))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, P_size[0], &nb_emlrtBCI, sp);
        }

        if (!((s >= 1) && (s <= P_size[1]))) {
          emlrtDynamicBoundsCheckR2012b(s, 1, P_size[1], &ob_emlrtBCI, sp);
        }

        i0 = rho->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &pb_emlrtBCI, sp);
        }

        rho->data[point - 1] += evaluated_funcs->data[(loop_ub +
          evaluated_funcs->size[0] * (point - 1)) - 1] * evaluated_funcs->data
          [(s + evaluated_funcs->size[0] * (point - 1)) - 1] * P_data[(loop_ub +
          P_size[0] * (s - 1)) - 1];
        s++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      loop_ub++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i0 = rho->size[0];
    if (!((point >= 1) && (point <= i0))) {
      emlrtDynamicBoundsCheckR2012b(point, 1, i0, &o_emlrtBCI, sp);
    }

    i0 = grid->weights->size[0];
    if (!((point >= 1) && (point <= i0))) {
      emlrtDynamicBoundsCheckR2012b(point, 1, i0, &p_emlrtBCI, sp);
    }

    *rhoInt += rho->data[point - 1] * grid->weights->data[point - 1];

    /*  Slater exchange functional */
    for (i0 = 0; i0 < 6; i0++) {
      b_ExchFunctional[i0] = (ExchFunctional[i0] == cv0[i0]);
    }

    if (ifWhileCond(b_ExchFunctional)) {
      st.site = &b_emlrtRSI;
      i0 = rho->size[0];
      loop_ub = (point - 1) + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &c_emlrtBCI, &st);
      }

      b_st.site = &m_emlrtRSI;
      c_st.site = &n_emlrtRSI;
      p = (rho->data[point - 1] < 0.0);
      if (p) {
        d_st.site = &o_emlrtRSI;
        e_st.site = &o_emlrtRSI;
        error(&e_st);
      }

      i0 = Ex->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &q_emlrtBCI, sp);
      }

      Ex->data[point - 1] = muDoubleScalarPower(rho->data[point - 1],
        0.33333333333333331) * -0.73855876638202234;
      st.site = &c_emlrtRSI;
      i0 = rho->size[0];
      loop_ub = (point - 1) + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &b_emlrtBCI, &st);
      }

      b_st.site = &m_emlrtRSI;
      c_st.site = &n_emlrtRSI;
      p = (rho->data[point - 1] < 0.0);
      if (p) {
        d_st.site = &o_emlrtRSI;
        e_st.site = &o_emlrtRSI;
        error(&e_st);
      }

      i0 = Vx->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &r_emlrtBCI, sp);
      }

      Vx->data[point - 1] = muDoubleScalarPower(rho->data[point - 1],
        0.33333333333333331) * -0.73855876638202234 * 1.3333333333333333;
    } else {
      st.site = &d_emlrtRSI;
      b_error(&st);
    }

    /*  xr and A are defined here! */
    i0 = rho->size[0];
    if (!((point >= 1) && (point <= i0))) {
      emlrtDynamicBoundsCheckR2012b(point, 1, i0, &s_emlrtBCI, sp);
    }

    if (rho->data[point - 1] < 1.0E-10) {
      i0 = Ec->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &gb_emlrtBCI, sp);
      }

      Ec->data[point - 1] = 0.0;
      i0 = Vc->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &hb_emlrtBCI, sp);
      }

      Vc->data[point - 1] = 0.0;
    } else {
      i0 = rho->size[0];
      loop_ub = (point - 1) + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &emlrtBCI, sp);
      }

      tempsum = 3.0 / (12.566370614359172 * rho->data[point - 1]);
      st.site = &e_emlrtRSI;
      b_st.site = &m_emlrtRSI;
      c_st.site = &n_emlrtRSI;
      xr = muDoubleScalarPower(tempsum, 0.16666666666666666);
      if (tempsum < 0.0) {
        d_st.site = &o_emlrtRSI;
        e_st.site = &o_emlrtRSI;
        error(&e_st);
      }

      /*  Correction Functional */
      for (i0 = 0; i0 < 4; i0++) {
        b_CorrFunctional[i0] = (CorrFunctional[i0] == cv1[i0]);
      }

      if (b_ifWhileCond(b_CorrFunctional)) {
        nu = muDoubleScalarAtan(0.0448998886415768 / (2.0 * xr + 13.072));
        st.site = &f_emlrtRSI;
        b_st.site = &m_emlrtRSI;
        c_st.site = &n_emlrtRSI;
        st.site = &f_emlrtRSI;
        b_st.site = &m_emlrtRSI;
        c_st.site = &n_emlrtRSI;
        st.site = &g_emlrtRSI;
        b_st.site = &m_emlrtRSI;
        c_st.site = &n_emlrtRSI;
        st.site = &g_emlrtRSI;
        b_st.site = &m_emlrtRSI;
        c_st.site = &n_emlrtRSI;
        x = (xr - -0.409286) * (xr - -0.409286) / ((xr * xr + 13.072 * xr) +
          42.7198);
        st.site = &g_emlrtRSI;
        if (x < 0.0) {
          b_st.site = &p_emlrtRSI;
          c_st.site = &p_emlrtRSI;
          c_error(&c_st);
        }

        tempsum = xr * xr / ((xr * xr + 13.072 * xr) + 42.7198);
        st.site = &f_emlrtRSI;
        b_log(&st, &tempsum);
        i0 = Ec->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &w_emlrtBCI, sp);
        }

        Ec->data[point - 1] = 0.0310907 * ((tempsum + 26.144 * nu /
          0.0448998886415768) - -0.14253052416798392 * (muDoubleScalarLog(x) +
          2.0 * nu * 12.253428 / 0.0448998886415768));
        st.site = &h_emlrtRSI;
        b_st.site = &m_emlrtRSI;
        c_st.site = &n_emlrtRSI;
        i0 = Ec->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &x_emlrtBCI, sp);
        }

        i0 = Vc->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &y_emlrtBCI, sp);
        }

        Vc->data[point - 1] = Ec->data[point - 1] - 0.010363566666666666 *
          ((42.7198 * (xr - -0.409286) - 13.072 * xr * -0.409286) / (((xr * xr +
              13.072 * xr) + 42.7198) * (xr - -0.409286)));
      } else {
        for (i0 = 0; i0 < 4; i0++) {
          b_CorrFunctional[i0] = (CorrFunctional[i0] == cv2[i0]);
        }

        if (b_ifWhileCond(b_CorrFunctional)) {
          nu = muDoubleScalarAtan(6.15199081975908 / (2.0 * xr + 3.72744));
          st.site = &i_emlrtRSI;
          b_st.site = &m_emlrtRSI;
          c_st.site = &n_emlrtRSI;
          st.site = &i_emlrtRSI;
          b_st.site = &m_emlrtRSI;
          c_st.site = &n_emlrtRSI;
          x = xr * xr / ((xr * xr + 3.72744 * xr) + 12.9352);
          st.site = &j_emlrtRSI;
          b_st.site = &m_emlrtRSI;
          c_st.site = &n_emlrtRSI;
          st.site = &j_emlrtRSI;
          b_st.site = &m_emlrtRSI;
          c_st.site = &n_emlrtRSI;
          tempsum = (xr - -0.10498) * (xr - -0.10498) / ((xr * xr + 3.72744 * xr)
            + 12.9352);
          st.site = &i_emlrtRSI;
          if (x < 0.0) {
            b_st.site = &p_emlrtRSI;
            c_st.site = &p_emlrtRSI;
            c_error(&c_st);
          }

          st.site = &j_emlrtRSI;
          if (tempsum < 0.0) {
            b_st.site = &p_emlrtRSI;
            c_st.site = &p_emlrtRSI;
            c_error(&c_st);
          }

          i0 = Ec->size[0];
          if (!((point >= 1) && (point <= i0))) {
            emlrtDynamicBoundsCheckR2012b(point, 1, i0, &t_emlrtBCI, sp);
          }

          Ec->data[point - 1] = 0.0310907 * ((muDoubleScalarLog(x) + 7.45488 *
            nu / 6.15199081975908) - -0.031167608678943783 * (muDoubleScalarLog
            (tempsum) + 2.0 * nu * 3.51748 / 6.15199081975908));
          st.site = &k_emlrtRSI;
          b_st.site = &m_emlrtRSI;
          c_st.site = &n_emlrtRSI;
          i0 = Ec->size[0];
          if (!((point >= 1) && (point <= i0))) {
            emlrtDynamicBoundsCheckR2012b(point, 1, i0, &u_emlrtBCI, sp);
          }

          i0 = Vc->size[0];
          if (!((point >= 1) && (point <= i0))) {
            emlrtDynamicBoundsCheckR2012b(point, 1, i0, &v_emlrtBCI, sp);
          }

          Vc->data[point - 1] = Ec->data[point - 1] - 0.010363566666666666 *
            ((12.9352 * (xr - -0.10498) - 3.72744 * xr * -0.10498) / (((xr * xr
                + 3.72744 * xr) + 12.9352) * (xr - -0.10498)));
        } else {
          st.site = &l_emlrtRSI;
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv0);
          emlrtInitCharArrayR2013a(&st, 30, m0, &varargin_1[0]);
          emlrtAssign(&y, m0);
          b_st.site = &q_emlrtRSI;
          d_error(&b_st, y, &emlrtMCI);
        }
      }

      i0 = Ex->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &ab_emlrtBCI, sp);
      }

      i0 = grid->weights->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &bb_emlrtBCI, sp);
      }

      i0 = Ex->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &cb_emlrtBCI, sp);
      }

      Ex->data[point - 1] *= grid->weights->data[point - 1];
      i0 = Ec->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &db_emlrtBCI, sp);
      }

      i0 = grid->weights->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &eb_emlrtBCI, sp);
      }

      i0 = Ec->size[0];
      if (!((point >= 1) && (point <= i0))) {
        emlrtDynamicBoundsCheckR2012b(point, 1, i0, &fb_emlrtBCI, sp);
      }

      Ec->data[point - 1] *= grid->weights->data[point - 1];
    }

    point++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i0 = Ex->size[0];
  loop_ub = Ec->size[0];
  if (i0 != loop_ub) {
    emlrtSizeEqCheck1DR2012b(i0, loop_ub, &emlrtECI, sp);
  }

  i0 = Ex->size[0];
  emxEnsureCapacity_real_T(sp, Ex, i0, &emlrtRTEI);
  loop_ub = Ex->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Ex->data[i0] += Ec->data[i0];
  }

  emxFree_real_T(&Ec);
  Vxc_size[0] = basis_size[1];
  Vxc_size[1] = basis_size[1];
  loop_ub = basis_size[1] * basis_size[1];
  if (0 <= loop_ub - 1) {
    memset(&Vxc_data[0], 0, (uint32_T)(loop_ub * (int32_T)sizeof(real_T)));
  }

  loop_ub = 1;
  while (loop_ub - 1 <= basis_size[1] - 1) {
    s = 1;
    while (s - 1 <= basis_size[1] - 1) {
      tempsum = 0.0;
      point = 1;
      while (point - 1 <= grid->xyz->size[0] - 1) {
        i0 = evaluated_funcs->size[0];
        if (!((loop_ub >= 1) && (loop_ub <= i0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &h_emlrtBCI, sp);
        }

        i0 = evaluated_funcs->size[1];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &i_emlrtBCI, sp);
        }

        i0 = evaluated_funcs->size[0];
        if (!((s >= 1) && (s <= i0))) {
          emlrtDynamicBoundsCheckR2012b(s, 1, i0, &j_emlrtBCI, sp);
        }

        i0 = evaluated_funcs->size[1];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &k_emlrtBCI, sp);
        }

        i0 = grid->weights->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &l_emlrtBCI, sp);
        }

        i0 = Vx->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &m_emlrtBCI, sp);
        }

        i0 = Vc->size[0];
        if (!((point >= 1) && (point <= i0))) {
          emlrtDynamicBoundsCheckR2012b(point, 1, i0, &n_emlrtBCI, sp);
        }

        tempsum += evaluated_funcs->data[(loop_ub + evaluated_funcs->size[0] *
          (point - 1)) - 1] * evaluated_funcs->data[(s + evaluated_funcs->size[0]
          * (point - 1)) - 1] * grid->weights->data[point - 1] * (Vx->data[point
          - 1] + Vc->data[point - 1]);
        point++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (!((loop_ub >= 1) && (loop_ub <= Vxc_size[0]))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, Vxc_size[0], &f_emlrtBCI, sp);
      }

      if (!((s >= 1) && (s <= Vxc_size[1]))) {
        emlrtDynamicBoundsCheckR2012b(s, 1, Vxc_size[1], &g_emlrtBCI, sp);
      }

      Vxc_data[(loop_ub + Vxc_size[0] * (s - 1)) - 1] = tempsum;
      s++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    loop_ub++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&Vx);
  emxFree_real_T(&Vc);
  *Exc = 0.0;
  point = 1;
  while (point - 1 <= grid->xyz->size[0] - 1) {
    i0 = Ex->size[0];
    if (!((point >= 1) && (point <= i0))) {
      emlrtDynamicBoundsCheckR2012b(point, 1, i0, &d_emlrtBCI, sp);
    }

    i0 = rho->size[0];
    if (!((point >= 1) && (point <= i0))) {
      emlrtDynamicBoundsCheckR2012b(point, 1, i0, &e_emlrtBCI, sp);
    }

    *Exc += Ex->data[point - 1] * rho->data[point - 1];
    point++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&rho);
  emxFree_real_T(&Ex);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (int_xc.c) */
