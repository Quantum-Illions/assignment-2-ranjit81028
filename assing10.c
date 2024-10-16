#include <stdio.h>
int main(){
    printf("Simple Calculator\n");
    int a;
    int b;
    char c;
    printf(" Your input: ");
    scanf("%d",&a);
    scanf("%c",&c);
    scanf("%d",&b);
    printf("\n");
    switch (c)
    {
        case '+' :
        printf(" Your output is: %d", a+b);
        break;
        case '-' :
        printf("Your output is: %d",a-b);
        break;
        case '*':
        printf("Your output is: %d", a*b);
        break;
        case '/':
        printf("Your output is: %d", a/b);
        break;
    }

    return 0;
}