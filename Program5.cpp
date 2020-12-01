//5] Write a program to print a series (1,4,7………).

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i;
cout<<"Enter limit ";
cin>>n;
 for (i=1;i<=n;i=i+3)
 {
 cout<<i<<",";
 }
getch();
}

