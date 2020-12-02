//18] Write a program of nested structure.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct addr
{
int houseno;
char area[26];
char city[26];
char state[26];
};
struct emp
{
int empno;
char name[20];
char desig[20];
addr address;
float basic;
}worker;
void main()
{
clrscr();
cout<<"Enter the Employee number:";
cin>>worker.empno;
cout<<"Enter the name of employee:";
gets(worker.name);
cout<<"Enter the designation of employee:";
gets(worker.desig);
cout<<"Enter address";
cout<<"\nEnter the house number:";
cin>>worker.address.houseno;
cout<<"Enter the area:";
gets(worker.address.area);
cout<<"Enter the city:";
gets(worker.address.city);
cout<<"Enter the state:";
gets(worker.address.state);
cout<<"Enter the basic pay:";
cin>>worker.basic;
cout<<"The employee number is:"<<worker.empno;
cout<<"\nThe name of employee is:"<<worker.name;
cout<<"\nThe designation of employee is:"<<worker.desig;
cout<<"\nThe house number is:"<<worker.address.houseno;
cout<<"\nThe area is:"<<worker.address.area;
cout<<"\nThe city is:"<<worker.address.city;
cout<<"\nThe state is:"<<worker.address.state;
cout<<"\nThe basic pay is:"<<worker.basic;
getch();
}
