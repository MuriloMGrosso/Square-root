#include<iostream>

float sqrt(float n)
{
    float start = 0;
    float end = n;
    float res = 1;

    while (start <= end)
    {
        float mid = (start + end)/2;
        if(n < mid*mid)
        {
            end = mid - 0.00001;
            continue;
        }
        res = mid;
        if(n > mid*mid)
        {
            start = mid + 0.00001;
            continue;
        }
        break;
    }

    return res;
}

int main()
{
    float n;

    std::cout << "\nSQUARE ROOT OF N" << std::endl;
    std::cout << "\nInsert n: ";
    std::cin >> n;
    std::cout << "\nResult: " << sqrt(n) << std::endl;

    std::cin.get();

    return 0;
}
