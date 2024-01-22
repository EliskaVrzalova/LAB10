// eliska vrzalova
// login: c00301768
// date: 22/01/2024
// program description:
// The function is called arrayCalulations() and declares an array of 8 integers. display the list of numbers in the array on the screen and calculate the following information:
// 1)	The largest number in the array.
// 2)	The smallest number in the array.
// 3)	The sum of numbers in the array.
// 4)	The average number in the array.

#include <iostream>

int main()
{
	int arrayCalculations[8];
	int number = 0;
	float sum = 0.0f;
	int largestNum = 0;
	int smallestNum = 11;
	float average = 0.0f;
	const int MAX_NUMS = 8;

	for (int count = 0; count < MAX_NUMS; count++)
	{
		std::cout << "Enter a number:" << std::endl;
		std::cin >> number;
		arrayCalculations[count] = number;
		if (arrayCalculations[count] >= 1 && arrayCalculations[count] <= 10)
		{
			sum = sum + arrayCalculations[count];
			if (arrayCalculations[count] > largestNum)
				{
				largestNum = arrayCalculations[count];
				}
			if (arrayCalculations[count] < smallestNum)
			{
				smallestNum = arrayCalculations[count];
			}
		}
		else
		{
			std::cout << "Error:the number entered must be in the range 1-10";
		}// end if
	} // end for
	average = sum / MAX_NUMS;
	//answers 
	std::cout << "The sum of the numbers: " << sum << std::endl;
	std::cout << "The largest number: " << largestNum << std::endl;
	std::cout << "The smallest number: " << smallestNum << std::endl;
	std::cout << "The average of the numbers: " << average << std::endl;

	system("Pause");
	return 0;

}
