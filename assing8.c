#include <stdio.h>
int main (){
    // negative positive integer determination
    int a;
    pop:
    printf("Enter your integer: ");
    scanf("%d",&a);
    printf("\n");
    if(a>0){
    printf("you entered a positive number(%d)\n",a);
    
    }
    
    if(a<0){
       
        printf(" enter a valid integer\n");
    
    }
  
goto pop;
    return 0;
}