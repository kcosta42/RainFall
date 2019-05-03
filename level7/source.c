#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char *c;

void m(void)
{
  time_t t;

  t = time((time_t *)0x0);
  printf("%s - %d\n", c, t);
  return;
}

int main(int argc,char **argv)
{
  char *s1;
  void *pvVar1;
  char *s2;
  FILE *fs;

  s1 = (char *)malloc(8);
  *(char *)s1 = 1;
  pvVar1 = malloc(8);
  *(void **)(s1 + 4) = pvVar1;
  s2 = (char *)malloc(8);
  *(char *)s2 = 2;
  pvVar1 = malloc(8);
  *(void **)(s2 + 4) = pvVar1;

  strcpy(*(char **)(s1 + 4),argv[1]);
  strcpy(*(char **)(s2 + 4),argv[2]);

  fs = fopen("/home/user/level8/.pass","r");
  fgets(c,0x44,fs);

  puts("~~");
  return 0;
}
