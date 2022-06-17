/*
Enter a string: TomandJerry
Enter starting position of substring : 6
Enter length of substring: 5
Jerry
*/
#include <iostream>
#include <string>
using namespace std;

int catch_word(string name)
{
    int a,b;
    cout << "Enter starting position of substring : ";
    cin >> a;
    cout << "Enter length of substring: ";
    cin >> b;
    for (int i = a; i < a+b; i++)
    {
        cout << name [i];
    }
}
    
int main(int argc, char const *argv[])
{
    string name;
    cout << "Enter a string: ";
    cin >> name;
    int word = catch_word(name);
    return 0;
}
