//24]Write a menu driven program to find the transpose and sum of diagonal elements of matrix.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3],b[3][3];
int i,j,n,sum=0;
cout<<"1.Transpose of matrix \n2. Sum of diagonal elements of matrix";
cout<<"\nEnter your choice=";
cin>>n;
switch(n)
{
case 1:cout<<"Enter the matrix=";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cin>>a[i][j];
	}}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cout<<a[j][i]<<” “;
	}
	cout<<"\n";
	}
	break;
case 2:cout<<"Enter the matrix=";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	cin>>b[i][j];
	}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	if(i==j)
	{
	sum+=b[i][j];
	}
	}
	}
	cout<<"The sum is="<<sum;
	break;
default:cout<<"please give a valid input";
}
getch();
}
