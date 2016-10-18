#include <iostream>

using namespace std;

struct player
{
	string name;
	int number;
	int score;
};


int main()
{
	int x;
	int totalpoint;
	player arr[12];
	
	for(x=0;x<12;x++)
	{
	cout << "Enter player's name ";		
	cin >> arr[x].name;
	
	cout << "Enter player's number ";
	cin >> arr[x].number;
	
	cout << "Enter player's score ";
	cin >> arr[x].score;	
	}
	
	cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
	for(int y=0;y<12;y++)
	{
	cout << arr[y].name << endl;
	cout << arr[y].number << endl;
	cout << arr[y].score << endl;	
	}
	for(int z=0;z<12;z++)
	{
		totalpoint += arr[z].score;
	}
	cout << totalpoint << " is the total points scored.";
		
}
