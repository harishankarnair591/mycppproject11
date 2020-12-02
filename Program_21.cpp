//21] Write a program to find the maximum number in an unsorted array.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,max;
int a[5];
cout<<"Enter the elements of an array=";
for(i=0;i<5;i++)
{
cin>>a[i];
}
max=a[0];
for(i=0;i<5;i++)
{
if(max<a[i])
{
max=a[i];
}
}
cout<<"The maximum number is="<<max;
getch();
}
