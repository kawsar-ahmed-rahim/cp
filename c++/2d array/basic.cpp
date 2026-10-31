# include <iostream>
using namespace std;

int main() {
    int matrix[4][3] = {{1,2,3},{2,3,4},{3,4,4},{1,2,2}};
    int rows = 4;
    int cols = 3;
    // input 

     for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> matrix[i][j];

        }
    }

    // print all numbers

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

// linear search

bool linearSearch(int mat[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false; 
}

// max sum of rows

int getMaxSum(int mat[][3], int rows, int cols){
    int maxRowSum = INT_MIN;

    for(int i=0; i<rows; i++){
        int roeSumI = 0;
        for(int j=0; j<cols; j++){
            roeSumI += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSumI);
    }
}

// diagonal sum
int diagonalSum(int mat[][4], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            if(i==j){
                sum += mat[i][j];
            } else if(j== n-i-1){
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

// optimal

int diagonalSum(int mat[][4], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];
        if(i != n-i-1){
            sum += mat[i][n-i-1];
        }
        
    }
    return sum;
}

// 2D vectors
int main(){
    vector<vector<int>> mat = {{1,2,3}, {2,3,4},{3,3,3}};

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}