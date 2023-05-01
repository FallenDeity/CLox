#include "debugger.h"
#include <stdio.h>


void disassembleChunk(const Chunk *chunk, const char *name) {
    printf("== %s ==\n", name);
    for (int offset = 0; offset < chunk->count;) {
        offset = disassembleInstruction(chunk, offset);
    }
}

static int simpleInstruction(const char *name, int offset) {
    printf("%s\n", name);
    return offset + 1;
}

int disassembleInstruction(const Chunk *chunk, int offset) {
    printf("%04d ", offset);
    uint8_t instruction = chunk->code[offset];
    if (instruction == OP_RETURN) {
        return simpleInstruction("OP_RETURN", offset);
    }
    printf("Unknown opcode %d\n", instruction);
    return offset + 1;
}
