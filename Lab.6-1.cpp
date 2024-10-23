#include <iostream>

// int hello(int); - если скомпилировать так, то выдаёт ошибку из-за того что объявление функции есть, 
                   // в то время как само тело этой функции отсутствует


// Исправленный код, с определением тела функции и уже последующих операций (ошибок нет)
int hello(int number)
{
   return number * 11;
}


int main()
{
   int result = hello(5);
   std::cout << result << std::endl;


   return 0;
}