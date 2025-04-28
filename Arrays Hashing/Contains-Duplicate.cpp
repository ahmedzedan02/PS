#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>du;
        for (int num : nums) {
            if (du.count(num)) {
                return true;
            }
            du.insert(num);
        }
        return false; 
    }
};
