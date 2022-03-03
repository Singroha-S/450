class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        for(int i=31;i>=0;i--){
            int a = (n&1);
            n=n>>1;
            if(a==1)
                cnt++;
        }
        return cnt;
    }
};
