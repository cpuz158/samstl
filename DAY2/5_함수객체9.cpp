#include <vector>
#include <algorithm>
#include <functional>	
#include "show.h"

// ����ǥ������ ���� �����Ϸ��� ����� Ŭ����..
// Ŭ�����̸� ��ü�� �����Ϸ��� ������ �����մϴ�.
class ClosureType
{
public:
	inline auto operator()(int a, int b) const
	{
		return a < b;
	}
};
int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

//	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; } );

	std::sort(v.begin(), v.end(), ClosureType() ); // �� �ڵ�� �ᱹ �̷���
													// ����˴ϴ�.
	std::sort(v.begin(), v.end(), std::less<int>());// �ᱹ �̰Ͱ�
												    // �Ϻ��� ������ ȿ��
}