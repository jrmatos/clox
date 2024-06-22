#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassambleChunk(Chunk *chunk, const char* name);
int disassambleInstruction(Chunk *chunk, int offset);
static int simpleInstruction(const char *name, int offset);

#endif