#include <iostream>
#include <vector>


void quickSort(std::vector<int>& nums, size_t l, size_t r)
{
    if (l >= r) return;
    int pivot = r;
    int i = l - 1;
    int j = l;
    for (; j <= r; ++j)
    {
        if (nums[j] <= nums[pivot])
        {
            std::swap(nums[++i], nums[j]);
        }
    }
    quickSort(nums, l, pivot - 1);
    quickSort(nums, pivot + 1, r);
}


int main()
{
    std::vector<int> nums{3, 5, 2, 6, 4};
    quickSort(nums, 0, nums.size() - 1);

    for (int elem : nums) std::cout << elem << ", ";
    std::cout << std::endl;

    return 0;
}