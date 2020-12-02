//10] Write a program to print a Hollow triangle.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,i,j,k,n;
float z=1;
cout<<"Enter value of n ";
cin>>n;
     for (i=0;i<n;++i)
     {
     for (j=n;j>i;j--)
     {
     cout<<"  ";
     }
     cout<<" &";
       if (i!=0)
       {
	  for (k=1;k<=z;k++)
	  {
	  cout<<"  ";
	  }
	  cout<<" &";
z=z+2;
	  }
     cout<<"\n";
     }
       for (i=0;i<=z+1;i++)
       {
       cout<<" &";
       }
getch();
}
