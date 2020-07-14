#include<iostream>
using namespace std;

int main()
{
	int fib_limit {} , term1{0} , term2{1} , next_val{term1+term2} ;
	
	
	cout<<"Enter the limit upto which fibbonaci numbers to be generated: ";
	cin>>fib_limit;
	
	cout<<"The fibonacci series upto "<<fib_limit<<" is: \n";
	cout<< term1 <<endl<< term2 <<endl;
	
	while(next_val<=fib_limit)
	{
		cout<<next_val<<endl;
		term1 = term2;
		term2 = next_val;
		next_val = term1 + term2;
	}
	
	return 0;
}

