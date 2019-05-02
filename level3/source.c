#include <stdio.h>

unsigned int m;

void v(void)
{
  char s[520];

  fgets(s, 0x200, stdin);
  printf(s);
  if (m == 0x40) {
    fwrite("Wait what?!\n", 1, 0xc, stdout);
    system("/bin/sh");
  }
  return;
}

void main(void)
{
  v();
  return;
}
