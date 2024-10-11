#include <iostream>
#include <span>
#include <cassert>  // Библиотека для использования assert

void product(std::span<int> inputOutput, std::span<int> coefficients)
{
    // Проверка на то, чтобы массивы были одинакового размера
    assert(inputOutput.size() == coefficients.size() && "The spans must be the same length!");

    // Цикл которые попарно перемножает элементы массивов и записываем результат в первый массив (inputOutput)
    for (size_t i = 0; i < inputOutput.size(); ++i)
    {
        inputOutput[i] *= coefficients[i];
    }
}

int main()
{
    int inputOutputArray[] = {1, 2, 3, 4, 5};
    int coefficientsArray[] = {10, 20, 30, 40, 50};

    // Преобразование массивоов в std::span
    std::span<int> inputOutput = inputOutputArray;
    std::span<int> coefficients = coefficientsArray;

    // Вызов функции для перемножения
    product(inputOutput, coefficients);

    // Выводим результат
    for (int val : inputOutput)
    {
        std::cout << val << " ";
    }

    return 0;
}
