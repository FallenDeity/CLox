#ifndef LOX_DEBUGGER_H
#define LOX_DEBUGGER_H

#include "./../internals/chunks.h"

void disassembleChunk(const Chunk *chunk, const char *name);
int disassembleInstruction(const Chunk *chunk, int offset);

#endif//LOX_DEBUGGER_H
