#include <vector>
#include <algorithm>
#include "show.h"

// �Ʒ� �ڵ带 �� ������ ������
template<typename T, std::size_t N>
class array
{
	T buff[N];

	int size() const { return N; }
};

int main()
{
	// array
	// 1. ��� ��Ұ� ���ÿ� �ֽ��ϴ�.(�迭�� ����)
	array<int, 10> arr = { 1,2,3,4,5,6,7,8,9,10 };

	// raw array �� ����Լ��� ������ array �� ����Լ��� �ֽ��ϴ�.
	std::cout << arr.size() << std::endl; 
}
