#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// ������ ����� ���� �Լ�
void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// ������ ���� �ڵ�μ�, foo �� �迭�� �����ϴ� ���
	foo(x, 10);


	// STL �� ����, �迭 ��� vector�� ����ϱ�� �����ϰ�
	// vector�� ������ ���� foo�� �����ϴ� ���
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo �� v�� ���� ������.
	foo(&v, v.size()); // ���������ε� error �̰�, �ǹ̻� ���� �ȵ�
				
	// v�� ����ϴ� ���� ������ �ּҸ� ������ ��
	foo(&v[0], v.size());    // ������ ����ϴ� ���

	foo(v.data(), v.size()); // ���� ���
}


