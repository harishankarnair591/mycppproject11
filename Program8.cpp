//8] Write a program to print a Pattern of Diamond.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,n;
 cout<<"Enter limit ";
 cin>>n;
  for(i=1;i<=n;i++)
  {
  cout<<"\n";
    for(j=n;j>=i;j--)
    {
    cout<<" ";
    }
       for (k=1;k<=i;++k)
       {
       cout<<"* ";
       }
   }
int m,p,o;
  for(m=2;m<=n;m++)
  {
  cout<<"\n";                                                                             
    for(p=1;p<=m;++p)
    {
    cout<<" ";
    }
      for(o=n;o>=m;o--)
      {
      cout<<"* ";
      }
  }
getch();
}
