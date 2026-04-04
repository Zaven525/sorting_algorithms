#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& nums)
{
    auto endIter = nums.end();
    
    while(endIter != nums.begin())
    {
        auto nextIter = nums.begin() + 1;
        bool flagSwaped = false;

        while (nextIter != endIter)
        {
            if (*nextIter < *(nextIter - 1)) 
            {
                std::iter_swap(nextIter-1, nextIter);
                flagSwaped = true;
            }
        }
        if (!flagSwaped) return;
        --endIter;
    }
}

int main()
{
    std::vector<int> nums{2,1,3,4};
    bubbleSort(nums);
    for(int i : nums) std::cout << i << ' ';
    
    return 0;
}