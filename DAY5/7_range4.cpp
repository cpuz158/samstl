#include <iostream>
#include <vector>
#include <ranges> // C++20 ���� ����

// g++ �ҽ��̸�.cpp -std=c++20
// cl  �ҽ��̸�.cpp /std:c++latest

// VC IDE ���ô�  C++ ���� ����

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// take_view �� ����ϴ¹�
	// 1. take_view Ŭ���� �̸� ���� ���
	std::ranges::take_view tv1(v, 3);

	// 2. take_view�� �����ϴ� take() �Լ� ���
	auto tv2 = std::views::take(v, 3);



//	for (auto e : tv1)
	for (auto e : std::views::take(v, 3) )
	{
		std::cout << e << std::endl;
	}

}