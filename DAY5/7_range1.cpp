// 7_range1
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	
	// �Ʒ� �ڵ带 ������ �˾� ���ô�.
	for (auto e : v)
	{
		std::cout << e << std::endl;
	}
}