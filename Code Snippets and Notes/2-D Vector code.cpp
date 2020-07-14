#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector <int> > grid;
    int row,col,i,k;
    cout<<"enter row and col: "<<endl;
    cin>>row>>col;
    int temp;
    cout<<" Start entering value in to the matrix:-\n";
    for(i=0;i<row;i++)
    {
        grid.push_back(vector<int>());

        for(k=0;k<col;k++)
        {
            cin>>temp;
            grid[i].push_back(temp);
            
        }
    }
    cout<<"Entered matrix is\n";
    for(i=0;i<row;i++)
    {
        for(k=0;k<col;k++)
        {
            cout<<grid[i][k];
            cout<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}
