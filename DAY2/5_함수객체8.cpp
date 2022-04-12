#include <vector>
#include <algorithm>
#include <functional>	// �� �ȿ� �̹� ������� �پ��� �Լ� ��ü�� �ֽ��ϴ�.
						// less<>, greater<> ��
#include "show.h"

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// STL ���� sort()�� ����ϴ� ���
	// A. �� ��å�� ���� ���ϴ� ���
	std::sort( v.begin(), v.end() ); // ���� ���� ����

	// B. �� ��å�� ���� �ϴ� ���
	// 1. �Ϲ� �Լ�
	std::sort(v.begin(), v.end(), cmp1); // cmp1 �� inline �Լ��� ġȯ�ȵ�

	// 2. �Լ� ��ü ����
	std::less<int> f;
	std::sort(v.begin(), v.end(), f); 

	std::sort(v.begin(), v.end(), std::less<int>() ); // �ӽð�ü ǥ������� ����

	// 3. C++11 ���ʹ� ���� ǥ����.
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; } );

}