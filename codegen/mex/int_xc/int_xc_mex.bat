@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=int_xc_mex
set MEX_NAME=int_xc_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for int_xc > int_xc_mex.mki
echo COMPILER=%COMPILER%>> int_xc_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> int_xc_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> int_xc_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> int_xc_mex.mki
echo LINKER=%LINKER%>> int_xc_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> int_xc_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> int_xc_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> int_xc_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> int_xc_mex.mki
echo OMPFLAGS= >> int_xc_mex.mki
echo OMPLINKFLAGS= >> int_xc_mex.mki
echo EMC_COMPILER=msvc150>> int_xc_mex.mki
echo EMC_CONFIG=optim>> int_xc_mex.mki
"C:\Program Files\MATLAB\R2017b\bin\win64\gmake" -B -f int_xc_mex.mk
