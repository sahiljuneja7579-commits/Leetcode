class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n1=nums1.size();
        int m=nums1[0].size();
        int n2=nums2.size();
        vector<vector<int>> h;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(nums1[i][0]==nums2[j][0]) {
                int s=nums1[i][1]+nums2[j][1];
                h.push_back({nums1[i][0],s});
                i++;
                j++;
            }
            else if(nums1[i][0]<nums2[j][0]) {
                h.push_back(nums1[i]);
                i++;
            }
            else {
                h.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
            h.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            h.push_back(nums2[j]);
            j++;
        }
        return h;
    }
};