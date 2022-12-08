#include <iostream>
using namespace std;
void swap(int *, int *);
void sortfunc(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] <= array[j])
                continue;
            else
                swap(array + i, &array[j]);
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Input for array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortfunc(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<"\t";
    }

    

    return 0;
}