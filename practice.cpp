#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    // vector
    vector<int> myvec = {1,2,3,4,5,6,7};
    //
    vector<int>::iterator iter;
    for(iter = myvec.begin();iter!=myvec.end();iter++)
    {
        cout << *iter <<" ";
    }
    // cout << myvec.begin(); error!
    // cout << *(myvec.begin()+4);
}