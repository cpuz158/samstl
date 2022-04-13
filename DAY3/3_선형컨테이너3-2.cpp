#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// �Ʒ� �ڵ带 ����
// std::remove()   vs   v.erase()   vs   v.resize()
int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// 3�� ��� �����ϰ� �ʹ�.
	auto p = std::remove(v.begin(), v.end(), 3);

	std::cout << v.size() << ", " << v.capacity() << " : "; show(v);

	// �Ʒ� �ڵ�� p~ v.end() �� �����ϴ� �ڵ� �Դϴ�.
	v.erase(p, v.end());

	std::cout << v.size() << ", " << v.capacity() << " : "; show(v);

	// ���� �޸𸮸� ���̷���, resize() �Ǵ� shrink_to_fit
	v.shrink_to_fit(); // v.resize( v.size() ) �� �ǹ�

	std::cout << v.size() << ", " << v.capacity() << " : "; show(v);
}




