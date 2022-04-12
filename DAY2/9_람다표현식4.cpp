#include <iostream>

int main()
{
	int v1 = 10, v2 = 10;

	// 1. ����ǥ���Ŀ��� ���������� ����Ϸ��� ĸ�� �ؾ� �մϴ�.
	auto f1 = [v1, v2](int a) { return a + v1 + v2; };

	// 2. ������ ĸ���ϸ� �б⸸ �����մϴ�
//	auto f2 = [v1](int a) { v1 = a; }; // error

	// 3. ���氡���ϰ� �Ϸ��� "���� ĸ��" �� �ؾ� �մϴ�.
	auto f3 = [&v1](int a) { v1 = a; }; // ok

	f3(100); // v1 = 100

	std::cout << v1 << std::endl;
}