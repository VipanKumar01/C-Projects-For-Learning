#include<graphics.h>

main()
{
initwindow(1200,600);
//setcolor(GREEN);
for(int i=0;i<=1200;i++)
{
line(0,436,1200,436);
circle(100+i,400,35);		//1st Wheel
line(100+i,400,120+i,290);	//Sheet line
line(118+i,310,233+i,310);	//Main line
line(230+i,290,250+i,400);	//Handle line
line(200+i,290,260+i,290);	//Handle
line(190+i,280,200+i,290);	//1st picker 
line(250+i,280,259+i,290);	//2nd picker
line(100+i,290,130+i,290);	//Sheet
line(100+i,400,241+i,340);	//Diagonal line
circle(250+i,400,35);		//2md Wheel
delay(10);
cleardevice();
}

getch();
}