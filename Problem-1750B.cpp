#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        char s[n + 1];
        cin.ignore();
        cin.getline(s, n + 1);
        long long int x = 0;
        long long int y = 0;
        long long int cx = 0;
        long long int cy = 0;
        long long int ct_0 = 0;
        long long int ct_1 = 0;
        for (long long int i = 0; s[i]; ++i)
        {
            if (s[i] == '1')
            {
                y++;
                ct_1++;
                cx = max(cx, ct_0);
                ct_0 = 0;
            }
            else
            {
                x++;
                ct_0++;
                cy = max(cy, ct_1);
                ct_1 = 0;
            }
        }
        cx = max(cx, ct_0);
        cy = max(cy, ct_1);
        if (x == 0)
        {
            cout << y * y << endl;
        }
        else if (y == 0)
        {
            cout << x * x << endl;
        }
        else
        {
            long long int a = cx * cx;
            long long int b = cy * cy;
            long long int c = x * y;
            cout << max(a, max(c, b)) << endl;
        }
    }
    return 0;
}