//7] Write a program to print a Pattern.

#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
 cout<<"Enter limit ";
 cin>>n;
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=i;j++)
  {
  cout<<j;
  }
  cout<<"\n";
  }
getch();
}
