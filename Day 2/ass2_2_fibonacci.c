#include <stdio.h>
void fib(int a, int b, int n);
int main() {
int n;
   printf("Enter the value of n");
   scanf("%d",&n);
   fib(0,1,n);
   return  0;
}
void fib(int a, int b, int n) {
   if(n>0) {
      int c=a+b;
      printf("%d\t",a);
      fib(b,c,n-1);
   }
}