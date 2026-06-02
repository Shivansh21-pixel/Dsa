class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        int minprice=1000000;
        for(int i=0;i<prices.size();i++ ){
            minprice=min(minprice,prices[i]);
            maxpro=max(maxpro,prices[i]-minprice);
        }
        return maxpro;
    }
};