// nullptr1
#include <iostream>

void fn(int   n) { std::cout << "int" << std::endl; } // 1
void fn(void* n) { std::cout << "void*" << std::endl; } // 2
void goo(char* p) {}

// 0�� �����ε�, ������ �ʱ�ȭ����  ����Ѵ�.
// �׷���, �� ����� ���� ȥ���� ����Ų��. (nullptr1.cpp ����)
// ������ �ʱ�ȭ�� "0"�� ������� ���� "������ 0"�� ������.

struct xnullptr_t
{
	// xnullptr_t => void* �� ��ȯ�� �ʿ��Ҷ����� �Ʒ� �Լ� ȣ��
//	operator void* () { return 0; }
//	operator char* () { return 0; }

	template<typename T>
	operator T* () const { return 0; }
};
// �ᱹ nullptr �� ������ Ÿ�����θ� ��ȯ �����ѵ�.. 0���� ä�� �ݴϴ�.
xnullptr_t xnullptr;


int main()
{
	fn(0);	
	fn(xnullptr); // xnullptr => void* ��ȯ �����ϸ� �˴ϴ�.
				  // xnullptr.operator void*() �� ã�� �˴ϴ�.
	goo(xnullptr);
}
