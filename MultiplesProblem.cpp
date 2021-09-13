#include <iostream>

int main()
{

    std::cout << "Multiples Solution!\n";
    int sum = 0;

    for (int num = 0; num < 1000; num++)
    {

        if (num % 3 == 0 || num % 5 == 0)
        {

            sum += num;

        }

    }
    
    std::cout << "Solution Found:" << sum << std::endl;

}