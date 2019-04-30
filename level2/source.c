#include <stdio.h>
#include <string.h>

void p(void)
{
  unsigned int eip;
  char s[76];

  fflush(stdout);
  gets(s);
  if ((eip & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n", eip);
    _exit(1);
  }
  puts(s);
  return (strdup(s));
}

void main(void)
{
  return (p());
}
