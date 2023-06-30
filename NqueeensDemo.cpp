// #include<bits/stdc++.h>
// using namespace std;

// bool place(int k,int i,int x[])
// {
//     for(int j=1;j<k;j++)
//     {
//         if(x[j]==i || abs(x[j]-i)==abs(j-k))
//             return false;
//     }
//     return true;
// }

// void Nqueens(int k,int n,int x[])
// {
//     for(int i=1;i<=n;i++)
//     {
//         if(place(k,i,x))
//         {
//             x[k]=i;
//             if(k==n)
//                 printSol(x,n);
//             else
//                 Nqueens(k+1,n,x);
//         }
//     }
// }

// void printSol(int x[],int n)
// {
//     for (int j = 1; j <= n; j++) 
//         cout << "(" << j << ", " << x[j] << ") ";
// }
// int main()
// {
//     int n;
//     cout<<"Enter no .of queens: ";
//     cin>>n;

//     int matrix[n][n];          // creating a n*n matrix/board

//     for(int i=0;i<n;i++)      //initiating all the boxes to zero
//     {
//         for(int j=0;j<n;j++)
//         {
//             matrix[i][j]=0;
//         }
//     } 

//     int x[n+1]; 
//     Nqueens(1,n,x);

//     return 0;
// }




// /*
// bool Nqueens(int n)
// {
//     int matrix[n][n];      // creating a n*n matrix/board

//     for(int i=0;i<n;i++)  //initiating all the boxes to zero
//     {
//         for(int j=0;j<n;j++)
//         {
//             matrix[i][j]=0;
//         }
//     }

//     if(solNQ(matrix,0))==false)
//     {
//         cout<<"Solution does not exist";
//         return false;
//     }

//     printSolution(matrix)     return true;
// }

// bool place(int matrix[n][n],int col,int row)
// {
//     int i,j;

//     for(i=0;i<col;i++)
//     {
//         if(matrix[row][i])
//             return false;
//     }
// }*/

#include <iostream>
#include <cmath>
using namespace std;

bool place(int k, int i, int x[]) {
    for (int j = 1; j <= k - 1; j++) {
        if (x[j] == i || abs(x[j] - i) == abs(j - k))
            return false;
    }
    return true;
}

void Nqueens(int k, int n, int x[]) {
    for (int i = 1; i <= n; i++) {
        if (place(k, i, x)) {
            x[k] = i;
            if (k == n) {
                // Print the solution
                for (int j = 1; j <= n; j++) {
                    cout << "(" << j << ", " << x[j] << ") ";
                }
                cout << endl;
            } else {
                Nqueens(k + 1, n, x);
            }
        }
    }
}

int main() {
    int n = 4; // Board size
    int x[n + 1]; // Array to store column positions of queens
    Nqueens(1, n, x); // Start with the first row
    return 0;
}
