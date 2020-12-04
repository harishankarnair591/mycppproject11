//23] Write a program to print the multiplication of matrices.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[2][2],b[2][2];
int i,j,k=0,s=0;
cout<<"Enter the first matrix =";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter the second matrix =";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cin>>b[i][j];
}
}
cout<<"The multiplication of matrices are= \n-";
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
s=s+a[i][k]*b[k][j];
}
cout<<s<<" ";
s=0;
}
cout<<"\n";
}
getch();
}
