#include <iostream>
#include <string_view>
#include <cassert>

int countOnes(std::string_view str) 
{
    int count = 0; // Счётчик для символов - '1'
    
    // Цикл который проходит по каждому символу в строке
    for (char c : str) 
    {
        if (c == '1') 
        {
            count++; // Увеличивается счётчик в случае если символ равен '1'
        }
    }
    
    return count; // Возвращает количество символов '1'
}

void runTests() 
{
    // Тест - нет символов '1'
    assert(countOnes("000000") == 0);
    
    // Тест - несколько символов '1'
    assert(countOnes("001100") == 2);
    
    // Тест - все символы '1'
    assert(countOnes("111111") == 6);
    
    // Тест - строка с одиночным символом '1'
    assert(countOnes("0") == 0);
    assert(countOnes("1") == 1);
    
    // Тест - строка с чередующимися символами
    assert(countOnes("101010") == 3);
    
    // Тест - пустая строка без символов
    assert(countOnes("") == 0);
    
    std::cout << "All the tests have been passed!" << std::endl;
}

int main() 
{
    runTests();
    return 0;
}
