# include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {     //vector<int> just like int array
        for (int i = 0; i <nums.size(); i++){       
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    return vector<int> {i, j};
                }
            }
        }
        return vector<int> {};
    }
};