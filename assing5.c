#include <stdio.h>
int main(){
    printf(" Enter your marks to know you passed or failed: ");
    float a;
    scanf("%f",&a);
    if(a>=40.00)
    {
        printf(" You passed test with %.2f marks",a);
    }
    else
    {
        printf("You failed your test with %.2f marks",a);
    }
    return 0;
}