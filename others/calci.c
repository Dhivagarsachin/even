#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter the values");
    scanf("%d,%d",&a,&b);
    printf("enter ur choice:");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
        {
            printf("addition oa a and b is :%d",a+b);
            break;
        }
        case '-':
        {
            printf("subtraction of a and b is :%d ",a-b);
            break;
        }
        case '*':
        {
            printf("multiplication of a and b is: %d",a*b);
            break;
        }
        case '/':
        {
            printf("divisionof a and b is: %d",a/b);
            break;
        }
        case '%':
        {
            printf("modulo of a and b is:%d",a%b);
            break;    
        }
        default:
        {
            printf("hi baby ");
            
        }
            return 0;
    }
}
