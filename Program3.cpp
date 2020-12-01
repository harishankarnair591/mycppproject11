//3] Write a program to return table of entered number.


#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,b;
cout<<"Enter the value : ";
cin>>a;
for(i=1;i<=10;i++)
{
 b=i*a;
 cout<<"\n"<<a<<" X "<<i<<" = "<<b;
 }
 getch();
 }
