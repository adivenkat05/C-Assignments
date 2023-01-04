/*

* * * * *
* * * *
* * * 
* *
*

*/

#include<stdio.h>
int main()
{
    int num, rows, columns;
    printf("Enter the number of lines: ");
    scanf("%d", &num);
    for(rows = 0; rows < num; rows ++)
    {
        for (columns = 0; columns < num  - rows; columns ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
