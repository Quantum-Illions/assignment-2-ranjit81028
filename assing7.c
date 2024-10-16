#include <stdio.h>
int main(){
    int w;
    int a=1;
    int c=1;
    printf("Factorial of : ");
    scanf("%d",&w);
    while(a<=w)
    {
        c*=a;
        a++;
    }
    printf("factorial of %d: %d",w,c);
    return 0;
}