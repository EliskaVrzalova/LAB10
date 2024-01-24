// eliska vrzalova
// login: c00301768
// date: 22/01/2024
// program description:
// The program declares an array of 9 floats. It reads from the user the float values and fills the array.
// It then calculates and displays the number of odd and even numbers within the array. 
//any known bugs: no validation on user input

#include <iostream>

int main2()
{
	float oddEven[9];
	const int MAX_NUMS = 9;
	int number = 0;
	int oddCount = 0;
	int evenCount = 0;

	for (int count = 0; count < MAX_NUMS; count++)
	{
		std::cout << "Enter a number:" << std::endl;
		std::cin >> oddEven[count];
		number = oddEven[count]; //assigning numbers in the array to float so it truncates and can be checked as odd or even,
		//it still remains as float in the array, undamaged
		if (number % 2 == 0)
		{
			evenCount++;
		}
		else
		{
			oddCount++;
		} // end if
	} // end for

	//answer
	std::cout << " There are " << evenCount << " even numbers and " << oddCount << " odd numbers in the array";
	system("Pause");
	return 0;
}
