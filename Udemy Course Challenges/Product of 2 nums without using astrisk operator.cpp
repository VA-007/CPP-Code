#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int a{0},b{0},i{1},p{0};
	
	cout<<"Enter two nums: ";
	cin>>a>>b;
	
	while(i<=b)
	{
		p += a;
		
		i++;
		
	}
	
	cout<<p;

	return 0;
}

