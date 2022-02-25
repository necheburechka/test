#include <iostream>
#include "func.h"

int main()
{
	int x, y;
    std::cin >> x >> y;
    std::cout << "The sum is " << add(x, y) << std::endl;
    return 0;
}