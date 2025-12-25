#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("value of a is %d\n",a);   //value of a is 10
    printf("value of *p is %d\n",*p);  //value of *p is 10
    printf("value of p is %p\n",p);  //value of p is 0061FF1C
    printf("address of a is %p\n",&a);  //address of a is 0061FF1C
    printf("address of p is %p\n",&p);  //address of p is 0061FF18
    return 0;
}