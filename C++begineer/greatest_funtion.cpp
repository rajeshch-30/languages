#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0, int w = 0) ;   // works perfectly
// int sum(int x, int z = 0, int y,  int w = 0) ;   // didn't work because all default arguments must be rightmost. 

int power(int,int c);      //prototype defination
/*  int power(int a , int = 3)       // second argument will will taken as 3 if second input remain empty while function is called ,it is recmmended to use prototype function for defaut value declaration */

int great(int p, int q)
{
    int temp = p > q ? p : q;
    return temp;
}



int main()
{
    int a, b, c, greatest,n;
    // cin >> a >> b >> c;
    cin >>a >> n;
    int temp = great(a, b);
    // cout << great(temp, c) << endl;
    // cout << (great(great(a, b), c));
    cout << power(a,n);
    return 0;
}

int power(int a, int n){
    int pw = 1;
    for(int i = 0 ; i< n ; i++){
          pw = a*pw;
          
    }

    return pw;

}