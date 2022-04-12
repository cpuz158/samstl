#include <vector>
#include <algorithm>
#include <functional>	
#include "show.h"

class ClosureType
{
public:
	inline auto operator()(int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	// ����ǥ������ ����ϸ�
	// 1. ���� ���� Ŭ������ �����Ϸ��� �����ϰ�
	// 2. ����ǥ�����ڵ带 "������Ŭ������ �ӽð�ü�� ����"�ϴ� �ڵ�� ����
	[](int a, int b) { return a + b; };  // �� �κ���
	// ClosureType()					 // �̷��� ����

	auto f = [](int a, int b) { return a + b; };
			 // ClosureType();

	std::cout << typeid(f).name() << std::endl; 

	std::cout << f(1, 2) << std::endl; // 3
	std::cout << f.operator()(1, 2) << std::endl; // 3
}