class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     vector<int> rows;
      vector<int> col;
      int k;
      for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
          if(matrix[i][j]==0){
            rows.push_back(i);
            col.push_back(j);
          }
        }
      }
      for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
          for(k=0;k<rows.size();k++){
          if(i==rows[k] || j==col[k]){
            matrix[i][j]=0;
            }
          }
        }
      }
    }
};

auto fast_io = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    return 0;
}();