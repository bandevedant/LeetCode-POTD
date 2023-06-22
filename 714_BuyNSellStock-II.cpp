#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        // vector<int>sell(n,0);
        // vector<int>buy(n,0);
        int buy=-prices[0],sell=0;
        // buy[0]=-prices[0];
        // sell[0]=0;
        for(int i=1;i<prices.size();i++){
            int temp=buy;
            sell=max(sell,temp+prices[i]-fee);
            buy=max(buy,sell-prices[i]);
        }
        return sell;
        // int n=prices.size();
        // vector<int>sell(n,0);
        // vector<int>buy(n,0);
        // buy[0]=-prices[0];
        // sell[0]=0;
        // for(int i=1;i<prices.size();i++){
        //     sell[i]=max(sell[i-1],buy[i-1]+prices[i]-fee);
        //     buy[i]=max(buy[i-1],sell[i-1]-prices[i]);
        // }
        // return sell[n-1];
    }
};
int main(){
  
 srand(time(NULL));
ios::sync_with_stdio(false);
cin.tie(0);
 
int t;
cin>>t;
while(t--){

}
  return 0;
}
    