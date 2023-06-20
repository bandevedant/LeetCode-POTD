#include<bits/stdc++.h>
#define ll long long
using namespace std;
//tle passed till 28/37 testcases
    // vector<int> getAverages(vector<int>& nums, int k) {
    //     vector<int>ans;
    //     if(nums.size()<=k){
    //         for(int i=0;i<nums.size();i++){
    //             ans.push_back(-1);
    //         }
    //         return ans;
    //     }
    //     if(k==0){
    //         return nums;
    //     }
    //     for(int i=0;i<k;i++){
    //         ans.push_back(-1);
    //     }
    //     if(nums.size()>k){
    //         for(int i=k;i<nums.size()-k;i++){
    //         int sum=0;

    //             for(int j=i-k;j<=i+k;j++){
    //                 sum+=nums[j];
    //             }
    //             int x=sum/(2*k+1);
    //             ans.push_back(x);
    //         }
    //     }
    //     for(int i=2*k;i<(2*k+k);i++){
    //         ans.push_back(-1);
    //     }
    //     return ans;
    // }
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans;
        //edge cases
        if(nums.size()<=k){
            for(int i=0;i<nums.size();i++){
                ans.push_back(-1);
            }
            return ans;
        }
        if(k==0){
            return nums;
        }

         //towards solution
        for(int i=0;i<k;i++){
            ans.push_back(-1);
        }
        vector<long long>temp;
            long long  s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            temp.push_back(s);
        }

        if(nums.size()>k){
            int t=-1;
            for(int i=k;i<nums.size()-k;i++){
                long long sum;
                if(t>=0){
                sum=temp[i+k]-temp[i-k-1];
                }else{
                    sum=temp[i+k];
                }
                    t++;
             
                int x=sum/(2*k+1);
                ans.push_back(x);
            }
        }
        if(nums.size()<2*k){
            for(int i=2*k-nums.size();i<nums.size()-1;i++){
            ans.push_back(-1);
        }
        }
        else{

        for(int i=2*k;i<(2*k+k);i++){
            ans.push_back(-1);
        }
        }
        return ans;
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
    