// Problem - Swapping Sort (Easy Version)
#include <bits/stdc++.h>
using namespace std;
bool checkSort(vector <int> v) {
    int i = 0;
    while(i < v.size() - 1 && v[i] < v[i + 1]) {
        i++;
    }
    if(i == v.size() - 1) return true;
    return false; 
}
int BubbleSort(vector <int> &v) {
    int count = 0;
    int size = v.size();
    int no, ne;
    if(size & 1) {
        no = size / 2;
        ne = no + 1;
    } else {
        ne = no = (size / 2);
    }
    for(int r = 1; r < ne; ++r) {
        for(int i = 0; i < 2*(ne - r); i += 2) {
            if(v[i] > v[i + 2]) {
                swap(v[i], v[i + 2]);
                count++;
            }
        }
    }
    for(int r = 1; r < no; ++r) {
        for(int i = 1; i < 2*(no - r); i += 2) {
            if(v[i] > v[i + 2]) {
                swap(v[i], v[i + 2]);
                count++;
            }
        }
    }
    return count;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ct = BubbleSort(v);
        if(checkSort(v)) {
            cout << ct << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}