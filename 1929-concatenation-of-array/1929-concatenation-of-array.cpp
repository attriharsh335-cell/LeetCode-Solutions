class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> harsh;
      for(int i=0;i<nums.size();i++){

        harsh.push_back(nums[i]);

      } 
       for(int i=0;i<nums.size();i++){
        
        harsh.push_back(nums[i]);

      }
      return harsh; 
    }
};