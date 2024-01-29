
#include <iostream>
#include <string>

// The following variables are GLOBAL variables
const int MAX_PLAYERS = 8;	// maximum number of players
int noOfPlayers = 8;	// the number of active players 
std::string namesArray[MAX_PLAYERS];
int healthArray[MAX_PLAYERS];


int calculateSum();
float calculateAvg();
void displayPlayers();
void displayReversePlayers();
void findHighestHealth();
void findLowestHealth();

void initializeArrays();


int main()
{
	int sum = 0;
	float average = 0.0f;
	//function calls

	initializeArrays();
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
	healthArray[7] = 5;
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
//// calculates the average of the players health in the array 
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
void displayPlayers()
// displays the players names and their associated health values to the screen in sequential order within the function.
{
	std::string message = "";
	for (int count = 0; count < MAX_PLAYERS; count++)
	{
		message  = message + " The player " + namesArray[count] + " has health of " + std::to_string(healthArray[count]);
	}
	std::cout << message << std::endl;
}

void displayReversePlayers()
// displays the names and their associated health values in reverse within the function. 
{
	std::string message = "";
	for (int count = MAX_PLAYERS -1; count >= 0; count--)
	{
		message = " The player " + namesArray[count] + " has health of " + std::to_string(healthArray[count]);
	}
	std::cout << message << std::endl;
}

void findHighestHealth()
// finds the player with the highest health in the array and outputs the name of the player and their highest health within the function. 
// If there is more than one player with the highest health, output only the last player’s name.
{
	int highestHealth = 0;
	std::string message = "";
	int position = 0;
	int count = 0;

	for (count; count < MAX_PLAYERS; count++)
	{
		if (highestHealth < healthArray[count])
		{
			highestHealth = healthArray[count];
			position = count;

		}
		if (highestHealth == healthArray[count])
		{
			position = count;
		}
		
	}

	message = message + " Player " + namesArray[position] + " health " + std::to_string(highestHealth);
	std::cout << message << std::endl;
}

void findLowestHealth()
// finds the player with the lowest health in the array and outputs the name of the player and their lowest health within the function. 
//if there is more than one player with the lowest health, output only the first player’s name.
{
	int lowestHealth = healthArray[0];
	std::string message = "";

	for (int count = 0; count < MAX_PLAYERS; count++) // finds the lowest health
	{

		if (lowestHealth > healthArray[count])
		{
			lowestHealth = healthArray[count];
		}
	}
	int count = 0;
	for (count = 0; count < MAX_PLAYERS; count++) // finds the first position of the lowest health found in the previous loop
	{
		if (lowestHealth == healthArray[count])
		{
			break;
		}
	}
	message = message + " Player " + namesArray[count] + " health " + std::to_string(lowestHealth);
	std::cout << message << std::endl;
}


