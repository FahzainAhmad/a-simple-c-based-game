#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>


void main(){
	int i,pos,reward = rand() % 100 + 1, score = 0;
	char ctr;
	clrscr();
	pos = 0;
	while(1){
	clrscr();
		for(i=0;i<100;i++){
			if(i%10==0){
				printf("\n");
			}
			if(i==pos){
				printf(" @");
			}
			else if(i==reward){
				printf(" $");
			}
			else{
				printf(" *");
			}
		}
		printf("\n\nScore : %d", score);
		printf("\nEnter Your Commnd - WASD/ : ");
		ctr = getchar();
		if(pos == reward){
			score++;
			reward = rand() % 100 + 1;
		}
		if(ctr=='d'){
			if(pos!=99){
				 pos++;
			}
			else{
				pos=pos;
			}
		}
		else if(ctr=='a'){
			if(pos!=0){
				 pos--;
			}
			else{
				pos=pos;
			}
		}
		else if(ctr=='s'){
			if(pos>89 && pos<100){
				pos = pos;
			}
			else{
				pos = pos + 10;
			}
		}
		else if(ctr=='w'){
			if(pos!=0){
				pos = pos - 10;
			}
			else{
				pos=pos;
			}
		}
		else if(ctr=='/'){
			break;
		}
	}
}