#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    //
    map<string,int>mymap;
    mymap["eric"]  = 18;
    mymap["amy"]  = 800;
    mymap["jacky"]  = 22;
    map<string,int>::iterator iter;
    cout << "name"<< "\t"<< "age"<<endl;
    for (iter = mymap.begin();iter != mymap.end();iter++)
    {
        cout << iter->first << "\t" <<iter->second << "\n";
    }
    return 0;
}
