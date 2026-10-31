vector<int> spiralOrder(vector<vector><int>& mat){
    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    vector<int>< ans;

    while(srow<= erow && scol <= ecol){
        // top
        for(int j=scol; j<=ecol; j++){
            ans.push_back(mat[srow][j]);
        }
        // right
        for(int j=scol+1; j<=erow; j++){
            if(srow == erow){
                 break;
            }
            ans.push_back(mat[i][ecol]);
        }
        // bottom
        for(int j=ecol-1; j>=ecol; j--){
            ans.push_back(mat[erow][j]);
        }
        // left
        for(int j=erow-1; j>=srow+1; i--){
             if(scol == ecol){
                 break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++; erow--; scol++; ecol--;
    }
    return ans;
}