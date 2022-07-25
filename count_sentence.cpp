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
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    string mystring = "Apple Ant Ball Dog Frog Dog Apple Car Car Dog";
    stringstream ss;
    // cout << mystring; # buffer
    ss << mystring;
    string temp_str;
    map<string,int>count_map;
    // cin >> temp_str;
    while (ss>>temp_str)
    {
        count_map[temp_str]++;
    }
    
    map<string,int>::iterator iter;
    cout << "word" << "\t" << "count" << endl;
    for (iter = count_map.begin(); iter != count_map.end();iter++)
    {
        cout << iter->first << "\t" << iter->second << endl;
    }
    
}
