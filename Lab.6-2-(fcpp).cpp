#include <iostream>

// int hello(int); // Будет тоже самое что и в первом примере, нет тела функции, поэтому программа не скомпилируется


// При добавлении static к этой функции, при компиляции и этого и maincpp.cpp файла - выдаст ошибку, из-за того что эта функция "спрятана" в этом файле, из-за чего там не будет референса
// static int hello(int number) 
// {
   //return number * 1;
// }
