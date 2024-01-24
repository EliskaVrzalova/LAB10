
// The following variables are GLOBAL variables
const int MAX_PLAYERS = 8;	// maximum number of players
int noOfPlayers = 8;	// the number of active players 
std::string namesArray[MAX_PLAYERS];
int healthArray[MAX_PLAYERS];

#include <iostream>
#include <string>

int calculateSum();
float calculateAvg();
void displayPlayers();
void displayReversePlayers();
void findHighestHealth();
void findLowestHealth();

int main()
{
	int sum = 0;
	float average = 0.0f;
	//function calls
	sum = calculateSum();
	std::cout << "The sum of players health in array:" << sum << std::endl;
	average = calculateAvg();
	std::cout << "The average of players health in array:" << average << std::endl;
	displayPlayers();
	displayReversePlayers();
	findHighestHealth();
	findLowestHealth();

	system("pause");
	return 0;
}
void initializeArrays()
// Initialize the two arrays
{
	namesArray[0] = "Tom";
	namesArray[1] = "Sam";
	namesArray[2] = "Ann";
	namesArray[3] = "Ki";
	namesArray[4] = "Joe";
	namesArray[5] = "Ray";
	namesArray[6] = "Dave";
	namesArray[7] = "Sue";

	healthArray[0] = 3;
	healthArray[1] = 6;
	healthArray[2] = 2;
	healthArray[3] = 1;
	healthArray[4] = 4;
	healthArray[5] = 6;
	healthArray[6] = 1;
	healthArray[7] = 6;
}
int calculateSum()
// calculates the sum of players health in the array 
{
	int sum = 0;
	for (int count = 0; count < MAX_PLAYERS; count++)
	{
		sum = sum + healthArray[count];
	}
	return sum;
}
float calculateAvg()
{
	float sum = 0.0f;
	float average = 0.0f;
	for (int count = 0; count < MAX_PLAYERS; count++)
	{
		sum = sum + healthArray[count];
	}
	average = sum / MAX_PLAYERS;
	return average;
}