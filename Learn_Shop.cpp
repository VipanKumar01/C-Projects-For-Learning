#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	char a;
	cout<<"Enter First Letter of Your Website"
	<<"\nG -> Geeksforgeeks"
	<<"\nJ -> JavaTpoint\n";
	
	scanf("%c",&a);
switch(a)
{
	case 'G':
	case 'g':
		system("start www.geeksforgeeks.com/");	
	break;
	case 'J':
	case 'j':
		system("start https://www.javatpoint.com/cpp-tutorial");
		break;
}

}