include(default)

[settings]
os=Android
os.api_level=34
arch=armv8
compiler=clang
compiler.version=18
compiler.libcxx=c++_static
compiler.cppstd=17

[tool_requires]
android-ndk/r27c
make/4.4.1
