#include <iostream>
#include<cstdlib>
#include<cstdio>

struct Player// establishes base variables for the player 
{
	char playerName[80];
	int healthPoints = 100;
	int Score;
	float position;
	float velocity ;
};

int main()
{
	
	Player first;
	printf("Gimme a name to call you and a score to start you at");
	printf("\n Name:");
	scanf_s("%s", &first.playerName,80);
	printf("\n Score:");
	scanf_s("%d",&first.Score);

	printf("\n Alrighty so your name is %s and your starting score is %d", first.playerName , first.Score);
	printf("\n");
	system("pause");

}