// 6_optional
#include <iostream>
#include <optional> // C++17 ���� ���� ���� �Դϴ�.

// ������ ���ɼ��� �ִ� �Լ��� ���鶧
// 1. ���ܸ� ����ϰų�
// 2. optional �� ����.
std::optional<int> foo()
{
	if (1)
	{
		return std::nullopt;
	}
	return 100;
}

int main()
{
	auto ret = foo();
	if (ret) // ret != std::nullopt
	{
		int n = *ret;
	}
}
