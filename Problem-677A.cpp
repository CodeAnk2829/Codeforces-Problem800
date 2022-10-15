// Problem - Vanya and Fence
#include <iostream>
using namespace std;
int main(){
    int n, h;
    cin >> n >> h;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    
    int sum = 0; 
    for(int i = 0; i < n; ++i){
        if(arr[i] <= h){
            sum += 1;
        }else{
            sum += 2;
        }
    }
    cout << sum;
    return 0;
}