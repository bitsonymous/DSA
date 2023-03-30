#include<bits/stdc++.h>
using namespace std;
void snakeprint(vector<vector<int>> &arr){
  for(int i=0; i<arr.size(); i++){
    if(i%2==0){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
    }else{
        int c = arr[i].size();
        for(int j = c-1 ; j>=0; j-- ){
            cout<<arr[i][j]<<" ";
        }
    }
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
    snakeprint(arr);
}