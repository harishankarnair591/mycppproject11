//2] Write a program to print greatest number entered by user.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,b;
cout<<"Enter two no.s  ";
cin>>a>>b;
  if (a>b)
  {
  cout<<a<<" is greater than "<<b;
  }
  else if (b>a)
  {
  cout<<b<<" is greater than "<<a;
  }
  else if (a==b)
  {
  cout<<"Both the numbers are equal";
  }
  else
  {
  cout<<"INVALID INPUT ";
  }
  getch();
  }
