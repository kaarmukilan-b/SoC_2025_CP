// leetcode submission
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int p=0,current_max=0;
        vector<int> result;

        for (int i=0; i< k; i++){
            if (current_max <= nums[i]){
                current_max = nums[i];
                p = i;
            }    
        }
        result.push_back(current_max);
        // current max has max of 1st window
        for (int i=1; i< n-k+1; i++){ // all windows 
        p--;
            if( p>=0 ){
                if(current_max <= nums[i+k-1]){
                    current_max = nums[i+k-1];
                    p = k-1;
                }
            }
            else {
                current_max = nums[i];
                p = 0;
                for (int j=1; j < k; j++){
                    if (current_max <= nums[i+j]) {
                        current_max = nums[i+j];
                        p = j;
                    }
                }
            }
            result.push_back(current_max);
        }
        return result;
    }
};
