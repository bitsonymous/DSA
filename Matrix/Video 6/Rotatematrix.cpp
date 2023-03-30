#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();
    vector<vector<int>> ans(n,vector<int>(n,-1));
        for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix.size(); j++){
            ans[n-j-1][i]=matrix[i][j];
        }
    }
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans.size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }                                               
}
int main(){
     vector<vector<int>> matrix;
    int size;
    cin>>size;
    for(int i = 0; i<size; i++){
        vector<int> v;
        for(int j = 0; j<size; j++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        matrix.push_back(v);
    }
    rotate(matrix);
} 