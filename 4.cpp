#include <iostream>

using namespace std;

struct weather
{
	float rainfall;
	float HighTemp;
	float LowTemp;
	float AvgTemp;
	
};

int main()
{	
	int totalRainfall;
	int x;
	
	weather arr[12];

	for(x=0;x<12;x++)
	{
	for(int z=0;z<12;z++)
	{
	int month = z;	
	cout << "Enter Rainfall for " << "Month " << month << endl;
	cin >> arr[x].rainfall;
	
	cout << "Enter Highest Temp for " << "Month " << month << endl;
	cin >> arr[x].HighTemp;
	
	cout << "Enter Lowest Temp for " << "Month " << month << endl;
	cin >> arr[x].LowTemp;
	}
	
	for(int y=0;y<12;y++)
	{
	totalRainfall += arr[y].rainfall;
	}
	
	int averageRain = totalRainfall/12;
	cout << "Average Rainfall : " << averageRain;
	}
	for(int a=0;a<12;a++)
{	
	if(arr[a].HighTemp>arr[a+1].HighTemp)
    {
	arr[12].HighTemp=arr[a].HighTemp;
    arr[a].HighTemp=arr[a+1].HighTemp;
	arr[a+1].HighTemp=arr[12].HighTemp;
		cout << arr[a].HighTemp;
	}
	
	return 0;

}	
    
}
