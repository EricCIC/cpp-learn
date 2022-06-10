#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> myvec;
    myvec.push_back(10);
    myvec.push_back(40);
    myvec.push_back(20);
    //
    vector<int>::iterator iter;
    for(iter = myvec.begin();iter!=myvec.end();iter++){
        cout << *iter <<endl;
    }
    //
    map<string, int> mymap;
    mymap["Eric"] = 18;
    mymap["Jerry"] = 12;
    mymap["Eric"]++;
    cout << mymap["Eric"]<<endl;
    cout << "Key\tValue" <<endl;
    // 
    map<string, int>::iterator iter_2;
    for(iter_2 = mymap.begin();iter_2!=mymap.end();iter_2++){
        cout << iter_2->first<<"\t"<<iter_2->second<<endl;
    }
    return 0;
}
