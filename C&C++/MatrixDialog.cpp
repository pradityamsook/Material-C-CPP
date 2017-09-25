#include<bits/stdc++.h>

using namespace std;
const int MAX = 100;

void printMatrixDialog(int mat[100][100], int n){
    int i = 0, j = 0;
    bool isUp = true;

    for(int k = 0; k < n*n;){
        if(isUp){
            for(; i  >= 0&&j <n; j++, i--){
                cout << mat[i][j] << " ";
                k++;
            }
            if(i < 0&&j<=n-1){
                i = 0;
            }
            if(j == n){
                i = i+2,j--;
            }
        }

        else{
            for(; j >=0&& i < n; i++, j--){
                cout << mat[i][j] << " ";
                k++;
            }
            if(j <0 &&i<=n-1){
                j = 0;
            }
            if(i == n){
                j = j + 2,i--;        
            }
        }
        isUp = !isUp;
    }
}


int main() {
    int mat[MAX][MAX] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    int n  = 3;
    printMatrixDialog(mat, n);

}