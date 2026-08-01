class Solution {
public:
long long ls(vector<int>& nums,int mid){
    long long s=0;
    for(auto i:nums){
        s+=ceil((double)i/(double)mid);
    }
    return s;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        long long s=0;
        int maxi=INT_MIN;
        for(auto i:nums){
            s+=i;
            maxi=max(maxi,i);
        }
        int l=1,h=maxi;
        int ans=h;
        while(l<=h){
            int mid=(l+h)/2;
            if(ls(nums,mid)>threshold) l=mid+1;
            else{
                ans=min(ans,mid);
                h=mid-1;
            }
        }
        return ans;
    }
};