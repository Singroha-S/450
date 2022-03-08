class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        int xo=0;  //xor of array
        for(int i=0;i<nums.size();i++){
            xo=xo^nums[i];
        }
        
        int txo=xo;  //temporary xor
        int pos=0;
        while((txo&1)==0){
            pos++;
            txo=txo>>1;
        }
        
        int x=1<<pos;
        
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if((x&nums[i])>0){
                a^=nums[i];
            }
            else{
                b^=nums[i];
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
