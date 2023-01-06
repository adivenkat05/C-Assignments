// Multiplication table.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
int table = atoi(argv[1]);

for (int i = 0; i <= 10; i ++){
	printf("%d x %d = %d\n", table, i, table * i);
}
}

/*

~ ./a.out 10
10 x 0 = 0
10 x 1 = 10
10 x 2 = 20
10 x 3 = 30
10 x 4 = 40
10 x 5 = 50
10 x 6 = 60
10 x 7 = 70
10 x 8 = 80
10 x 9 = 90
10 x 10 = 100

*/
