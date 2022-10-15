// Problem - Magnets
#include <bits/stdc++.h>
using namespace std;
int countpoles(vector<string> v)
{
    int count = 1;
    for (int i = 0; i < v.size() - 1; ++i)
    {
        if (v[i] != v[i + 1])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<string> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int m = countpoles(v);
    cout << m;
    return 0;
}