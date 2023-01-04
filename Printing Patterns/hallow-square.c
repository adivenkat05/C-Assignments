/*

* * * * *
*       *
*       *
*       *  
* * * * * 

*/

#include<stdio.h>
int main ()
{
    int num, rows, columns;
    printf("Enter the number lines: ");
    scanf("%d", &num);

    for (rows = 0; rows < num; rows ++)
    {
        for (columns = 0, columns < num; columns ++;)
        {
            if((rows == 0) || (rows == num - 1) || (columns == 0) || (columns == num - 1)){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
