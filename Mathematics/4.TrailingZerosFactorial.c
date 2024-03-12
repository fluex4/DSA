// We are given a number
// task is to find trailing zeroes in factorial of the given number
#include<stdio.h>
int trailZeroes(int a){
    int res=0;
    for(int i=5;i<=a;i*=5){
        res+=(a/i);
    }
    return res;
}
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("No of Trailing zeroes in %d! : %d",a,trailZeroes);
    return 0;
}