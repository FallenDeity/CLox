cmake_minimum_required(VERSION 3.25)
project(Lox C)

set(CMAKE_C_STANDARD 11)

add_executable(Lox src/common.h src/internals/chunks.c src/internals/chunks.h src/internals/memory.c src/internals/memory.h src/main.c src/debugger/debugger.c src/debugger/debugger.h src/internals/value.c src/internals/value.h src/vm/vm.c src/vm/vm.h src/compiler/compiler.c src/compiler/compiler.h src/compiler/scanner.c src/compiler/scanner.h)