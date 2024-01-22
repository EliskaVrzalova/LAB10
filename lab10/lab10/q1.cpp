// eliska vrzalova
// login: c00301768
// date: 22/01/2024
// program title and description:
// The program declares an array of 10 integers. It then fills the array with 10 random numbers in the range 8-22. first it displays on the screen the numbers within the array
// from index position 0 – 9. Then it displays on the screen the numbers in reverse order from index position 9 - 0. And lastly it displays every second number on the screen
// i.e. it displays the numbers at index 0, 2, 4, 6, 8. 
// any known bugs: none

#include <iostream>
#include <cstdlib>
#include <ctime>

int main1()
{
	int randomNumbers[10]; // array decleration
	int const MAX_NUMS = 10;
	int const MAX_INDEX = 9;
	
	srand(time(nullptr)); //random numbers generator set up

	//dipslays numbers within the array from index position 0-9
	for (int count = 0; count < MAX_NUMS; count++)
	{
		randomNumbers[count] = (rand() % 15) + 8;
		std::cout << randomNumbers[count] << " ";
	}
	std::cout << std::endl;
	// dipslays numbers within the array from index position 9-0
	for (int count = MAX_INDEX; count >= 0; count--)
	{
		std::cout << randomNumbers[count] << " ";
	}
	std::cout << std::endl;
	// displays every second number on the screen i.e. it displays the numbers at index 0, 2, 4, 6, 8. 
	for (int count = 0; count < MAX_NUMS; count = count + 2)
	{
		std::cout << randomNumbers[count] << " ";
	}
	system("Pause");
	return 0;

}