#include<bits/stdc++.h>
using namespace std;
void diagonalprint(vector<vector<int>> arr){
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i][i]<<" ";
    }
    return ;
}
int main(){
    vector<vector<int>> arr;
        int m = 3, n = 3;
        for(int i = 0; i<m; i++){
            vector<int> v; 
            for(int j = 0; j<n; j++){
                int temp;
                cin>>temp;
                v.push_back(temp);
            }
            arr.push_back(v);
        }
    diagonalprint(arr);
    }
