#include <unistd.h>
#include "ex2.h"

int ex(void) 
{
  syscall(4, 1, "Hello\n", 6);
  return 0;
}
