#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = nums.size(), sum = 0;
        unordered_map<int, int> mp{{0,0}};
        for(int i = 0; i < len; i++){
            sum += nums[i];
            if(!mp.count(sum % k)) mp[sum % k] = i+1;
            else if(mp[sum % k] < i) return true;
        }
        return false;
    }
};

int main(){
    vector<int> nums = {23, 2, 4, 6, 7};
    int k = 6;
    Solution s;
    cout << s.checkSubarraySum(nums, k) << endl;
    return 0;
}