#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ����
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // ��� ����������� ?

	std::cout << v.size() << std::endl;
	std::cout << v.capacity() << std::endl;

	
}




