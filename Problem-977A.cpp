// Problem - Wrong Subtraction
#include <iostream>
using namespace std;
int main()
{
    long int n;
    int k;
    cin >> n >> k;
    while (k != 0)
    {
        if (n % 10)
        {
            --n;
            --k;
        }
        else
            while (n % 10 == 0)
            {
                n /= 10;
                --k;
                if(k == 0)
                break;
            }
    }
    cout << n;
    return 0;
}