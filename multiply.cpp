#include <iostream>
using namespace std;

long long multiply(long long a)
{
    long long temp = 1;
    for (long long i = 1; i < a+1; i++)
    {   
        temp = temp*i;
        // cout << temp << " " << i << endl;
    }
    return temp;
}
int main(int argc, char const *argv[])
{
    long long a;
    while (1)
    {
        cout << "Input a number : ";
        cin >> a;
        if (a == -1)
        {
            break;
        }        
        long long answer = multiply(a);
        cout << "Answer : " << answer << endl << endl;

        
    }
    
    // for (;;)
    // {
    //     cout << "Input a number : ";
    //     cin >> a ;
    //     long long answer = multiply(a);
    //     cout << "Answer : " << answer << endl;
    // }

    return 0;
}
