#include<bits/stdc++.h>
using namespace std;

void display(int &matrix,int n)
{   
    for(int i=1;i<=n;i++)   // initiating all elements to zero
    {
        for(int j=1;j<=n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}

void clearMatrix(int &matrix,int n)
{
    for(int i=1;i<=n;i++)   // initiating all elements to zero
    {
        for(int j=1;j<=n;j++)
        {
            matrix[i][j]=0;
        }
    }
}


int main()
{
    int n;
    cout<<"Enter the no of queens: ";
    cin>>n;

    int matrix[n][n];       // creating matrix n*n

    clearMatrix(matrix,n);

    nqueens(n);
}
