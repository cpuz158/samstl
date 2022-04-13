#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ����
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // ��� ����������� ?

	std::cout << v.size()     << std::endl;	// 7
	std::cout << v.capacity() << std::endl;	// 10

	v.push_back(20); // ���� �Ѱ� �߰�.
					 // ���� ���´� �޸��� ���� ������ �����Ƿ�
					 // �޸� ���Ҵ� �ʿ� �����ϴ�.
					 // not expensive operation

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 10

	v.shrink_to_fit(); // size == capacity �� �ǵ��� �ش޶�.

	std::cout << v.size() << std::endl;     // 8
	std::cout << v.capacity() << std::endl; // 8

	v.push_back(3);  // ���� �Ѱ�(3) �߰�

	std::cout << v.size() << std::endl;     // 9
	std::cout << v.capacity() << std::endl; // ???

}




