#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input {};
	cout<<"Enter the string to be made Pyramaid of : ";
	cin>>input;
	int pos {0};	
	
	for(size_t i=1 ; i<(input.length()+1) ; i++)
	{
		for(size_t j=0; j<input.length()-i ;j++)
		{
			cout<<" ";
		}
	
        cout<<input.substr(0,i);	
		
		for(int k=pos-1;k>=0;k--)
		{
			cout<<input[k];
		}
		
		cout<<endl;
		
		pos++;
    }

	return 0;
}

