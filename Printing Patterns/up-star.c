/*

* * * * * * * * * * * 
* * * * *   * * * * * 
* * * *       * * * * 
* * *           * * * 
* *               * * 
*                   * 

*/#include<stdio.h>
int main()
{
    int rows, columns, number;
    printf("Enter the value for number: ");
    scanf("%d", &number);

    for (rows = 0; rows <= number; rows ++)
    {
        for (columns = - number; columns <= number; columns ++)
        {
            if (-rows < columns && columns < rows){
                printf("  ");
            } else {
                printf("* ");
            }
        }
            printf("\n");
    }
}
