#include <stdio.h>
#include <string.h>

int p(void)
{
  void *eip;
  char s[76];

  fflush(stdout);
  gets(s);
  if ((eip & 0xb0000000) == 0xb0000000)
  {
    printf("(%p)\n", eip);
    _exit(1);
  }
  puts(s);
  strdup(s);
  return;
}

int main(void)
{
  p();
  return 0;
}
