#include <vector>
#include <algorithm>
#include "show.h"

// �Ʒ� �ڵ带 �� ������ ������
template<typename T, std::size_t N>
struct array
{
	T buff[N];
	inline int size() const { return N; }
	inline bool empty() const { return N != 0; }

	using value_type = T;
	using iterator = T* ;
	using reference = T& ;

	iterator begin() { return buff ; }
	iterator end()   { return buff + N ; }
};

int main()
{
	// array
	// 1. ��� ��Ұ� ���ÿ� �ֽ��ϴ�.(�迭�� ����)
	array<int, 10> arr = { 1,2,3,4,5,6,7,8,9,10 };

	// 2. raw array �� ����Լ��� ������ array �� ����Լ��� �ֽ��ϴ�.
	std::cout << arr.size() << std::endl; 

	// 3. �ٸ� �����̳� ó�� �ݺ��� ��밡��
	auto p = arr.begin();

	// 4. begin(), end()�� �ִ� ��� Ÿ���� range_for �� �˴ϴ�.
	for (auto e : arr)
	{
		std::cout << e << std::endl;
	}
}
