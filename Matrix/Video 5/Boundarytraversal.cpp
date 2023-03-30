#include<bits/stdc++.h>
using namespace std;
void bdrytrav(vector<vector<int>> mat){
    int i =0;
    while(i<mat[0].size()){
        cout<<mat[0][i]<<" ";
    i++;
    }
    i = 1;
    while(i<mat.size()-1){
        cout<<mat[i][mat.size()-1]<<" ";
        i++;
    }
    i = mat.size()-1;
    while(i>=0){
        cout<<mat[mat.size()-1][i]<<" ";
        i--;
    }
    i = mat.size()-2;
    while(i>0){
        cout<<mat[i][0]<<" ";
        i--;
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
    bdrytrav(matrix);
}