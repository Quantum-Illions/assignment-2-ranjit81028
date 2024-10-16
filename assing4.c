#include <stdio.h>
   enum day{monday=1, tuesday, wednesday, thursday, friday, saturday, sunday};
    int main(){
        int a;
        pop:
        printf("Enter your date(btw 1 and 7): ");
        scanf("%d",&a);
        if (a>=1&&a<=7)
        {
            switch (a)
            {
                case monday:
                printf("Day on given date is: monday");
                break;
                case 2:
                printf("Day on given date is: tuesday");
                break;
                case 3:
                printf("Day on given date is: wednesday");
                break;
                case 4:
                printf("Day on given date is: thursday");
                break;
                case 5:
                printf("Day on given date is: friday");
                break;
                case 6:
                printf("Day on given date is: saturday");
                break;
                case 7:
                printf("Day on given date is: sunday");
                break;
            }
        }
        else if(a>7)
        {
           printf(" Enter a valid date\n");
            
        }
        goto pop;
    return 0;
}