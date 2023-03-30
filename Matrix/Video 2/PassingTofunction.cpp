#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &arr){
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> arr;
    int m = 3, n = 4;
    for(int i = 0; i<m; i++){
        vector<int> v; 
        for(int j = 0; j<n; j++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        arr.push_back(v);
    }
    print(arr);
}
