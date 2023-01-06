// Multiplication table

#include<stdio.h>
int main(){

    int table;
    printf("Enter the table: ");
    scanf("%d", &table);

    for (i = 0; i <= table; i ++){
        printf("%d x %d = %d\n", table, i, table * i);
    }
}
