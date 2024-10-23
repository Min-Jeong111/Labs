#include <iostream>

// int hello(int); // Будет тоже самое что и в первом примере, нет тела функции, поэтому программа не скомпилируется


// При копировании определения этой функции из fcpp.cpp, то ошибки нет ибо теперь эта функция определена тут, и линкер не будет её искать во втором файле
static int hello(int number) 
{
   return number * 1;
}

int main()
{
   int result = hello(11);
   std::cout << result << std::endl;

   return 0;
}


// Если предположить что компилятор не убирает неиспользованные копии, то будут две копии функции hello: одна в maincpp.cpp и одна в fcpp.cpp