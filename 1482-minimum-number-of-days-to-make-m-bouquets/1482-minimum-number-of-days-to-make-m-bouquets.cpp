class Solution {
public:
int nofb(vector<int>& bloomDay, int mid,int k){
    int c=0,M=0;
    for(auto i:bloomDay){
        if(i<=mid){
            c++;
        }
        else{
            M+=c/k;
            c=0;
        }
    }
    M+=c/k;
    return M;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long v=m*1ll*k*1ll;
        if(v>n) return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(auto i: bloomDay){
            mini=min(mini,i);
            maxi=max(maxi,i);
        }
        int l=mini,h=maxi;
        int ans=h;
        while(l<=h){
            int mid=(l+h)/2;
            if(nofb(bloomDay,mid,k)>=m) {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};