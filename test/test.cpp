//Вычисление максимального элемента матрицы
#include <iostream>

int main()
{

    int a[10], i, m = 0, max;
    std::cout << " Введите 20 элементов массива: ";
    for (i = 0; i < 10; i++)
        std::cin >> a[i];
    max = a[0];

    for (i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
            m = i;
        }
    }
    std::cout << "Максимальный элемент массива: mas[" << m << "] = " << max;
}
