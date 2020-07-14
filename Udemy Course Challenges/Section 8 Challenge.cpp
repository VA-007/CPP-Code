#include<iostream>

using namespace std;

int main()
{
	const int one_dollar {100};
	const int one_quater {25};
	const int one_dime {10};
	const int one_nickel {5};
	const int one_penny {1};
	
	cout<<"Welcome to Vishank's currency change Provider! \n \n";
	
	cout<<"======================================= \n \n";
	
	cout<<"Enter the amount in cents wanted to be converted into change : ";
	int cents {0};
	cin>>cents;
	
	int dollars {0}, quaters{0}, dimes{0}, nickels{0}, penny{0};
	
	dollars = (cents/one_dollar);
	quaters = ( (cents-(dollars*one_dollar)) / one_quater);
	dimes = ( (cents- ( (dollars*one_dollar) + (quaters*one_quater) ) ) / one_dime );
	nickels = ( (cents - ( (dollars*one_dollar) + (quaters*one_quater) + (dimes*one_dime) ) ) / one_nickel);
	penny =  ( (cents - ( (dollars*one_dollar) + (quaters*one_quater) + (dimes*one_dime) + (nickels*one_nickel) ) ) / one_penny);
	
	cout<<"You can Provide the Change in this way:  \n \n";
	cout<<"Dollars : "<<dollars<<endl;
	cout<<"Quaters : "<<quaters<<endl;
	cout<<"Dimes   : "<<dimes<<endl;
	cout<<"Nickels : "<<nickels<<endl;
	cout<<"Pennys  : "<<penny<<endl<<endl;
	
	cout<<"=========================================== \n \n";
	cout<<"Thank You for using the Change Provider!!! \n \n";
	
	
	system("pause");
	
	return 0;
}
