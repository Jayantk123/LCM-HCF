#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int x,y,z,a,b,hcf,lcm;

printf("Enter numbers:\n");
scanf("%d%d",&x,&y);
a=x;
b=y;

while(b!=0)
{
z=b;
b=a%b;
a=z;
}
hcf=a;
lcm=(x*y)/hcf;
printf("HCF of %d and %d is %d\n",x,y,hcf);
printf("LCM of %d and %d is %d",x,y,lcm);


getch();
}