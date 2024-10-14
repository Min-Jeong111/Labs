#include <iostream>
#include <span>
#include <cassert>  // Библиотека для использования assert

// 1. Проверка на одинаковую длину массивов и реализация с бесконечным циклом и break
void productBreak(std::span<int> inputOutput, std::span<int> coefficients)
{
    // Проверка на то, чтобы массивы были одинакового размера
    assert(inputOutput.size() == coefficients.size() && "The spans must be the same length!");

    size_t i = 0;
    while (true)
    {
        if (i >= inputOutput.size()) // Условие чтобы выйти из бесконечного цикла
        {
            break;
        }

        inputOutput[i] *= coefficients[i];
        ++i;
    }
}

// 2. Реализация с циклом while с условием
void productWhile(std::span<int> inputOutput, std::span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size() && "The spans must be the same length!");

    size_t i = 0;
    while (i < inputOutput.size())
    {
        inputOutput[i] *= coefficients[i];
        ++i;
    }
}

// 3. Реализация с циклом for
void productFor(std::span<int> inputOutput, std::span<int> coefficients)
{
    assert(inputOutput.size() == coefficients.size() && "The spans must be the same length!");

    for (size_t i = 0; i < inputOutput.size(); ++i)
    {
        inputOutput[i] *= coefficients[i];
    }
}

int main()
{
    int inputOutputArray[] = {1, 2, 3, 4, 5};
    int coefficientsArray[] = {10, 20, 30, 40, 50};

    std::span<int> inputOutput = inputOutputArray;
    std::span<int> coefficients = coefficientsArray;

    // 1. Вызов функции с бесконечным циклом и break
    productBreak(inputOutput, coefficients);

    std::cout << "Result using break: ";
    for (int val : inputOutput)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Перезапись массива чтобы использовать в след. функции
    int inputOutputArray2[] = {1, 2, 3, 4, 5};
    inputOutput = inputOutputArray2;

    // 2. Вызов функции с циклом while
    productWhile(inputOutput, coefficients);

    std::cout << "Result using while: ";
    for (int val : inputOutput)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Перезапись массива чтобы использовать в след. функции
    int inputOutputArray3[] = {1, 2, 3, 4, 5};
    inputOutput = inputOutputArray3;

    // 3. Вызов функции с циклом for
    productFor(inputOutput, coefficients);

    std::cout << "Result using for: ";
    for (int val : inputOutput)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}