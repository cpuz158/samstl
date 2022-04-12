// 6_������
#include <iostream>
#include <vector>
#include <algorithm>

// ������(predicator) : bool �� ��ȯ �ϴ� �Լ�(�Լ���ü)
bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// �־��� �������� "3" �˻�
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// �־��� �������� 1��° ������ "3�� ���" �� ã�� �ʹ�.
	// std::find    : �� �˻�   - 3��° ���ڷ� ��
	// std::find_if : ���� �˻� - 3��° ���ڷ� �Լ�
	auto ret2 = std::find_if(v.begin(), v.end(), foo);

	auto ret3 = std::find_if(v.begin(), v.end(), 
							[](int n) { return n % 3 == 0; });

}


