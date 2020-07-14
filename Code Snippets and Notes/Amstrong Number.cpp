#include<iostream>
using namespace std;

int main()
{
	int num{};
	
	cout<<"Enter the number to be checked wether it's amstrong or not: ";
	cin>>num;
	
	int places[10];
	
	do
	{
		int rem = num/10;
		
		if(rem!=0)
		{
			places[i] = rem;
			i++;
		}
		else
		
	}while(num/10 != 0)

	return 0;
}

