#include <iostream>
#include <vector>
using namespace std;

#define ADD 1
#define SUBSRACT 2

vector<vector<int>> create2D_vector(int a, int b)
{
    vector<vector<int>> V;
    for (int i = 0; i < a; i++)
    {
        vector<int> temp;
        for (int i = 0; i < b; i++)
        {
            int d;
            cin >> d;
            temp.push_back(d);
        }
        V.push_back(temp);
    }
    return V;
}
vector<vector<int>> matrix_add(vector<vector<int>> V_1, vector<vector<int>> V_2)
{
    int m = V_1.size();
    int n = V_1[0].size();
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = V_1[i][j] + V_2[i][j];
        }
    }
    return matrix;
}
vector<vector<int>> matrix_sub(vector<vector<int>> V_1, vector<vector<int>> V_2)
{
    int m = V_1.size();
    int n = V_1[0].size();
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = V_1[i][j] - V_2[i][j];
        }
    }
    return matrix;
}
void print_matrix(vector<vector<int>> matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c; // shape
    // 
    vector<vector<int>> V_1 = create2D_vector(a, b);
    vector<vector<int>> V_2 = create2D_vector(a, b);
    vector<vector<int>> matrix;
    switch (c)
    {
    case ADD: /* constant-expression */
        matrix = matrix_add(V_1, V_2);
        break;
    case SUBSRACT: /* constant-expression */
        matrix = matrix_sub(V_1, V_2);
        break;
    default:
        cout << "Error!" << endl;
        break;
    }
    cout << "======================" << endl;
    cout << "======  Result  ======" << endl;
    cout << "======================" << endl;
    print_matrix(matrix);

    return 0;
}

// 2 3 1
// 1 1 1
// 2 3 1
// 1 1 0
// -1 2 3
