#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
        vector<int> 一維陣列 裡面每一個值都放"數字"
        vector<vector<int>> 二維陣列 裡面每一個值都放一維陣列
        vector<vector<vector<int>>> 三維陣列
    */

    // 一維

    // size 3
    // cin: 1 2 3
    vector<int> V;
    int n; // size
    cin >> n; 
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        V.push_back(a);
    }
    // 初始化全部是0的陣列
    int n;
    cin >> n; //
    vector<int> V(n, 0); // V(大小, 初始值)


    // 二維
    /*
    [[1 2 3]
     [4 5 6]]
     cin >> (2, 3)
     cin >> 1 2 3 4 5 6
    */
    vector<vector<int>> V_2d;
    int m, n;
    cin >> m >> n; // shape: (m x n)
    // V_2d.size() // 2
    // V_2d[0].size() // 3

    for (int i = 0; i < m; i++) // 2
    {
        vector<int> temp;
        for (int j = 0; j < n; j++) // 3
        {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        V_2d.push_back(temp);
    }
    // 初始化全部是0的陣列
    int m, n;
    cin >> m >> n;
    // vector<vector<int>> V_2d(m, 大小是n的一維陣列(全部是0));
    vector<vector<int>> V_2d(m, vector<int>(n, 0));

    return 0;
}