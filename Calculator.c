//CALCULATOR
#include <stdio.h>
void add()
{
    int a, b, sum;

    printf("GIVE FIRST NUMBER:");
    scanf("%d", &a);
    printf("GIVE SECOND NUMBER:");
    scanf("%d", &b);
    sum = a + b;
    printf("SUM IS %d\n", sum);
}
void sub()
{
    int a, b;

    printf("GIVE FIRST NUMBER:");
    scanf("%d", &a);
    printf("GIVE SECOND NUMBER:");
    scanf("%d", &b);

    printf("SUB IS %d\n", a - b);
}
void mul()
{
    int a, b;

    printf("GIVE FIRST NUMBER:");
    scanf("%d", &a);
    printf("GIVE SECOND NUMBER:");
    scanf("%d", &b);

    printf("PRODUCT IS %d\n", a * b);
}
void div()
{
    int a, b;

    printf("GIVE FIRST NUMBER:");
    scanf("%d", &a);
    printf("GIVE SECOND NUMBER:");
    scanf("%d", &b);

    printf("ANSWER IS %d\n", a / b);
}void mod(){
    int a,b;

    printf("GIVE FIRST NUMBER:");
    scanf("%d",&a);
    printf("GIVE SECOND NUMBER:");
    scanf("%d",&b);
    
    printf("MODULUS IS %d\n",a%b);
}


int main()
{
    int op = 0;
    INTERFACE:
    printf("*************************\n");
    printf("WELCOME TO MY CALCULATOR\n");
    printf("SELECT THE OPERRATION\n");
    printf("1.ADDITION\n");
    printf("2.SUBSTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5.MODULUS\n");
    printf("6.EXIT\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        add();
        goto INTERFACE;
        break;
    case 2:
        sub();
        goto INTERFACE;
        break;
    case 3:
        mul();
        goto INTERFACE;
        break;
    case 4:
        div();
        goto INTERFACE;
        break;
    case 5:
        mod();
        goto INTERFACE;
        break;
    case 6:
        printf("THANKS FOR USING OUR CALCULATOR");
         break;
    default:
        printf("Invalid operation.\n");
    }
    
    return 0;
}
