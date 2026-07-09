class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(auto i:nums){
            maxi=max(maxi,i);
        }
        int s=0;
        for(int i=0;i<k;i++){
            s+=maxi;
            maxi+=1;
        }
        return s;
    }
};