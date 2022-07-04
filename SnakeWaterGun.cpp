#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;
int SnakeWaterGun(string you, string comp);

int main()
{
	string you, comp;
	int num,result,number=0;
	srand(time(0));
	while (number != -1)
	{
		num = rand() % 100 + 1;
		if (num < 33)
		{
			comp = "Snake";



		}
		else if (num > 33 && num < 66) {

			comp = "Water";
		}
		else {
			comp = "Gun";
		}
		cout << "Please Enter your choice From Snake ,Water or Gun" << endl;
		cin >> you;

		result = SnakeWaterGun(you, comp);
		cout << "You choose " << you << " and computer choose  " << comp << endl;
		if (result == 0)
		{
			cout << "The game is draw" << endl;

		}
		else if (result == 1)
		{
			cout << "You Won the game " << endl;

		}
		else if (result == -1)
		{
			cout << "Computer Won the game" << endl;

		}
		cout << "Enter -1 for quit" << endl;
		cin>>number;
	}
	return 0;
} 
int SnakeWaterGun(string you, string comp)
{
	if (you == comp)
	{
		
		return 0;
	}
	else if (you == "Snake" && comp == "Water")
	{
		return 1;
	}
	else if (you == "Water" && comp == "Snake")
	{
		return -1;
	}
	else if (you == "Gun" && comp == "Snake")
	{
		return 1;
	}
	else if (you == "Snake" && comp == "Gun")
	{
		return -1;
	}
	else if (you == "Water" && comp == "Gun")
	{
		return 1;
	}
	else if (you == "Gun" && comp == "Water")
	{
		return -1;
	}
	
}