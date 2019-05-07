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

int main(int argc, char **argv)
{
  char *s;
  void (*f)(void);

  s = (char *)malloc(64);
  f = (void **)malloc(4);

  *f = m;
  strcpy(s, argv[1]);

  f();
  return 0;
}
