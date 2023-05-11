#pragma once

#include "framework.h"

LIBRARY int add(int a, int b);
LIBRARY int subtract(int a, int b);
LIBRARY int divide(int a, int b);
LIBRARY int mult(int a, int b);


template <typename T> LIBRARY T square(T a);