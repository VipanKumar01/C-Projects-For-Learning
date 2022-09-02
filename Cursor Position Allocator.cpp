
#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout<<"Locate the Position of the Cursor On the Screen"<<endl;
    while (1)
    {
    	cout<<"Enter G for Run: "<<endl;
        char g = getch(); 
        int x, y;

        if (g == 'g' || g == 'G')
        {
            cout<<"Enter Position of the Cursor : "<<endl;
            cin>>x>>y;
            
            SetCursorPos(x, y);      // Built in Function
        }
        else
        {
        	cout<<"You Entering Wrong Key : "<<endl;
        	cout<<"Please Enter Correct Key"<<endl;
		}
    }
}