class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int Best_buy[100000];
        Best_buy[0] = INT_MAX;

        for(i=1;i<prices.size();i++){
            Best_buy[i] = min(Best_buy[i-1] , prices[i-1]);
        }

        int MaxProfit= 0;
        for(i=0 ; i<prices.size() ; i++){
            int CurrProfit= prices[i]- Best_buy[i];
            MaxProfit = max(CurrProfit , MaxProfit);

        }

        return MaxProfit;
    }
};