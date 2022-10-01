#include <stdio.h>
#include <math.h>
int main() 
{
    int num;
    printf("Provide the number: ");
    scanf("%d",&num);
    printf("The square root of %d is %.3f",num, sqrt(num));
    return 0;
}