#include <stdio.h>

unsigned int m;

void v(void)
{
  char s[520];

  fgets(s, 512, stdin);
  printf(s);
  if (m == 64)
  {
    fwrite("Wait what?!\n", 1, 12, stdout);
    system("/bin/sh");
  }
  return;
}

int main(void)
{
  v();
  return 0;
}
