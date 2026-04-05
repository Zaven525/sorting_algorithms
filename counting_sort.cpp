#include <iostream>
#include <vector>
#include <algorithm>


void counting_sort(std::vector<int>& nums)
{
    int shift = *std::min_element(nums.begin(), nums.end());
    size_t size =  *std::max_element(nums.begin(), nums.end()) - shift + 1;
    std::vector<int> frequencyMap(size, 0);

    for (int elem : nums) ++frequencyMap[elem-shift];
    size_t j = 0;
    for (size_t i{}; i < size; ++i)
    {
        while (frequencyMap[i]) 
        {
            nums[j++] = i+shift;
            --frequencyMap[i];
        }
    }
    //for (int elem : frequencyMap) std::cout << elem << ' ';
}

int main()
{
    std::vector nums{-6, -1, -2, -3, -2};
    counting_sort(nums);
    for (int elem : nums) std::cout << elem << ' ';

    return 0;
}