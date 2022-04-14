#include <iostream>

// nullptr �� ����
// 1. boost ���̺귯������ �Ʒ�ó�� ���� �����߽��ϴ�.
// 2. C++11 ���� ǥ�ؿ� �߰��Ǹ鼭�� nullptr �� Ű����� ��������ϴ�.

struct xnullptr_t
{
	template<typename T>
	operator T* () const { return 0; }
};
xnullptr_t xnullptr;

int main()
{
//	int n = xnullptr; // error. 

	int*  p1 = xnullptr; // ok
	char* p2 = xnullptr; // ok
}
