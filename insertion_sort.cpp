#include <iostream>
#include <vector>

void insertoinSort(std::vector<int>& nums)
{
    
    for (int i{1}; i < nums.size(); ++i)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && key < nums[j]) nums[j + 1] = nums[j--];
        nums[++j] = key;
        i++;
    }
    for (int elem : nums) std::cout << elem << ' ';
    
}

int main()
{
    std::vector<int> nums{5, 2};
    insertoinSort(nums);


    return 0;
}