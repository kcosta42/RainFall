#include <stdio.h>
#include <string.h>

void p(char *s,char *msg)
{
  char buff[4104];

  puts(msg);
  read(0, buff, 4096);

  *strchr(buff, '\n') = 0;

  strncpy(s, buff, 20);
  return;
}

void pp(char *s)
{
  char str1[20];
  char str2[20];

  p(str1, " - ");
  p(str2, " - ");

  strcpy(s, str1);
	s[strlen(s)] = 32;

  strcat(s, str2);
  return;
}

int main(void)
{
  char s[54];

  pp(s);
  puts(s);
  return 0;
}
