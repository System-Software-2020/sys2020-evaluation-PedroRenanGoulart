#include <unistd.h>
#include "foo.h"

int foo(void) 
{
  syscall(4, 1, "Hello\n", 6);
  return 0;
}
