#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

void display_menu(char,vector <int>,int);

void print_nums(vector <int> &);

void add_a_num(int);

int main()
{
	int value {};
	vector <int> list;
	char selection;
	
	display_menu(selection,list,value);
	
	return 0;
}



void display_menu(char selection,vector <int> &list,int &value)
{
	do
	{
	    switch(selection)
	    {
		    case 'P':
		    case 'p':  print_nums(list);
			
			case 'A':
			case 'a': cout<<"Enter the value you wish to add to the list: ";
			          cin>>value;
			          add_a_num(value);
		    
	    }  
	}while(selection=='q' && selection=='Q');
}

void print_nums(vector <int> &list)
{
	if(list.size()==0)
	{
		cout<<"The List is Empty! \n";
	}     
	else
	{
	   for(size_t i=0;i<list.size();i++)
	   {
		   	cout<<list[i];
	   }
	}
}

void add_a_num(int value,vector <int> &list)
{
	list.push_back(value);
	cout<<"Value has been added!";
}
