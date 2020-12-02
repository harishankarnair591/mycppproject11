//12]Write a program to print the sum of series-( 1/1!+1/2!+1/3!.....).
 
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float n,i,fact=0;
cout<<" Enter limit ";
cin>>n;
   for (i=1;i<=n;i++)
   {
   fact=fact+i;
   }
cout<<1/fact;
getch();
}
