#include <iostream>
using namespace std;
int main()
{
    // int i,j;
    // cout<<"enter the number of rows";
    // cin>>i,j;
    // for(int i=1;i<=5;i++)
    //{
    //     cout<<"#"<<" ";
    // }
    // for(int j=1;j<=5;j++)
    //{
    //     cout<<"#"<<" ";
    // }
    // int i, j;
    // cin >> i, j;
    // for (int i = 1; i <= 5; i = i + 1)
    // {
    //     for (int j = 1; j <= 5; j = j + 1)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    char row, colu;
    cin >> row, colu;
    for (char row = 1; row <= 5; row = row + 1)
    {
        for (colu = 1; colu <= 5; colu = colu + 1)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
}