#include <stdio.h>

void o(void)
{
  system("/bin/sh");
  _exit(1);
}

void n(void)
{
  char s[520];

  fgets(s, 0x200, stdin);
  printf(s);
  exit(1);
}

void main(void)
{
  n();
  return;
}
