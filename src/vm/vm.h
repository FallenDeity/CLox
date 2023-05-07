#ifndef LOX_VM_H
#define LOX_VM_H

#include "./../internals/chunks.h"


#define STACK_MAX 256


typedef struct {
    Chunk *chunk;
    uint8_t *ip;
    Value stack[STACK_MAX];
    Value *stackTop;
} VM;


typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;


void initVM();
void freeVM();
void push(Value value);
Value pop();
InterpretResult interpret(const char *source);

#endif//LOX_VM_H
