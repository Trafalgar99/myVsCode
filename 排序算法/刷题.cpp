#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int c = target - nums[i];
            if (m.count(c) && m[c] != i)
            {
                vector<int> v;
                v.push_back(i);
                v.push_back(m[c]);
                return v;
            }
            m[nums[i]] = i;
        }
     
    }
};

void barrelSort(int arr[], int low, int high)
{
    int barrel[10] = { 0 };
    for (int i = low; i < high; i++)
    {
        barrel[arr[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < barrel[i]; j++)
        {
            cout << i<<" ";
        }
    }
}

int main()
{

  /*Solution s;
  vector<int> nums = { 2,7,11,15 };
  vector<int> result = s.twoSum(nums,9);
  cout << result[0] << " " <<result[1];*/
    int arr[10] = { 1, 3,2,7,3,8,9,0,3,6 };
    barrelSort(arr, 0, 10);

}