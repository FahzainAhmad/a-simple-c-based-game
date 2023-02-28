//IG : cybersoul.exe
//Contact : saiyedfahzain191@gmail.com

//Importing Required Libraries.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main(){
	
	//Initializing required variables.
	
	//i is the iteration variable for loop.
	//pos is the position of the character.
	//reward is the position of the reward.
	//score variable stores player's score.
	//ctr stores player's movement commands.
	
	int i,pos,reward = rand() % 100 + 1, score = 0;
	char ctr;
	clrscr();
	
	//Initializing position as 0.
	
	pos = 0;
	while(1){
	clrscr();
		
		// Loop for rendering the Map.
		
		for(i=0;i<100;i++){
			if(i%10==0){
				printf("\n"); // Next line after every 10 characters.
			}
			if(i==pos){
				printf(" @"); // Place the player.
			}
			else if(i==reward){
				printf(" $"); // Place the reward.
			}
			else{
				printf(" *"); //The moveable area.
			}
		}
		
		printf("\n\nScore : %d", score); // Show Score.
		printf("\nEnter Your Commnd - WASD/ : ");
		ctr = getchar(); // Save user command in ctr variable.
		
		// If Player and Reward are at the same position, Add score + 1 and generate Reward on another random position.
		if(pos == reward){ 
			score++;
			reward = rand() % 100 + 1;
		}
		
		// Move player according to command.
		
		if(ctr=='d' || ctr=='D'){
			if(pos!=99){
				 pos++;
			}
			else{
				pos=pos;
			}
		}
		else if(ctr=='a' || ctr=='A'){
			if(pos!=0){
				 pos--;
			}
			else{
				pos=pos;
			}
		}
		else if(ctr=='s' || ctr=='S'){
			if(pos>89 && pos<100){
				pos = pos;
			}
			else{
				pos = pos + 10;
			}
		}
		else if(ctr=='w' || ctr=='W'){
			if(pos!=0){
				pos = pos - 10;
			}
			else{
				pos=pos;
			}
		}
		
		// Break the loop and exit if player enters "/".
		
		else if(ctr=='/'){
			break;
		}
	}
}
