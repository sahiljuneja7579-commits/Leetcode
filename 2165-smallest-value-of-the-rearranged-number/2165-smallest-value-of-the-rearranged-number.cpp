class Solution {
public:
    long long smallestNumber(long long num) {
        vector<int> h;
        long long x = num < 0 ? -num : num;
        if(num == 0) return 0;
        while (x > 0) {
            h.push_back(x % 10);
            x /= 10;
        }
        sort(h.begin(),h.end());
        if(num>0){
            if(h[0]==0){
                for(int i=1;i<h.size();i++){
                    if(h[i]!=0){
                      swap(h[0],h[i]);
                      break;
                    }
                }
            }
            long long n=0;
            for(auto i:h){
                n=n*10+i;
            }
            return n;
        }
        long long n=0;
        for(int i=h.size()-1;i>=0;i--){
            n=n*10+h[i];
        }
        return -n;
    }
};