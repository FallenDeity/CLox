#include "common.h"
#include "debugger/debugger.h"
#include "internals/chunks.h"


int main(int argc, const char *argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}