// Problem - Queue at the School
#include <iostream>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    char str[51];
    cin.ignore();
    cin.getline(str, 51);
    while(t--){
        for(int i = 0; str[i]; ++i){
            if(str[i] < str[i + 1]){
                char temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                ++i;
            }
        }
    }
    cout << str;
    return 0;
}