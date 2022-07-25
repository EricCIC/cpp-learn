#include <iostream>
#include <queue>
using namespace std;

// queue (First In First Out)
/* 
    push: 1->2->3
    pop
*/
int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(q.size()!=0){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
