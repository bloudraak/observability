@echo off
SET SCRIPT_DIR=%~dp0

mkdir %SCRIPT_DIR%\..\obj
pushd %SCRIPT_DIR%\..\obj

cmake ..\src -G "NMake Makefiles"
nmake

popd