#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long solve(vector<int>& nums, vector<int>& cost,int temp){
 long long  ans=0;
        for(int i=0;i<nums.size();i++){
           ans+=1L*abs(temp-nums[i])*cost[i];
        }
        return ans;

}
    long long minCost(vector<int>& nums, vector<int>& cost) {
       
     long long val=solve(nums,cost,nums[0]);
     int l = *min_element(nums.begin(), nums.end());
     int r = *max_element(nums.begin(), nums.end());

      while(l<r){
          int mid=(r+l)/2;
          long long c1=solve(nums,cost,mid);
          long long c2=solve(nums,cost,mid+1);
          val=min(c1,c2);
          if(c1>c2)
          l=mid+1;
          else
          r=mid;
      }
       return val;

    }
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
    