class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            mini=min(mini,nums[mid]);
            if(nums[l]<nums[mid]){
                mini=min(mini,nums[l]);
                l=mid+1;
            }
            else{
                mini=min(mini,nums[h]);
                h=mid-1;
            }
        }
        return mini;
    }
};