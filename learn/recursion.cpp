#include <iostream>
using namespace std;
int F_loop(int a)
{
    int temp = 1;
    for (int i = 1; i < a + 1; i++)
    {
        temp = temp * i;
    }
    return temp;
}
int F_recur(int n)
{
    cout << "a" << endl;
    if(n==1){
        return 1;
    }
    return F_recur(n - 1) * n;
}

// queue (First In First Out)
// stack (First In Last Out)
/* push pop
    3->2->1
*/
/* 盤子
    |---3---|
    |---2---|
    |---1---|
    |_______|
*/
int main(int argc, char const *argv[])
{
    int a;
    while (1)
    {
        cout << "Input a number : ";
        cin >> a;
        if (a == -1)
        {
            break;
        }
        int answer = F_recur(a); // multiply(3)
        cout << "Answer : " << answer << endl
             << endl;
    }

    return 0;
}

/*
    F(1) = 1
    F(n) = F(n-1) * n
*/

// 初始值(結束條件) A_1 = -2
// 遞迴關係(前後項關係) A_n = A_n-1 + 3

// A_2 = ?

