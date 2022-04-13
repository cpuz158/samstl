#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// 3�� ��� �����ϰ� �ʹ�.
	auto p = std::remove(v.begin(), v.end(), 3);

	std::cout << v.size() << ", " << v.capacity() << " : "; show(v);

	v.erase(p, v.end());

	std::cout << v.size() << ", " << v.capacity() << " : "; show(v);

}




