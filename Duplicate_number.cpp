class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(nums[i]>0){
            int j=nums[i];
            nums[i]=0;
            i=j;
        }
        return i;
    }
       /* int sum=0, n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int s=n*(n-1)/2;
        return sum-s;
    }*/
       /* int x=0;
        int n=nums.size();
         for(int i=1;i<=n-1;i++){
            x^=i;
        }
        for(int i=0;i<n;i++){
            x^=nums[i];
        }
        return x;
    }*/
};
