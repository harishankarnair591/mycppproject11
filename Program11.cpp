//11]Write a program to print the series (1/x+1/xx+1/xxx....).

#include<conio.h>
#include<iostream.h>
void main()
{  clrscr();
int i,n,j;
cout<<" Enter limit  ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"1/x";
  for(j=1;j<i;j++)
  {
  cout<<"*x";
  }
 if(i==n)
 {
 cout<<"";
 }
else
{
cout<<"+";
}}
getch();
} 
