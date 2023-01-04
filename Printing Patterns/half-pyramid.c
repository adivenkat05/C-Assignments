/* 

*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>
int main()
{
    int num, rows, columns;
    printf("Enter the number of lines:");
    scanf("%d", &num);
    printf("\n");

    for (rows = 0; rows < num; rows ++)
    {
        for (columns = 0; columns < rows + 1; columns ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
