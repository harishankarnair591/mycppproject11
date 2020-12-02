//13]Write a program to print the sum of series-( ½ +1/4+1/6+1/8.....).

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float sum=0;
float i,n;
cout<<" Enter the limit   ";
cin>>n;
for (i=2;i<=n;i+=2)
   {
   sum=sum+(1/i);
   }
cout<<sum;
getch();
}
