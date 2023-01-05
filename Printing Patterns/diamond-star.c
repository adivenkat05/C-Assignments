/*

          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          *
*/

#include<stdio.h>
int main()
{
    int number, rows, columns, space, l;
    printf("Enter the value for number: ");
    scanf("%d", &number);
    for (rows = - number; rows < number; rows ++)
    {
        if(rows < 0){
            l = - rows;
        } 
        else {
            l = rows;
        }

        for (space = 0; space < l; space ++)
        {
            printf("  ");
        }

        for (columns = 0; columns < 2 * (number - l) + 1; columns ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
