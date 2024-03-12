// We are given a n-digit number
// task is to find out number of digits in given number

#include<stdio.h>

int CountDigits(int a){ // logic function
    int res=0;          // intializing result
    while(a>0){         // iterating till given number becomes zero
        a/=10;          // dividing given number by 10 every iteration
        res++;          // incrementing result for each division
    }       
    return res;         // returning result
}
int main(){             //driver function
    printf("enter a number:");
    int a;
    scanf("%d",&a);
    printf("Number of digits in %d are: %d",a,CountDigits(a));
    return 0;
}