#include <stdio.h>

int main(int argc,char **argv)
{
  FILE *fs;
  char pass[66];
  char buff[65];

  fs = fopen("/home/user/end/.pass","r");

  if ((!fs) || (argc != 2))
    return -1;

  fread(pass, 1, 66, fs);
  pass[atoi(argv[1])] = 0;

  fread(buff, 1, 65, fs);
  fclose(fs);

  if ( strcmp(pass, argv[1]) == 0)
    execl("/bin/sh","sh",0);
  else
    puts(buff);

  return 0;
}
