class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
      // we have to use the lowest two prices
        
        sort(prices.begin(), prices.end());
        
        int x= money - prices[0] - prices[1];
        
        if(x<0){
            return money;
        }
        else{
            return x;
        }
    }
};
