/*
  
~> Ao Ser Executado,
~> Este Será o Resultado:
  
     * 
    * * 
   *   * 
  *     * 
 *       * 
* * * * * * 
  
~> Credits: @ZeusXalocDev | @jeNiShso | @EnormityHacking
~> Code: OpenSource LCC
~> Lang: Pt-Br
~> Obs: Na Utilização Deste Código, Deixe os Creditos!

 
*/
  
#include <stdio.h>
#include <conio.h>

void drawTriangle(char f, char filler, int comprimento)
{
    int comece = 2;
    int base = 4;
    int i, sp, j, b;
    char *developer = "ZeusXalocDev";
    for (i = comece; i <= comprimento; i++)
    {
        for (sp = 0; sp <= comprimento - i; sp++)
        {
            printf(" ");
        }
        if (i > comece)
        {
            printf("%c ", f);
        }
        if (i > comece)
        {
            for (b = base; b <= i; b++)
            {
                printf("%c ", filler);
            }
        }
        printf("%c \n", f);
    }

    for (j = base; j < comprimento + base; j++)
    {
        printf("%c ", f);
    }
    printf("\n");
    printf("\n");
    printf("~> Code By: %s\n", developer);
}

void main()
{
    int comprimento = 6;
    clrscr();
    drawTriangle('*', ' ', comprimento);
    getch();
}
