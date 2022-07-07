
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int incremental_stars()
{
    int i, j, num;
    printf("Insert Odd Number > 5");
    scanf("%d", &num);
    
    if(num % 2 == 0)
        printf("Error! Please enter an odd number > 5");
    else
        for (i = 1; i <= num; ++i) {
            for (j = 1; j <= i; ++j) {
                printf("*");
            }
            printf("\n");
        }
    return 0;
}
