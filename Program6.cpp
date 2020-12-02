//6] Write an Event Driven program.

#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,h,ch,area,ans;
do{
  cout<<"Press 1 for area of square\nPress 2 for area of triangle\nPress 3 for exit  ";
  cin>>ch;
  {
     switch (ch)
	  {
      case 1: cout<<"Enter side of square  ";
	      cin>>a;
	      area=a*a;
	      cout<<"Area of square is  "<<area;
	      break;
      case 2: cout<<"Enter base and height of triangle  ";
	      cin>>b>>h;
	      area=(b*h)/2;
	      cout<<"Area of triangle is  "<<area;
	      break;
      case 3: exit(0);
	      break;
      default:cout<<" INVALID INPUT ";
	      break;
	     }
	     }
  cout<<"\nDo you want to continue?\nPress 1 for yes \nPress 2 for no  ";
  cin>>ans;
       if (ans==2)
       {
       exit(0);
       }
       else
       {
       } 
 }while (ans==1);
getch();
}   
