#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vector_1;
	vector<int> vector_2;
	
	vector_1.push_back(10);
	vector_1.push_back(20);
	
	cout<<"Elements of vector 1 are: "<<vector_1.at(0)<<"\t"<<vector_1.at(1)<<"\n";
	cout<<"size of Vector 1 is :"<<vector_1.size()<<endl;
	
	vector_2.push_back(100);
	vector_2.push_back(200);
	
	cout<<"Elements of vector 2 are: "<<vector_2.at(0)<<"\t"<<vector_2.at(1)<<"\n";
	cout<<"size of Vector 2 is : "<<vector_2.size()<<endl;
	
	cout<<"================================================================= \n";
	
	vector<vector <int> > vector_2d;
	
	vector_2d.push_back(vector_1);
	vector_2d.push_back(vector_2);
	
	int i,j;
	
	cout<<"Elements of the 2-D vector are: \n";
	for(i=0;i<vector_2d.size();i++)
	{
		for(j=0;j<vector_2d[i].size();j++)
		{
			cout<<vector_2d.at(i).at(j)<<" ";
		}
		cout<<"\n";
	}
	
	
	vector_1.at(0)=100;
	
	cout<<"Elements of the modified 2-D vector are: \n";
	for(i=0;i<vector_2d.size();i++)
	{
		for(j=0;j<vector_2d[i].size();j++)
		{
			cout<<vector_2d.at(i).at(j)<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	
	cout<<"Elements of vector 1 are: "<<vector_1.at(0)<<"\t"<<vector_1.at(1)<<"\n";
	
	system("pause");
	
		
	return 0;
}
