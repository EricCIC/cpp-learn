/*
Input: 
Enter the number of elements in array: 5
Enter array elements: 54 12 63 12 13

Output: 12
*/

#include<iostream>
#include<vector>
using namespace std;

int find_same_number(vector<int>same)
{
    int ans=0;
    for (int i = 0; i < same.size(); i++)
    {
        for (int p = i+1; p < same.size(); p++)
        {
            if (same[i]==same[p])
            {
                ans = same[p];
                break;
            }    
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the number of elements in array: ";
    cin >> a;
    vector<int> elements;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        elements.push_back(b);
    }
    int same_number = find_same_number(elements);
    cout << same_number;
}    