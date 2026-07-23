class Solution {
public:
    long long th(vector<int>& piles,int mid){
        long long totalh=0;
        for(auto i:piles){
            totalh+=ceil((double)i/(double)mid);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=INT_MIN;
        for(auto i:piles){
            maxi=max(maxi,i);
        }
        int l=1,hi=maxi;
        int ans=INT_MAX;
        while(l<=hi){
            int mid=(l+hi)/2;
            if(th(piles,mid)>h) l=mid+1;
            else{
                ans=min(ans,mid);
                hi=mid-1;
            }
        }
        return ans;
    }
};