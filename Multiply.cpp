// Автор: Игонин Владимир ИВТ-23

#include "Multiply.h"
#include <cassert>

/// <summary>
/// Функция умножения целых чисел с помощью рекурсии суммы
/// </summary>
/// <param name="a - первое число"></param>
/// <param name="b - второе число"></param>
/// <returns>
/// Результат умножения
/// </returns>
int RecMultiply(int a, int b)
{
	if ((b == 0) || (a == 0))
		return 0;
	if (b < 0)
		return -RecMultiply(a, -b);
	if (b == 1)
		return a;
	return a + RecMultiply(a, b - 1);
}

/// <summary>
/// Тесты для функции умножения целых чисел с помощью рекурсии суммы
/// </summary>
void Rectest()
{
	// Умножения с 0
	assert(RecMultiply(0, 0) == 0);
	assert(RecMultiply(5, 0) == 0);
	assert(RecMultiply(0, 5) == 0);
	assert(RecMultiply(-5, 0) == 0);
	assert(RecMultiply(0, -5) == 0);
	// Умножения с отрицательными числами
	assert(RecMultiply(-5, -4) == 20);
	assert(RecMultiply(-4, 7) == -28);
	assert(RecMultiply(9, -3) == -27);
	// Умножение с положительными числами
	assert(RecMultiply(6, 7) == 42);
}