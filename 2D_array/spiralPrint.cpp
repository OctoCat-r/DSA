#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
   
   int matrix[3][3] ={1,2,3,4,5,6,7,8,9};

   int row = 3;
   int col  = 3;

   int firstRow = 0;
    int lastCol = col-1;
    int lastRow = row-1;
    int firstCol = 0;
    vector<int>res;

    while(firstRow <= lastRow && firstCol <= lastCol){

            for(int i = firstCol; i<=lastCol; i++){
                res.push_back(matrix[firstRow][i]);
            }
            firstRow++;

            for(int i = firstRow; i<=lastRow; i++){
                res.push_back(matrix[i][lastCol]);
            }
            lastCol--;
            if(firstRow<= lastRow){
                for(int i = lastCol; i>= firstCol; i--){
                res.push_back(matrix[lastRow][i]);
                }
            lastRow--;
            }
            
            if(firstCol<= lastCol){
                for(int i = lastRow; i>= firstRow; i--){
                res.push_back(matrix[i][firstCol]);
                }
            firstCol++;
            }
        }
    
    for(int i = 0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}