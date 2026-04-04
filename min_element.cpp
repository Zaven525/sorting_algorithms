#include <iostream>
#include <vector>


// template<typename ForwardIt>
// ForwardIt minElement(ForwardIt first, ForwardIt last)
// {
//     ForwardIt min = first;
//     while (first != last)
//     {
//         if (*min > *first) min = first;
//         first++;
//     }

//     return min;
// }



template<typename ForwardIt, typename Comp = std::less<>>
ForwardIt minElement(ForwardIt first, ForwardIt last, Comp cmp)
{
    ForwardIt min = first;
    while (first != last)
    {
        if (cmp(*first, *min)) min = first;
        first++;
    }

    return min;
}

int main()
{
    std::vector<int> a{1, 2, 3};
    std::cout << *minElement(a.begin(), a.end(), [](int a, int b){ return a < b; });    
}