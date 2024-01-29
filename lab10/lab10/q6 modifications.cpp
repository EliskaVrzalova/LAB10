
#include <iostream>
#include <string>

// The following variables are GLOBAL variables
const int MAX_PLAYERS1 = 8;	// maximum number of players
int noOfPlayers1 = 8;	// the number of active players 
std::string namesArray1[MAX_PLAYERS1];
int healthArray1[MAX_PLAYERS1];

int findFirstHealthValue(int t_healthValue);
std::string findAllHealthValue(int t_allHealthValues);
int findLastName(std::string t_inputName);


void initializeArrays1();

int main()
{
	initializeArrays1();

	//q7
	int healthValue = 0;
	int healthFirstOccurence = 0;
	std::cout << "Enter a health value:" << std::endl;
	std::cin >> healthValue;
	healthFirstOccurence = findFirstHealthValue(healthValue); // function call
	std::cout <<"Health value "<<healthValue<<" found at index position"<< healthFirstOccurence << std::endl;

	//q8
	int allHealthValues = 0;
	std::cout << "Enter a health value:" << std::endl;
	std::cin >>allHealthValues;
	std::string allOccurences = "";
	allOccurences = findAllHealthValue(allHealthValues);
	std::cout << allOccurences << std::endl;

	//q9

	std::string inputName = "";
	std::cout << "Enter a name:" << std::endl;
	std::cin>>inputName;
	int foundNameIndex = 0;
	foundNameIndex = findLastName(inputName);
	std::cout << "Name " << inputName << " found at index position " << foundNameIndex << std::endl;
	system("Pause");
	return 0;
}
void initializeArrays1()
// Initialize the two arrays
{
	namesArray1[0] = "Tom";
	namesArray1[1] = "Sam";
	namesArray1[2] = "Ann";
	namesArray1[3] = "Ki";
	namesArray1[4] = "Joe";
	namesArray1[5] = "Ray";
	namesArray1[6] = "Dave";
	namesArray1[7] = "Sue";

	healthArray1[0] = 3;
	healthArray1[1] = 6;
	healthArray1[2] = 2;
	healthArray1[3] = 1;
	healthArray1[4] = 4;
	healthArray1[5] = 6;
	healthArray1[6] = 1;
	healthArray1[7] = 5;
}
//q7 modification
int findFirstHealthValue(int t_healthValue)
//  accepts a health value argument and then searches for the first occurrence of that particular health value in the array. 
// If it finds it, it should return its index position within the array. If it is not in the array the function should return -1. 
{
	bool findFirstOccurrence = false;
	int indexPos;
	int count = 0;

	for (count; count < MAX_PLAYERS1; count++)
	{
		if (t_healthValue == healthArray1[count])
		{
			findFirstOccurrence= true;
			indexPos = count;
			break;
		}// end if
	} // end for 
	if (findFirstOccurrence == true)
	{
		return indexPos;
	}
	else
	{
		return -1;
	}
	
}

//q8 modification
std::string findAllHealthValue(int t_allHealthValues)
// accepts a health value argument and then searches for all occurrences of that particular health value in the array
// If it finds it, it should output to the screen the list of players with that health value.  If it is not in the array 
//the function should output to the screen “No player found with that health value”. 
{

	bool findAllOccurences = false;
	std::string message = "";
	int count = 0;
	

	for (count; count < MAX_PLAYERS1; count++)
	{
		if (t_allHealthValues == healthArray1[count])
		{
			message = message + namesArray1[count] + " ";
			findAllOccurences = true;
		} // end if
	}	// end for
	if (findAllOccurences == false)
	{
		message = "No player with such health value found in the array.";
	}
	return message;
}

int findLastName(std::string t_inputName)
// accepts a name value argument and then searches for the last occurrence of that particular name in the array
// If it finds it, it should return its index position within the array. If it is not in the array the function should return -1. 
// last occurrence
{
	bool findName = false;
	int indexPos = 0;
	int count = 0;

	for (count = MAX_PLAYERS1 - 1; count >= 0; count--)
	{
		if (t_inputName == namesArray1[count])
		{
		findName = true;
		indexPos = count;
		break;
		} // end if
	}	// end for
	if (findName == true)
	{
		return indexPos;
	}
	else
	{
		return -1;
	}
}
