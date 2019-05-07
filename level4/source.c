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

  fgets(s, 512, stdin);
  p(s);
  if (m == 16930116)
    system("/bin/cat /home/user/level5/.pass");

  return;
}

int main(void)
{
  n();
  return 0;
}
