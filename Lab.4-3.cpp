#include <iostream>
#include <cassert>

// Я решил "пересобрать" код и я не использовал span. Я его немного не перевариваю, поэтому ппытаюсь сделать с обычными массивами
// 1. Функция с бесконечным циклом и break
void cycleBreak(int* inputOutput, int* coefficients, size_t size)
{
    // Проверка на то чтоб массивы были одног размера. Проверка если размер(size) больше 0 и сообщение при ошибке
    assert(size > 0 && "Array size must be greater than zero!");

    size_t i = 0;
    while (true)
    {
        if (i >= size)
        {
            break;
        }

        inputOutput[i] *= coefficients[i];
        ++i;
    }
}


// 2. Цикл while
void cycleWhile(int* inputOutput, int* coefficients, size_t size)
{
    assert(size > 0 && "Array size must be greater than zero!");

    size_t i = 0;
    while (i < size)
    {
        inputOutput[i] *= coefficients[i];
        ++i;
    }
}

// 3. Циикл for
void cycleFor(int* inputOutput, int* coefficients, size_t size)
{
    assert(size > 0 && "Array size must be greater than zero!");

    for (size_t i = 0; i < size; ++i)
    {
        inputOutput[i] *= coefficients[i];
    }
}

int main()
{
    int inputOutputArray1[] = {1, 2, 3, 4, 5};
    int coefficientsArray[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(inputOutputArray1) / sizeof(inputOutputArray1[0]); // Вычисляется размер массива, если, к прмиеру, размер будет разным

    // 1. Вызов с бесконечным циклом с break-ом
    cycleBreak(inputOutputArray1, coefficientsArray, size);

    std::cout << "Using break: ";
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << inputOutputArray1[i] << " ";
    }
    std::cout << std::endl;


    // Снова пишу массив чтоб его использовать в след. цикле
    int inputOutputArray2[] = {1, 2, 3, 4, 5};

    // 2. Вызов функции с циклом while
    cycleWhile(inputOutputArray2, coefficientsArray, size);

    std::cout << "Using while: ";
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << inputOutputArray2[i] << " ";
    }
    std::cout << std::endl;


    int inputOutputArray3[] = {1, 2, 3, 4, 5};

    // 3. Вызов функции с циклом for
    cycleFor(inputOutputArray3, coefficientsArray, size);

    std::cout << "Using for: ";
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << inputOutputArray3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
