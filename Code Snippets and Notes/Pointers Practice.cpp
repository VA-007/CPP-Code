#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
	vector <string> names {"Mama","Nana","Dada"};
	
	vector <string> *vec_ptr {&names};
	
	cout<<vec_ptr<<endl;
	
	cout<<(*vec_ptr).at(0)<<endl<<endl;
	
	for(auto seq : (*vec_ptr) )
	{
		cout<<seq<<endl;
	}

	return 0;
}

