// 7_insert1-1
#include <iostream>

template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
	// ������ ���� ���̴� ���� ?
	square<int>(3); // 1
	square(3);		// 2
}