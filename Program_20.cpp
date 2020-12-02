//20] Write a program to arrange the elements of an array using bubble sort technique.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,temp,j;
int a[5];
cout<<"Enter the elements of an array=";
for(i=0;i<5;i++)
{
cin>>a[i];
}
for(i=0;i<5;i++)
{
for(j=0;j<5-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"The sorted elements are=";
for(i=0;i<5;i++)
{
cout<<"\n"<<a[i];
}
getch();
}
