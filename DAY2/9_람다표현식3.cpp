#include <vector>
#include <algorithm>
#include <functional>	
#include "show.h"

int main()
{
	// �Ʒ� �ڵ带 ���� sort() �Լ��� � ���� ������ ������
	// => ���� ���� ǥ�����̶�, �ٸ� Ÿ���Դϴ�.
	std::sort(x, x + 10, [](int a, int b) { return a < b; });
	std::sort(x, x + 10, [](int a, int b) { return a < b; });
	std::sort(x, x + 10, [](int a, int b) { return a < b; });

	// ������ ����ǥ������ ������ ����Ѵٸ� 
	// "auto ������ ��� ���� ����ϴ� ���� �������� �ֽ��ϴ�."
	auto cmp = [](int a, int b) { return a < b; };
	std::sort(x, x + 10, cmp);
	std::sort(x, x + 10, cmp);
	std::sort(x, x + 10, cmp);
}


