#include <iostream>
#include <vector>

int particion(std::vector<int>& nums, int l, int r)
{
    int i = l - 1;
    int j = l;
    for (; j <= r; ++j)
    {
        if (nums[j] <= nums[r])
        {
            std::swap(nums[++i], nums[j]);
        }
    }
    return i;
}

void quickSort(std::vector<int>& nums, int l, int r)
{
    if (l >= r) return;
    int pivot = particion(nums, l, r);
    
    quickSort(nums, l, pivot - 1);
    quickSort(nums, pivot + 1, r);
}


int main()
{
    std::vector<int> nums{};
    quickSort(nums, 0, nums.size() - 1);

    for (int elem : nums) std::cout << elem << ", ";
    std::cout << std::endl;

    return 0;
}