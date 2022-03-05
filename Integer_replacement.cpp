class Solution {
public:
    int integerReplacement(int n) {
        int cnt=0;
        long long n1=n;
        while(n1!=1){
            if(n1%2==0){
                n1=n1/2;
            }
            else{
                int temp = (n1-1)/2;
                if(temp==1 || temp%2==0)
                    n1--;
                else
                    n1++;
            }
            cnt++;
        }
        return cnt;
    }
};
