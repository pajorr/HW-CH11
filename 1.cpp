#include <iostream>

using namespace std;

struct MovieData
{
	string Title;
	string Director;
	int YearReleased;
	int RunningTime;
};

void PrintMovie(MovieData Array[2])
{
	cout << "Title : " << Array[0].Title << endl;
	cout << "Director : " << Array[0].Director << endl;
	cout << "Released : " << Array[0].YearReleased << endl;
	cout << "Running Time : " << Array[0].RunningTime << endl;
	
	cout << "Title : " << Array[1].Title << endl;
	cout << "Director : " << Array[1].Director << endl;
	cout << "Released : " << Array[1].YearReleased << endl;
	cout << "Running Time : " << Array[1].RunningTime << endl;
}


int main()
{
	int x;
	MovieData Array[2];
	for(x=0;x<2;x++)
	{
	cout << "Enter movie title : "	;
	cin >> Array[x].Title ;
	cout << "Enter Director name : ";
	cin >> Array[x].Director ;
	cout << "Enter the year it was released in : " ;
	cin >> Array[x].YearReleased ;
	cout << "Enter its' running time in minutes : " ;
	cin >> Array[x].RunningTime ;
	
	
	}
	
	PrintMovie(Array);
	
}
