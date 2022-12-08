#include <iostream>
using namespace std;

int main()
{
    // float a, b, c, d, e;
    // float scores[] = {22.3, 33, 56.4, 45.678, 2};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << scores[i] << "\n"; // new line character
    // }

    /*
        cout << "---------------------------------------\n Enter no of elements You want to store in array : ";
        int n;
        cin >> n;
        int arr[n];

        cout << "enter elements : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<"\t";   // tab space characer
        }


    */
    /*

        // ***************************** matrix input and output *********************************
        int mat[2][2];
        cout<<"Enter elements of 2x2 matrix : ";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }

        */

    //    ********************* transpose of a square matrix ***************

    int n;
    cout << "order of matrix n  : ";
    cin >> n;
    cout << "enter entries of matrix : \n";
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[j][i] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}