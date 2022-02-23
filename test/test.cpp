//Вычисление максимального элемента матрицы
#include <iostream>

int main()
{

    int mas[10], i, m = 0, max;
    std::cout << " Введите 20 элементов массива: ";
    for (i = 0; i < 10; i++)
        std::cin >> mas[i];
    max = mas[0];

    for (i = 1; i < 10; i++) {
        if (mas[i] > max) {
            max = mas[i];
            m = i;
        }
    }
    std::cout << "Максимальный элемент массива: mas[" << m << "] = " << max;
}
