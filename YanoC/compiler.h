#ifndef yanoc_compiler_h
#define yanoc_compiler_h

#include "chunk.h";
#include "object.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif