#include<stdio.h>
int main(){
    char op;
    int a,b;
    scanf("%d",&a);
    printf("Enter the opreator ");
    scanf("%s",&op);
    scanf("%d",&b);
    switch(op){
        case ('+'):
            printf(" = %d",a+b);
            break;
        case ('-'):
            printf(" = %d",a-b);
            break;
        case ('*'):
            printf(" = %d",a*b);
            break;
        case ('/'):
            printf(" = %d",a/b);
            break;
        case ('%'):
            printf(" = %d",a%b);
            break;
        default :
            printf("You enter wrong opreator.\ntry agine");
    }
    return 0;
}