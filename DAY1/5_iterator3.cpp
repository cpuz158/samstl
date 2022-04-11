#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };

	int s[5] = {1,2,3,4,5};


	// �ݺ��ڸ� ������ ��
	// 1. C++11 ���� ��Ÿ��
	//    => �����̳� ��ü��, �º� Ÿ���� �����Ǿ�� �մϴ�.
//	std::list<int>::iterator p = s.begin();

	// 2. C++11 ���Ķ�� auto ����ϼ���
//	auto p = s.begin(); // �� �ڵ�� s �� raw array ��� error �Դϴ�.


	// 3. C++11 ����, �������� ���� ���� �ڵ�� �Ʒ� �ڵ��Դϴ�.
	auto p = std::begin(s); // ok. s �� STL �����̳� �� �ƴ϶�, 
							//     raw array �� ok
	
	// 4. ����, C++20 ���Ŀ��� �Ʒ� ó�� ������ �˴ϴ�.
//	auto p1 = std::ranges::begin(s); // <ranges> ��� �ʿ�
									 // 3������ ���ݴ� �����մϴ�.
									 // C++20 ���� ����.


}



