//19] Write a program of array with structures.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
int rollno;
char name[20];
float marks;
}s;
void main()
{
clrscr();
student s[3];
for(int i=0;i<3;i++)
{
cout<<"\nEnter rollno=";
cin>>s[i].rollno;
cout<<"Enter name=";                           
gets(s[i].name);
cout<<"Enter marks=";
cin>>s[i].marks;
cout<<" "<<s[i].rollno;
cout<<" "<<s[i].name;
cout<<" "<<s[i].marks;
}
getch();
