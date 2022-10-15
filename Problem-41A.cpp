// Problem - Translation
#include <iostream>
#include <cstring>
using namespace std;
char* reverse(char* s){
    int n = strlen(s);
    for(int i = 0; i < n/2; ++i){
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    } 
    return s;
}
int main(){
    char s[101], t[101];
    cin.getline(s, 101);
    cin.getline(t, 101);
    if(strcmp(reverse(s), t) == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}