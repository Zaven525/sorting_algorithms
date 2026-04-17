#include <iostream>
#include <vector>

int particion(std::vector<int>& nums, int l, int r)
{
    int pivot = nums[r];
    int i = l - 1;

    for (int j = l; j < r; ++j)
    {
        if (nums[j] <= pivot)
        {
            std::swap(nums[++i], nums[j]);
        }
    }
    std::swap(nums[i + 1], nums[r]);
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
    std::vector<int> nums{1, 2, 1};
    quickSort(nums, 0, nums.size() - 1);

    for (int elem : nums) std::cout << elem << ", ";
    std::cout << std::endl;

    return 0;
}