//17] Write a program to find whether string is palindrome.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char s[26];
char s1[26];
int n;
cout<<"Enter the string=";
gets(s);
strcpy(s1,s);
strrev(s);
cout<<"The reverse is =";
puts(s);
if(strcmp(s,s1)==0)
{
cout<<"The string is palindrome";
}
else
{
cout<<"The string is not palindrome";
}
getch();
}

