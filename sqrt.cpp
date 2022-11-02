/* 
    This program was made for academic purposes, feel free to use it.
    By Murilo M. Grosso - 2022
*/

#include<iostream>

double sqrt(float n);

int main()
{
    double n;

    std::cout << std::endl << "> SQUARE ROOT <" << std::endl;
    std::cout << std::endl << "Insert a number: ";

    std::cin >> n;

    std::cout << "\nResult: " << sqrt(n) << std::endl << std::endl;

    std::cin.get();

    return 0;
}

double sqrt(float n)
{
    const double step = 1e-06;
    double start = 0;
    double end = n;
    double res = 1;

    while (start <= end)
    {
        double mid = (start + end)/2;
        if(n < mid*mid)
        {
            end = mid - step;
            continue;
        }
        res = mid;
        if(n > mid*mid)
        {
            start = mid + step;
            continue;
        }
        break;
    }

    return res;
}
