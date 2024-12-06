// #include <stdio.h>

// int main(){
//     printf("hello world");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int num,sum=0;
//     printf("enter the number");
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         sum+=num%10;
//         num/=10;
//          printf("sum:%d",sum);
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int i,num,fact=1;
    printf("enter the num:");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial=%d\n",fact);
    return 0;
        

}