// FunnyPlant.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int		NumOfPeople = 0;
int		NumOfPlants = 0;
int		NumOfFruit	= 0;
int		weeks		= 0;
bool	verbose		= true;

int main()
{
	cout << "How many people do you need to feed? ";
	cin >> NumOfPeople;
	cout << "How much fruit do you have? ";
	cin >> NumOfFruit;

	while (NumOfPlants < NumOfPeople)
	{

		//Take Num of Fruits, and plant them (increasing number of Plants)
		NumOfPlants += NumOfFruit;
		//Since you planted all the fruit, make Fruit = 0
		//Once a week has passed
		weeks++;
		//You now have fruits equally the number of plants you have
		NumOfFruit += NumOfPlants;

		if (verbose == false)
		{
			cout << "\nIt is now Week:" << weeks << endl;
			cout << "You have " << NumOfPlants << " fruit for Harvest" << endl;
			cout << "You have " << NumOfFruit << " plant(s) for next week" << endl;
		}
	}

	cout << "\nIt took " << weeks+1 << " weeks to get enough fruit for everyone!" << endl;


	system("pause");
    return 0;
}
