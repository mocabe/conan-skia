include(default)

[settings]
os=Linux
arch=x86_64
compiler=gcc
compiler.cppstd=20
compiler.libcxx=libstdc++11
compiler.version=13

[conf]
tools.build:compiler_executables={"c": "gcc", "cxx": "g++"}
