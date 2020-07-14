#include<iostream>
using namespace std;

int main()
{
	char selection;
	
	do
	{
		cout<<"============================= \n \n";
		cout<<"Enter your choice - \n";
		cout<<"1: Add 2 numbers \n";
		cout<<"2: Add 3 numbers \n";
		cout<<"3: Add n numbers \n";
		cout<<"Q: Exit ! \n \n";
		
		cin>>selection;
		cout<<endl;
		
		switch (selection)
		{
			case '1' : cout<<"You are adding 2 numbers \n";
			   break;
			
			case '2' : cout<<"You are adding 3 numbers \n";
		       break;
		    
			case '3':  cout<<"You are adding n numbers \n";
			   break;
			
			case 'q' :  cout<<"Exiting the Program.... \n";
			   break;
			   
			case 'Q' :  cout<<"Exiting the Program.... \n";   
			   break;
			
			default : cout<<"Sorry, Invalid Input! \n";   
			         
		}
	} while(selection!='q' && selection!='Q');

	return 0;
}

