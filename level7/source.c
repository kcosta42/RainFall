#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char pass[80];

void m(void)
{
  printf("%s - %d\n", pass, time(0));
  return;
}

int main(int argc,char **argv)
{
  char *s1;
  char *s2;
  FILE *fs;

  s1 = (char *)malloc(8)
  *s1 = 1;

  s2 = (char *)malloc(8);
  *s2 = 2;

  strcpy(s1[1], argv[1]);
  strcpy(s2[1], argv[2]);

  fs = fopen("/home/user/level8/.pass","r");
  fgets(pass, 68, fs);
  puts("~~");
  return 0;
}
