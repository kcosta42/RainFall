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
    switch (input)
    {
      case "auth ":
        auth = (char *)malloc(4);
        char *authName = (input + 5);

        if (strlen(authName) < 31)
          strcpy(auth, authName);
        break;

      case "reset":
        if (auth)
          free(auth);
        break;

      case "service":
        service = strdup(input + 7);
        break;

      case "login":
        if ((&auth + 32) == &service)
          system("/bin/sh");
        else
          fwrite("Password:\n", 1, 10, stdout);
        break;
    }

  } while (true);
  return 0;
}
