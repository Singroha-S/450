class Solution {
public:
    int hammingDistance(int x, int y) {
        int xr = x^y;
        int cnt=0;
        while(xr>0){
            cnt += xr&1;
            xr>>=1;
        }
        return cnt;
        
      /*   int n=max(x,y);
        int cnt=0;
        while(n){
            int lx=x & 1;
            int ly=y&1;
            if(lx!=ly){
                cnt++;
            }
            n>>=1;
            x>>=1;
            y>>=1;
        }
        return cnt;*/
    }
};
