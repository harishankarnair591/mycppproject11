//4] Write a program to print Fibonacci series.


#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=0,b=1,c,n,i;
 cout<<"Enter limit: ";
 cin>>n;
 for(i=2;i<=n;i++)
 {
  cout<<","<<b;
  c=a+b;
  a=b;
  b=c;
  }
  getch();
  }
