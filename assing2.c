#include <stdio.h>
int main (){
    int a;
    float b;
    printf("Enter a integer: ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter a decimal number: ");
    scanf("%f",&b);
    printf("%f \n %d",(float) a, (int) b);
    return 0;
}