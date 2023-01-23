#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int func(char you, char comp){
//return 1 if win, returns -1 if lose and 0 if draw
if(you==comp){
return 0;  //condition for draw
}
//condition for win and lose
if(you=='s'&&comp=='p'){
return -1;
}
else if(you=='p'&&comp=='s'){
return 1;
}
if(you=='p'&&comp=='k'){
return -1;
}
else if(you=='k'&&comp=='p'){
return 1;
}
if(you=='k'&&comp=='s'){
return -1;
}
else if(you=='s'&&comp=='k'){
return 1;
}
}
void main()
{
clrscr();
int number;
srand(time(0));
number=rand()%100+1;
char you, comp;
if(number<33){
comp='s';
}
else if(number>33&&number<67){
comp='p';
}
else{
comp='k';
}
printf("Enter 's' for stone, 'p' for paper and 'k' for scissors\n");
scanf("%c",&you);
int result = func(you, comp);
printf("You choose %c and computer choose %c\n",you,comp);
if(result==0){
printf("Game Draw!!");
}
else if(result==1){
printf("You Win!!");
}
else{
printf("You Lose!!");
}
getch();
}