class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     vector<long int> rows;
      vector<long int> col;
      for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
          if(matrix[i][j]==0){
            rows.push_back(i);
            col.push_back(j);
          }
        }
      }
      for(int i=0;i<rows.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[rows[i]][j]=0;
        }
      }
      for(int j=0;j<matrix.size();j++){
        for(int i=0;i<col.size();i++){
            matrix[j][col[i]]=0;
        }
      }
    }
};

auto fast_io = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    return 0;
}();