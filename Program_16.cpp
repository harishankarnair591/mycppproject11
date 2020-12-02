//16]Write a program to print the sum of elements of an array.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,sum=0;
int a[5];
cout<<"Enter the elements of an array=";
for(i=0;i<5;i++)
{
cin>>a[i];
}
cout<<"The sum of elements in array are=";
for(i=0;i<5;i++)
{
sum+=a[i];
}
cout<<sum;
getch();
}
