#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout<<"Locate the Position of the Cursor On the Screen"<<endl;
    while (1)
    {
    	cout<<"Enter S for Run: "<<endl;
        char g = getch(); 
        int x, y;
        POINT xypos;
        
        if (g == 'S' || g == 's')
        {
            cout<<"The Position of the Cursor is : ";
            
            GetCursorPos(&xypos);
            cout<<"X:"<<xypos.x<<"\tY:"<<xypos.y<<endl;
        }
        else
        {
        	cout<<"You Entering Wrong Key : "<<endl;
        	cout<<"Please Enter Correct"<<endl;
		}
	}
}