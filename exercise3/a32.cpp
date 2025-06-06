#include <iostream>
#include <vector>

int main()
{
    int number;
    std::vector<int> numbers;

    std::cout << "Please enter you numbers, one-by-one, then quit by end-of-file: " << std::endl;

    while (std::cin >> number)
        numbers.push_back(number);

    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = numbers.size();

    std::sort(numbers.begin(), numbers.end());

    for (auto &n : numbers)
        std::cout << n << "\n";

    vec_sz mid = size / 2;
    vec_sz q1 = mid / 2;
    vec_sz q2 = mid * 2;

    if (size % 2 == 0)
    {
        std::cout << "Q1: " << (numbers[q1] + numbers[q1 - 1]) / 2 << std::endl;
        std::cout << "MID: " << (numbers[mid] + numbers[mid - 1]) / 2 << std::endl;
        std::cout << "Q2: " << (numbers[q2] + numbers[q2 - 1]) / 2 << std::endl;
    }
    else
    {
        std::cout << "Q1: " << numbers[q1] << std::endl;
        std::cout << "MID: " << numbers[mid] << std::endl;
        std::cout << "Q2: " << numbers[q2] << std::endl;
    }

    return 0;
}