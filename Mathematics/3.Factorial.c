// We are given a number n
// task is to findout factorial of a number
#include<stdio.h>
int factorialRecursion(int a){
    return (a<=1)?1:(a*factorialRecursion(a-1));
}
int factorialIteration(int a){
    int result=1;
    for(int i=2;i<=a;i++)
        result*=i;
    return result;
}
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("Factorial of  given number %d is \n %d!=%d(recursion)\n %d!=%d",a,a,factorialRecursion(a),factorialIteration(a));
    return 0;
}