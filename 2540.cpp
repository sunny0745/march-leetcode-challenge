class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int > mp;

        for(int i = 0 ; i<nums.size() ; i++){
            mp[nums[i]]++ ; 

        }
        int count = 0 ; 
        int maxi = INT_MIN ;
        for(auto it : mp ){
            if(it.second > maxi ){
                maxi = it.second ; 
            }
        }
        for(auto it : mp ){
            if(it.second == maxi ){
                count+= maxi ;
            }
        }
        return count ; 
        
    }
};