// Problem Two Groups
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        long long int sum1 = 0;
        long long int sum2 = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                sum2 += (-a[i]);
            }
            else
            {
                sum1 += a[i];
            }
        }
        if (sum1 == 0)
        {
            cout << sum2 << endl;
        }
        else if (sum2 == 0)
        {
            cout << sum1 << endl;
        }
        else if (sum1 < sum2)
        {
            cout << sum2 - sum1 << endl;
        }
        else
        {
            cout << sum1 - sum2 << endl;
        }
    }
    return 0;
}