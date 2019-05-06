#include <string.h>
#include <unistd.h>

int main(int argc,char **argv)
{
  size_t var;
  char buff[40];

  var = atoi(argv[1]);
  if (var < 10)
  {
    memcpy(buff, argv[2], var * 4);

    if (var == 1464814662)
      execl("/bin/sh", "sh", 0);

    var = 0;
  }
  else
    var = 1;

  return var;
}
