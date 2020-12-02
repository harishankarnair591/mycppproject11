//9] Write a program to check whether number is prime or not.

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,i,count=0;
	cout<<"Enter a number:";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<"This is a prime number";
	}
	else
	{
		cout<<"This is not a prime number";
	}
	getch();
}
