//14] Write a program to convert binary to decimal.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int n;
int digit=0,sum=0,cnt=0;
cout<<"Enter a number=";
cin>>n;
while(n!=0)
{
digit=n%10;
sum+=digit*pow(2,cnt);
cnt++;
n=n/10;
}
cout<<sum;
getch();
}
