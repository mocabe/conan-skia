include(default)

[settings]
os=Linux
arch=x86_64
compiler=clang
compiler.cppstd=20
compiler.libcxx=libc++
compiler.version=17

[conf]
tools.build:compiler_executables={"c": "clang", "cxx": "clang++"}
