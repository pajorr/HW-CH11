
/*
3. Corporate Sales Data
Write a program that uses a structure to store the following data on a company
division:
Division Name (such as East, West, North, or South)
First-Quarter Sales
Second-Quarter Sales
Third-Quarter Sales
Fourth-Quarter Sales
Total Annual Sales
Average Quarterly Sales
The program should use four variables of this structure. Each variable should represent
one of the following corporate divisions: East, West, North, and South. 
The user should be asked for the four quarters’ sales figures for each division. 
Each division’s total and average sales should be calculated and stored in the appropriate
member of each structure variable. These figures should then be displayed on the screen.
Input Validation: Do not accept negative numbers for any sales figures.
*/

#include <iostream>
using namespace std;
void printData(struct division *sales);

struct division{
	
	//quarter sales
	float first;
	float second;
	float third;
	float fourth;
	string var;	
	
};

int main(){
	
	struct division division1;
	struct division division2, division3, division4;
	
	cout << "Enter the data of the North division: ";
		printData(&division1);
	cout << "Enter the data of the East division: ";
		printData(&division2);
	cout << "Enter the data of the West division: ";
		printData(&division3);
	cout << "Enter the data of the South division: ";
		printData(&division4);

	return 0;
}
void printData(struct division *sales){ //input + print
do {
	cout << "\n	-> Enter first-quarter sales: $";
	cin >> sales->first;
	cout << "\n	-> Enter second-quarter sales: $";
	cin >> sales->second;
	cout << "\n	-> Enter third-quarter sales: $";
	cin >> sales->third;
	cout << "\n	-> Enter fourth-quarter sales: $";
	cin >> sales->fourth;
		if (sales->first<0 || sales->second<0 || sales->third <0 || sales->fourth <0){
		cout << "\nDon't input negative number!!\n";
	}	
}
	while (sales->first<0 || sales->second<0 || sales->third <0 || sales->fourth <0);
	
	
	float total = sales->first + sales->second + sales->third + sales->fourth;
	float average = total/4;
	
	
	cout << "\n This division's total are: $" << total << endl;
	cout << "\n This division's average quarterly sales are: $" << average << endl
	<< "-------------------------" << endl << endl << endl;
	
} 
