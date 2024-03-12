//We are given an n-digit number. 
//The task is to find if the number is palindrome or not, provided that, n>=0.

#include<stdio.h>
int isPalindrome(int a){
    int temp=a,reverse=0,rem=0;        //intializing reverse and remainder as 0
    // staring the iteration to get reverse of a number
    while(temp>0){
        rem=temp%a;                     // obtaining last digit as a remainder when divided by 10
        reverse=reverse*10+rem;         // reverse can be obtained by multiplying result * 10 and adding remainder
        temp/=10;                       // removing last digit by dividing it by 10
    }
    return a==reverse;
}
int main(){
    printf("enter a number:");
    int a;
    scanf("%d",&a);
    if(isPalindrome(a))
        printf("%d is a palindrome.",a);
    else 
        printf("%d is a palindrome.",a);
    return 0;
}
