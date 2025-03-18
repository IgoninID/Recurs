// �����: ������ �������� ���-23

#include "Multiply.h"
#include <cassert>

/// <summary>
/// ������� ��������� ����� ����� � ������� �������� �����
/// </summary>
/// <param name="a - ������ �����"></param>
/// <param name="b - ������ �����"></param>
/// <returns>
/// ��������� ���������
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
/// ����� ��� ������� ��������� ����� ����� � ������� �������� �����
/// </summary>
void Rectest()
{
	// ��������� � 0
	assert(RecMultiply(0, 0) == 0);
	assert(RecMultiply(5, 0) == 0);
	assert(RecMultiply(0, 5) == 0);
	assert(RecMultiply(-5, 0) == 0);
	assert(RecMultiply(0, -5) == 0);
	// ��������� � �������������� �������
	assert(RecMultiply(-5, -4) == 20);
	assert(RecMultiply(-4, 7) == -28);
	assert(RecMultiply(9, -3) == -27);
	// ��������� � �������������� �������
	assert(RecMultiply(6, 7) == 42);
}