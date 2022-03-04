class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> mem(n+1);
        mem[0]=0;
        for(int i=1;i<=n;i++){
            mem[i]=mem[i/2]+i%2;
        }
        return mem;
        
       /* vector<int> ans(n+1,0);
        for(int i=1;i<=n;i++){
            ans[i]=ans[i>>1]+i%2;
        }
        return ans;*/
        
        /* vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            int cnt=0;
            int a=i;
            while(a!=0){
                a = a&(a-1);
                cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;*/
    }
};
