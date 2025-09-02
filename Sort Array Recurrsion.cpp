

#include <bits/stdc++.h>
using namespace std;

void insertTemp(vector<int>& arr , int temp) {
    
    // B
    
    if(arr.size() == 0 || temp > arr[arr.size() - 1]) {
        arr.push_back(temp);
        return ;
    }
    
    
    int val = arr[arr.size() - 1];
    arr.pop_back();
    // H
    insertTemp(arr , temp);
    
    
    // I
    arr.push_back(val);
    
    return ;
    
    
    
}

void sortArr(vector<int>& arr) {
    
    // B
    if(arr.size() == 1){
        return ;
    }
    
    //H
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    
    sortArr(arr);
    
    insertTemp(arr , temp);
    
    return ;
}

int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n,0);
    
    for(int i = 0 ; i<n ; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        // arr[i] 
        
    }
    
    sortArr(arr);
    
    for(auto i : arr) cout << i << " ";

    return 0;
}