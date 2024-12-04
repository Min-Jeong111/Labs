#include <iostream>
#include <cassert>


int countOnes(const std::string& str) 
{
    int count = 0;
    for (char c : str) 
    {
        if (c == '1') 
            ++count;
    }
    return count;
}

// Тесты
void runTests() 
{
    assert(countOnes("000000") == 0); // Без 1
    assert(countOnes("001100") == 2); // Несколько 1
    assert(countOnes("111111") == 6); // Все 1
    assert(countOnes("0") == 0); // Только 1 символ (соответственно без 1)
    assert(countOnes("1") == 1); // Только один 1
    assert(countOnes("101010") == 3); // Проверка с чередовкой символов
    assert(countOnes("") == 0);

    std::string stringg = "110011";
    int result = countOnes(stringg);
    std::cout << "Number of 1 are: " << result << std::endl;

    std::cout << "All tests completed\n";
}

int main() 
{
    runTests();
    return 0;
}
