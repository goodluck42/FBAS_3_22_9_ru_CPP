//#pragma once

#ifndef MYMATH_H
#define MYMATH_H

int sum(int a, int b);
double sum(double a, double b);


template<typename T> T min(T* array, size_t length)
{
	T min_value = array[0];

	for (size_t i = 1; i < length; i++)
	{
		if (array[i] < min_value)
		{
			min_value = array[i];
		}
	}

	return min_value;
}
#endif