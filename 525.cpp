class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]==0){
                nums[i]=-1 ;
            }
        }

        unordered_map<int , int> mpp ; 
        int ans = 0 ; 
        int psum  = 0 ;
        mpp.insert({0,-1}) ; 

        for(int i = 0 ; i<nums.size() ; i++){
            psum+=nums[i] ; 

            if(mpp.find(psum)==mpp.end()){
                mpp[psum] = i ; 
            }
            else {
                ans = max(ans , i-mpp[psum]) ; 
            }
        }
        return ans ; 
    }
};