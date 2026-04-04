#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& nums)
{
    auto beginIter = nums.begin();
    while (beginIter != nums.end())
    {
        std::iter_swap(beginIter, std::min_element(beginIter, nums.end()));
        beginIter++;
    }
}

int main() 
{
    std::vector<int> nums{3, 2};
    selectionSort(nums);
    for (int elem : nums) { std::cout << elem << ' '; }
    std::cout << std::endl;

    return 0;
}