#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;
int main()
{
    string mystr = "This is java is java abc";
    stringstream ss;
    ss << mystr;
    string temp_str;
    map<string,int>Count_map;
    while(ss>>temp_str){
        // cout << temp_str << endl;
        Count_map[temp_str]++;
    }
    
    map<string,int>::iterator iter;
    cout << "word"<< "\t"<< "count"<<endl;
    for (iter = Count_map.begin();iter != Count_map.end();iter++)
    {
        cout << iter->first << "\t" <<iter->second << "\n";
    }

    
    return 0;
}