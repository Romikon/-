#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Abstract
{
private:
	float y;
	float* arr;
protected:
	float x;
	float a;
	float b;
public:
	void GetX(float value)
	{
		x = value;
	}
	void GetA(float value)
	{
		a = value;
	}
	void GetB(float value)
	{
		b = value;
	}
	void GetY(float element)
	{
		y = element;
	}

	float ReturnY()
	{
		return y;
	}
	virtual float FindY() = 0;
};

class Direct : public Abstract
{
public:
	float FindY()
	{
		return a * x + b;
	}
};

class Parabola : public Abstract
{
private:
	float c;
public:
	void GetC(float value)
	{
		c = value;
	}
	float FindY()
	{
		return a * pow(x, 2) + b * x + c;
	}
};

class Circle : public Abstract
{
private:
	float r;
public:

	void GetR(float value)
	{
		r = value;
	}

	float FindY()
	{
		return sqrt(pow(r, 2) - pow(x - a, 2)) + b;
	}
};