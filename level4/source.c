#include <stdio.h>

unsigned int m;

void p(char *s)
{
  printf(s);
  return;
}

void n(void)
{
  char s[520];

  fgets(s, 0x200, stdin);
  p(s);
  if (m == 0x1025544) {
    system("/bin/cat /home/user/level5/.pass");
  }
  return;
}


void main(void)
{
  n();
  return;
}
