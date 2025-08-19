#include<stdio.h>
 unsigned int foo(unsigned int n,unsigned int r){
    if(n>0)
    return (n%r + foo(n/r,r));
    else
    return 0;
 }
int main(){
    unsigned int n = 345, r = 10;
    unsigned int result = foo(n, r);
    printf("Sum of digits of %u in base %u is: %u\n", n, r, result);
    return 0;
}