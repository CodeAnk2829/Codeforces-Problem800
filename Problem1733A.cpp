// Problem - Consecutive Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long int s = 0;
        vector<unsigned long int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if(i < k)
               s += v[i];
        }

        long long int max_sum = s;
        for (int i = 0; i < k; ++i)
        {
            for (int x = k + i; x < n; x = x + k)
            {
                if (v[i] < v[x])
                {
                    swap(v[i], v[x]);
                    for (int i = 0; i < k; i++)
                        s += v[i];
                    if (s > max_sum) 
                        max_sum = s;
                }
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}