/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include<stdio.h>
int main()
{
    int num, space, rows, columns;
    printf("Enter the number of lines: ");
    scanf("%d", &num);

    for (rows = 0; rows <= num; rows ++)
    {
        for (space = 0; space <= num - rows - 1; space ++)
        {
            printf("  ");
        }
        for (columns = 0; columns < rows * 2 - 1; columns ++){
            printf("* ");
        }
        printf("\n");
    }
}
