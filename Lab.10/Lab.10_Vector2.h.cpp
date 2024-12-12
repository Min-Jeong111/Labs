#pragma once

#include <iostream>

struct Vector2
{
	float x, y;

	Vector2(float x = 0.0f, float y = 0.0f) : x(x), y(y) {};

	Vector2& operator*=(float a);
	Vector2& operator/=(float a);
	Vector2& operator+=(const Vector2& other);
	Vector2& operator-=(const Vector2& other);
	float& operator[](int index);
	const float& operator[](int index) const;
};

Vector2 operator*(const Vector2& v, float a);
Vector2 operator*(float a, const Vector2& v);
Vector2 operator/(const Vector2& v, float a);
Vector2 operator+(const Vector2& v1, const Vector2& v2);
Vector2 operator-(const Vector2& v1, const Vector2& v2);
std::ostream& operator<<(std::ostream& os, const Vector2& v);