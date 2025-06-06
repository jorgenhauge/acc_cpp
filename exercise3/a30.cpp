#include <iostream>
#include <print>
#include <iomanip>
#include <string>
#include <vector>

int main()
{
    std::println("Please input your first name: ");
    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;

    std::cout << "Please enter you midterm and final exam grades: ";
    double midterm, final;
    std::cin >> midterm, final;

    std::cout << "Enter all you homework grades, follwed by end-of-file(Might be: Ctrl+c): ";
    std::vector<double> homework;
    double x;

    while (std::cin >> x)
        homework.push_back(x);

    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size == 0)
    {
        std::print("You mist enter you grades. Please try again");
        return 1;
    }
    std::sort(homework.begin(), homework.end());

    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

    std::streamsize prec = std::cout.precision();
    std::cout << "Your final grade is: " << std::setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * median << std::setprecision(prec) << std::endl;

    return 0;
}