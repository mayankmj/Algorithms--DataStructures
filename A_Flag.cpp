#include<graphics.h>

#include<conio.h>

#include<stdio.h>

#include<dos.h>int main() 

{

//initilizing graphic driver and 

//graphic mode variable

int graphicdriver=DETECT,graphicmode;

//calling initgraph with parameters

initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

//Printing message for user

outtextxy(20, 20 + 20, "Printing different font Style");

//initilizing variables

int x = 75, y = 75, f = 0;

//for loop to print different fonts

for (f = 0; f <= 5; f++)

{

settextstyle(f, HORIZ_DIR, 1);

outtextxy(x, y, "GoEduHub Technologies...");

y = y + 20;

}

getch();

return 0;

} 