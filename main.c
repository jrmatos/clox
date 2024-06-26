#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
  printf("CLox program started!\n");

  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);
  disassambleChunk(&chunk, "test chunk");
  freeChunk(&chunk);

  return 0;
}
