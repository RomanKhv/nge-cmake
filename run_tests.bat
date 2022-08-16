if not exist .\build\CMakeCache.txt (
	@REM call make_all.bat
	cmake -G "Visual Studio 17 2022" -S . -B build
	cmake --build build
)

cmake --build build --target RUN_TESTS
@REM ctest C debug --test-dir build --output-on-failure

pause