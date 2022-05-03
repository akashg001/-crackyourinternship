class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int less=prices[0],diff=0;
     for(int i=0;i<prices.size();i++){
       if(prices[i]<less){
         less=prices[i];
       }
       if(diff<prices[i]-less){
         diff=prices[i]-less;
       }
       }
      return diff;
    }
};
auto fast_io = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    return 0;
}();