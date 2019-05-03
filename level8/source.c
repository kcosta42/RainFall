#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *auth = NULL;
char *service = NULL;

int main(void)
{
  char cVar1;
  char *str;
  int iVar3;
  unsigned int uVar4;
  char *pbVar5;
  char *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char bVar10;
  char input[5];
  char local_8b[2];
  char acStack137[125];

  bVar10 = 0;
  do
  {
    printf("%p, %p \n", auth, service);
    str = fgets(input, 0x80, stdin);
    bVar7 = false;
    bVar9 = str == (char *)0x0;

    if (bVar9)
      return 0;

    iVar3 = 5;
    pbVar5 = input;
    pbVar6 = "auth ";

    do
    {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar9 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (unsigned int)bVar10 * -2 + 1;
      pbVar6 = pbVar6 + (unsigned int)bVar10 * -2 + 1;
    } while (bVar9);

    bVar8 = false;
    bVar7 = (!bVar7 && !bVar9) == bVar7;

    if (bVar7)
    {
      auth = (char *)malloc(4);
      *auth = 0;
      uVar4 = 0xffffffff;
      str = local_8b;
      do
      {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *str;
        str = str + (unsigned int)bVar10 * -2 + 1;
      } while (cVar1 != 0);

      uVar4 = ~uVar4 - 1;
      bVar8 = uVar4 < 0x1e;
      bVar7 = uVar4 == 0x1e;

      if (uVar4 < 0x1f)
        strcpy((char *)auth,local_8b);
    }

    iVar3 = 5;
    pbVar5 = input;
    pbVar6 = "reset";
    do
    {
      if (iVar3 == 0)
        break;

      iVar3 = iVar3 + -1;
      bVar8 = *pbVar5 < *pbVar6;
      bVar7 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (unsigned int)bVar10 * -2 + 1;
      pbVar6 = pbVar6 + (unsigned int)bVar10 * -2 + 1;
    } while (bVar7);

    bVar9 = false;
    bVar7 = (!bVar8 && !bVar7) == bVar8;

    if (bVar7)
      free(auth);

    iVar3 = 6;
    pbVar5 = input;
    pbVar6 = "service";

    do
    {
      if (iVar3 == 0)
        break;
      iVar3 = iVar3 + -1;
      bVar9 = *pbVar5 < *pbVar6;
      bVar7 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (unsigned int)bVar10 * -2 + 1;
      pbVar6 = pbVar6 + (unsigned int)bVar10 * -2 + 1;
    } while (bVar7);

    bVar8 = false;
    bVar7 = (!bVar9 && !bVar7) == bVar9;
    if (bVar7)
    {
      bVar8 = (char *)0xfffffff8 < input;
      bVar7 = acStack137 == (char *)0x0;
      service = strdup(acStack137);
    }

    iVar3 = 5;
    pbVar5 = input;
    pbVar6 = "login";
    do
    {
      if (iVar3 == 0)
        break;
      iVar3 = iVar3 + -1;
      bVar8 = *pbVar5 < *pbVar6;
      bVar7 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (unsigned int)bVar10 * -2 + 1;
      pbVar6 = pbVar6 + (unsigned int)bVar10 * -2 + 1;
    } while (bVar7);

    if ((!bVar8 && !bVar7) == bVar8)
    {
      if (auth[8] == 0)
        fwrite("Password:\n", 1, 10, stdout);
      else
        system("/bin/sh");
    }
  } while( true );
}
