//15] Write a program to perform different functions.


#include<iostream.h>
#include<conio.h>
void add()
{
int a,b,c;
cout<<"\n&Addition \nEnter the values of a & b=";
cin>>a>>b;
c=a+b;
cout<<"The sum is="<<c;
}

void mult(int c,int d)
{
int e;
e=c*d;
cout<<"The multiplication is="<<e;
}

int div()
{
int f,g,h;
cout<<"\n&Division \nEnter the values of f&g=";
cin>>f>>g;
h=f/g;
cout<<"The division is=";
return h;
}

int sub(int i, int j)
{
int k;
k=i-j;
cout<<"The subtraction is=";
return k;
}

void main()
{
clrscr();
int a,b;
add();

int e,c,d;
cout<<"\n&Multiplication \nEnter the values of c&d=";
cin>>c>>d;
mult(c,d);
int l;
l=div();
cout<<l;

int i,j,k;
cout<<"\n&Subtraction \nEnter the values of i&j=";
cin>>i>>j;
int m;
m=sub(i,j);
cout<<m;
getch();
}
