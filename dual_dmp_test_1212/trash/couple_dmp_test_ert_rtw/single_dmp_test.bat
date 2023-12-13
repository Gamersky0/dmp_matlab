
@if not "%MINGW_ROOT%" == "" (@set "PATH=%PATH%;%MINGW_ROOT%")

cd .

if "%1"=="" ("D:\Workspace\Matlab\MATLAB~3\bin\win64\gmake"  -f single_dmp_test.mk all) else ("D:\Workspace\Matlab\MATLAB~3\bin\win64\gmake"  -f single_dmp_test.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1