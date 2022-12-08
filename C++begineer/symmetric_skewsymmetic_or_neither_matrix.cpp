#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter order of matrix : ";
    cin >> n;

    int mat[n][n];
    cout << "Enter element of matrix : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(mat[i][j] == mat[j][i]){ flag++;}
            else if(mat[i][j] == (-mat[j][i])){ flag--;}
        }
    }
    if(flag == n*n) cout<<"symmetric matrix";
    else if (flag == -n*n) cout<<"skew symmetic matrix";
    else cout<<"Given matrix is neither symmetric nor skew symmetric";
    

    return 0;
}