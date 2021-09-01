/** 
 * Sample Program 
 * Open Source Software Lab (15B17CI575)
 * Aachman Mittal 9919103218
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Hello World!!!\n");
    printf("This program generates and prints a random multiplication table\n\n");

    srand(time(0));
    long long number = rand();

    int i = 1;
    long long multiple = number;

    for (; i <= 10; i++)
    {     
        printf("%lld X %d = %lld \n", number, i, multiple);
        multiple +=number;
    }
    
    return 0;
}