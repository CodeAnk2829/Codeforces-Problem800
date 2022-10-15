// Problem - Anton and Danik
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char *str = new char[n + 1];
    cin.ignore();
    cin.getline(str, n + 1);
    int count_A = 0;
    int count_D = 0;
    for (int i = 0; str[i]; ++i)
    {
        if (str[i] == 'A')
            count_A++;
        else
            count_D++;
    }
    if (count_A > count_D)
    {
        cout << "Anton";
    }
    else if (count_A < count_D)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}