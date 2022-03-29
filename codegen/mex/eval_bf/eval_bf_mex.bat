@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=eval_bf_mex
set MEX_NAME=eval_bf_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for eval_bf > eval_bf_mex.mki
echo COMPILER=%COMPILER%>> eval_bf_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> eval_bf_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> eval_bf_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> eval_bf_mex.mki
echo LINKER=%LINKER%>> eval_bf_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> eval_bf_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> eval_bf_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> eval_bf_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> eval_bf_mex.mki
echo OMPFLAGS= >> eval_bf_mex.mki
echo OMPLINKFLAGS= >> eval_bf_mex.mki
echo EMC_COMPILER=msvc150>> eval_bf_mex.mki
echo EMC_CONFIG=optim>> eval_bf_mex.mki
"C:\Program Files\MATLAB\R2017b\bin\win64\gmake" -B -f eval_bf_mex.mk
