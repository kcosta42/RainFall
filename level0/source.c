#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE
#include <unistd.h>

int main(int argc, char **argv)
{
  char *sh;
  gid_t gid;
  uid_t uid;
  char *arg[2];

  if (atoi(argv[1]) == 423)
  {
    sh = strdup("/bin/sh");

    gid = getegid();
    uid = geteuid();

    setresgid(gid, gid, gid);
    setresuid(uid, uid, uid);

    arg[0] = "sh";
    arg[1] = 0;
    execv("/bin/sh", arg);
  }
  else
    fwrite("No !\n", 1, 5, stderr);
}
