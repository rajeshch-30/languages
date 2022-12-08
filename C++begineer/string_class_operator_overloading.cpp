#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{

    string fullname, firstname, lastname;
    cin >> firstname >> lastname;
    fullname = firstname + " " + lastname;
    cout << fullname << endl;

    cout << fullname.size();

    cout << endl
         << fullname.length();

    return 0;
}