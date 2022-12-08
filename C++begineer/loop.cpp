#include<iostream>
using namespace std;
int main()
{  
    int i = 0,n;
    cout<<"Enter value of n : ";
    cin>>n;
    while(i<n)
    {
        cout<<i<<endl;
        i++;
    }
    cout<<"------------------------------"<<endl;
    i = 0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<n);

    cout<<"-----------------------------"<<endl;
    
    for(i = 0; i<n ; i++){
        cout<<i<<"\n";
    
    }

    


    return 0;
}