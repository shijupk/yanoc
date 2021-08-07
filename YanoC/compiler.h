#ifndef yanoc_compiler_h
#define yanoc_compiler_h

#include "chunk.h";
#include "object.h"

bool compile(const char* source, Chunk* chunk);

#endif