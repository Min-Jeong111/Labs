#include <iostream>
#include <string_view>
#include <cassert>

std::string_view secondWord(std::string_view str) 
{
    size_t firstSpace = str.find(' '); // Находим первый пробел
    if (firstSpace == std::string_view::npos) 
    {
        return ""; // Если пробела нет, возвращает пустую строку
    }

    size_t secondSpace = str.find(' ', firstSpace + 1); // Находим второй пробел после первогоо
    if (secondSpace == std::string_view::npos) 
    {
        return str.substr(firstSpace + 1); // Если второго пробела нет, возвращает остальную часть строки
    }

    return str.substr(firstSpace + 1, secondSpace - firstSpace - 1); // Возвращаем кусок строки между пробелами
}

void runTests() 
{
    // Тесты для проверки функции secondWord
    assert(secondWord("Hello world") == "world");
    assert(secondWord("Hello my dear") == "my");
    assert(secondWord("") == "");
    assert(secondWord(" ") == "");
    assert(secondWord(" a ") == "a");
    assert(secondWord("a  ") == "");
    assert(secondWord("a  b") == ""); // Между "a" и "b" два пробела
    
    std::cout << "All tests have been passed!" << std::endl;
}

int main() 
{
    runTests();
    return 0;
}
