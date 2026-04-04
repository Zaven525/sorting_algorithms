#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a{2, 1, 3};
    bool flag_swaped = false;
    
    for (int i = 0; i < a.size()-1; i++)
    {
        flag_swaped = false;
        
        for (int j = 0; j < a.size()-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                std::swap(a[j], a[j+1]);
                flag_swaped = true;
            }
        }
        
        if (!flag_swaped) break;
    }
    
    for (int elem : a) { std::cout << elem << ' '; }
    std::cout << '\n';

    return 0;
}