#include <stdio.h>
#define pi 3.14159
int main(){
    float a;
    printf("Enter a radius of circle: ");
    scanf("%f",&a);
    printf("\n");
    printf("Area of provided circle is: %.2f",(pi*a)*a);
    return 0;
}