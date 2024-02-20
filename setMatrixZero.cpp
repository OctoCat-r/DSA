// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

#include<iostream>
using namespace std;

//brute force approach
void makeIzero(vector<vector<int>> &matrix , int i){
    for(int j = 0; j< matrix[0].size(); j++){
        if(matrix[i][j] != 0){
             matrix[i][j] = -1;
        }
    }
}
void makeJzero(vector<vector<int>> &matrix , int j){
    for(int i = 0; i< matrix.size(); i++){
        if(matrix[i][j] != 0){
             matrix[i][j] = -1;
        }
    }
}

void zeroMatrix(vector<vector<int>> &matrix){
    for(int i = 0; i< matrix.size(); i++){
        for(int j = 0; j< matrix[0].size(); j++){
            if(matrix[i][j] == 0){

                makeIzero(matrix, i);
                makeJzero(matrix, j);
            }
        }
    }

    for(int i = 0; i< matrix.size(); i++){
        for(int j = 0; j< matrix[0].size(); j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }

}

//better approach

void betterZeroMatrix(vector<vector<int>> &matrix){
    vector<int> row(matrix.size(), 0);
    vector<int> col(matrix[0].size(), 0);
    for(int i = 0; i< matrix.size(); i++){
        for(int j = 0; j< matrix[0].size(); j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1; 
            }
        }
    }
    for(int i = 0; i< matrix.size(); i++){
        for(int j = 0; j< matrix[0].size(); j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }

    
}

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    // zeroMatrix(matrix);
    betterZeroMatrix(matrix);

    for (auto it : matrix) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }

}

