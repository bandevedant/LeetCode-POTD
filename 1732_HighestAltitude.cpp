
#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=0;
        vector<int>arr;
        arr.push_back(0);
        for(int i=0;i<gain.size();i++){
            mx=max(mx,arr.back()+gain[i]);
            arr.push_back(arr.back()+gain[i]);
        }
        return mx;
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
    