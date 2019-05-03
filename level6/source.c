#include <stdlib.h>
#include <stdio.h>

void n(void)
{
  system("/bin/cat /home/user/level7/.pass");
  return;
}

void m(void)
{
  puts("Nope");
  return;
}

void main(int argc, char **argv)
{
  char *dest;
  void **ppcVar1;

  dest = (char *)malloc(0x40);
  ppcVar1 = (void **)malloc(4);

  *ppcVar1 = m;
  strcpy(dest, argv[1]);

  (**ppcVar1)();
  return;
}
