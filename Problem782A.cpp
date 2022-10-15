// Problem - Andryusha and Socks
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < 2 * n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    unordered_set<int> s;
    s.insert(v[0]);
    int size = 1;
    for (int i = 1; i != v.size(); ++i)
    {
        if (s.find(v[i]) != s.end())
        {
            s.erase(v[i]);
        }
        else
        {
            s.insert(v[i]);
            if (s.size() > size)
            {
                size = s.size();
            }
        }
    }
    cout << size;
    return 0;
}