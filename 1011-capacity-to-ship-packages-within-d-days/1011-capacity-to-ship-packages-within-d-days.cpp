class Solution {
public:
    int mw(vector<int>& weights, int mid, int days){
        long long s=0;int c=0;
        for(auto i:weights){
            s+=i;
            if(s>mid){
                s=0;
                c++;
                s+=i;
            }
        }
        c++;
        return c;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        long long s=0;int maxi=INT_MIN;
        for(auto i:weights){
            s+=i;
            maxi=max(maxi,i);
        }
        int l=maxi,h=s;
        int ans=h;
        while(l<=h){
            int mid=(l+h)/2;
            if(mw(weights,mid,days)<=days) {
                ans=min(ans,mid);
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};