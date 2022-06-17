/*
    Input:
    Apple Ant Ball Dog Frog Dog Apple Car Car Dog

    Output: 
    Word  Count
    Apple 2
    Ant   1
    Ball  1
    Car   2
    Dog   3
    Frog  1
*/

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    // not work
    // cin >>a; 
    // cout<<a << endl;
    // [Hint] use getline
    string mystring;
    getline(cin, mystring);
    cout << mystring;
    return 0;
}
