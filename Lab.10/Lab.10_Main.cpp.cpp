#include "Vector2.h"
#include <cassert>
#include <iostream>

int main()
{
	Vector2 v1;
	v1.x = 1.0f;
	v1.y = 2.0f;

	Vector2 v2;
	v2.x = 3.0f;
	v2.y = 4.0f;

	// Умножение
	Vector2 v3 = v1 * 2.0f;
	assert(v3.x == 2.0f && v3.y == 4.0f);


	// Деление
	Vector2 v4 = v2 / 2.0f;
	assert(v4.x == 1.5f && v4.y == 2.0f);

	// Сложение
	Vector2 v5 = v1 + v2;
	assert(v5.x == 4.0f && v5.y == 6.0f);

	// Вычитание
	Vector2 v6 = v2 - v1;
	assert(v6.x == 2.0f && v6.y == 2.0f);

	// Деление и присваивание
	v2 /= 2.0f;
	assert(v2.x == 1.5f && v2.y == 2.0f);

	// Сложение и присваивание
	(v1 += v2) += v2;
	assert(v1.x == 4.0f && v1.y == 6.0f);

	// Вычитание и присваивание
	v1 -= v2;
	assert(v1.x == 2.5f && v1.y == 4.0f);

	// Доступ через использование []
	assert(v1[0] == 2.5f && v1[1] == 4.0f);


	// Ну и вывод
	std::cout << v1 << std::endl;

	std::cout << "All test have been passeD!" << std::endl;

	return 0;
}