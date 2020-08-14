
#include <unistd.h>
int ex(void) 
{
  syscall(4, 1, "Hello\n", 6);
  return 0;
}

// int main(void)
// {
//    ex();
// }