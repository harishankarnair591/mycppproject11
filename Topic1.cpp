Write a program to calculate the percentage of four subjects.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
double a,b,c,d,per;
cout<<"Enter marks out of 100";
cout<<"\nEnter marks of 1st subject  ";
cin>>a;
cout<<"Enter marks of 2nd subject  ";
cin>>b;
cout<<"Enter marks of 3rd subject  ";
cin>>c;
cout<<"Enter marks of 4th subject  ";
cin>>d;
per=(a+b+c+d)/4;
cout<<"Your percentage is  "<<per;
getch();
}
