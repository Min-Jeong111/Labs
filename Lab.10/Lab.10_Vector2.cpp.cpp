#include "Vector2.h"
#include <stdexcept>

Vector2& Vector2::operator*=(float a)
{
	x *= a;
	y *= a;

	return *this;
}

Vector2& Vector2::operator/=(float a)
{
	if (a == 0.0f)
	{
		throw std::invalid_argument("Divided by zero");
	}

	x /= a;
	y /= a;

	return *this;
}

Vector2& Vector2::operator+=(const Vector2& other)
{
	x += other.x;
	y += other.y;

	return *this;
}


Vector2& Vector2::operator-=(const Vector2& other)
{
	x -= other.x;
	y -= other.y;

	return *this;
}

float& Vector2::operator[](int index)
{
	if (index == 0)
	{
		return x;
	}

	if (index == 1)
	{
		return y;
	}

	throw std::out_of_range("Index out of range!");
}

const float& Vector2::operator[](int index) const
{
	if (index == 0)
	{
		return x;
	}

	if (index == 1)
	{
		return y;
	}

	throw std::out_of_range("Index out of range!");
}


Vector2 operator*(const Vector2& v, float a)
{
	return Vector2(v.x * a, v.y * a);
}

Vector2 operator*(float a, const Vector2& v)
{
	return v * a;
}

Vector2 operator/(const Vector2& v, float a)
{
	if (a == 0.0f)
	{
		throw std::invalid_argument("Divided by zero");
	}

	return Vector2(v.x / a, v.y / a);
}

Vector2 operator+(const Vector2& v1, const Vector2& v2)
{
	return Vector2(v1.x + v2.x, v1.y + v2.y);
}

Vector2 operator-(const Vector2& v1, const Vector2& v2)
{
	return Vector2(v1.x - v2.x, v1.y - v2.y);
}

std::ostream& operator<<(std::ostream& os, const Vector2& v)
{
	os << "(" << v.x << ", " << v.y << ")";

	return os;
}