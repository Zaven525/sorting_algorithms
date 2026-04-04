#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& nums)
{
    for (size_t i = 0; i < nums.size()-1; ++i)
    {
        for (size_t j = i+1; j < nums.size(); ++j)
        {
            if (nums[j] == nums[i]) continue;
            if (nums[j] < nums[i]) std::swap(nums[i], nums[j]);
        }
    }

    
}

int main()
{
    std::vector a{3, 2};
    selectionSort(a);
    for (int elem : a) { std::cout << elem << ' '; }
    std::cout << std::endl;
    return 0;
}