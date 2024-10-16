#include <stdio.h>
int main(){
    
    for(int a=1; a<=100;++a)
    {
        printf("%d\n",a);
        if (a%47==0)
        break;
    }
    
    return 0;
}