#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *auth = NULL;
char *service = NULL;

int main(void)
{
  char input[128];

  do
  {
    printf("%p, %p \n", auth, service);
    if (!fgets(input, 128, stdin))
      break;

    // This is a pseudocode
    if (strncmp(input, "auth ", 5) == 0)
    {
      auth = (char *)malloc(4);
      char *authName = (input + 5);

      if (strlen(authName) < 31)
        strcpy(auth, authName);
    }
    else if (strncmp(input, "reset", 5) == 0)
    {
      if (auth)
        free(auth);
    }
    else if (strncmp(input, "service", 7) == 0)
    {
        service = strdup(input + 7);
    }
    else if (strncmp(input, "login", 5) == 0)
    {
      if ((&auth + 32) == &service)
        system("/bin/sh");
      else
        fwrite("Password:\n", 1, 10, stdout);
    }
  } while (true);
  return 0;
}
