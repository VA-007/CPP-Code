#include<iostream>
using namespace std;

int main()
{
	cout << "Enter the number to be selected : ";
    int selection {0};
	cin >> selection;
	
	switch (selection)
	{
		case 1 : cout << "You selected 1";    break;
		
		case 2 : cout << "You selected 2";    break;
		 
		case 3 : cout << "You selected 3";    break;
		
		case 4 : cout << "You selected 4";    break;
		        
		
		default : cout << "Neither of 1,2,3 or 4 is selected";
		
	}

	return 0;
}

