//What you will need to know
//- Conditionals
//- Loops
//- arrays
//Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
//each day during a typical week.Write a program that stores this information in a
//2 dimensional 3 x 7 array, where each row represents a different dragon and each column
//represents a different day of the week.Then it should create a report that includes the
//following information :
//-Average amount of food eaten per day by all the dragons together
//- Average amount of food eaten per day by any one dragon
//- The greatest amount of food eaten during one day and which dragon that was
//- The least amount of food eaten during one day and which dragon that was

#include <iostream>;

int main()
{
int dragons[3][7] = { {10, 1, 11, 4, 0, 20, 5}, 
					  {5, 17, 1, 2, 6, 12, 8}, 
					  {3, 8, 9, 15, 9, 4, 9} };

float avgAllDragons = 0.f;
int greatestDrag = 0;
int leastDrag = 0;
int i = 0;
int n = 0;
float startIter = 0.f;
float avgFoodDrag = 0.f;
float avgDayOne = 0.f;

while (i < 1)
{
	for (n = 0; n < 7; n++)
	{
		startIter += dragons[i][n];
	}
	avgFoodDrag = startIter / 7;
	std::cout << "Average Food for Bob" << avgFoodDrag<< std::endl;
	std::cout << std::endl;
	break;
}
i = 1;
startIter = 0;
avgFoodDrag = 0.f;
while (i = 1)
{
	for (n = 0; n < 7; n++)
	{
		startIter += dragons[i][n];
	}
	avgFoodDrag = startIter / 7;
	std::cout << "average food for Cat" << avgFoodDrag << std::endl;
	std::cout << std::endl;
	break;
}
i = 2;
startIter = 0;
avgFoodDrag = 0.f;
while (i = 2)
{
	for (n = 0; n < 7; n++)
	{
		startIter += dragons[i][n];
	}
	avgFoodDrag = startIter / 7;
	std::cout << "average food for Scotty" << avgFoodDrag << std::endl;
	std::cout << std::endl;
	break;
}
int smallNum = dragons[0][0];
int largeNum = dragons[0][0];
for (i = 0; i < 3; i++)
{
	for (n = 0; n < 7; n++)
	{
		if (smallNum <= dragons[i][n])
			continue;
		else if (smallNum > dragons[i][n])
			smallNum = dragons[i][n];
	}
}
std::cout << "The least amount of food eaten by any dragon on any day is:" << std::endl;
std::cout << std::endl;
std::cout << smallNum << " kilos." << std::endl;
for (i = 0; i < 3; i++)
{
	for (n = 0; n < 7; n++)
	{
		if (largeNum >= dragArray[i][n])
			continue;
		else if (largeNum < dragArray[i][n])
			largeNum = dragArray[i][n];
	}
}
std::cout << "The biggest amount of food eaten by any dragon on any day is:" << std::endl;
std::cout << std::endl;
std::cout << largeNum << " kilos." << std::endl;
system("pause");
}