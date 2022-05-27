#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int find_max(vector<int> v)
{
    int temp = INT32_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        
        if (v[i] > temp)
        {
            temp = v[i];
        } 
    }
    return temp;
}
int find_min(vector<int> v)
{
    int temp = INT32_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < temp)
        {
            temp = v[i];
        } 
    }
    return temp;
}
int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the number of elements in array:";
    cin >> a;
    vector<int> elements;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        elements.push_back(b);
    }
    // print_vector(elements);
    int max_e = find_max(elements);
    int min_e = find_min(elements);
    cout <<"Maximum element in the array is "<< max_e<<endl;
    cout <<"Minimum element in the array is "<< min_e<<endl;
    return 0;
}
