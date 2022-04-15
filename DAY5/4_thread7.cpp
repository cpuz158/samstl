// g++ �ҽ��̸�.cpp -S �ϸ� ����ڵ� ���� �ֽ��ϴ�.
// cl  �ҽ��̸�.cpp /FAs �ص� �ҽ�.asm ���� �����˴ϴ�.
// cl  �ҽ��̸�.cpp /FAs /O2 �ϸ� ����ȭ �˴ϴ�.

// reordering : �����Ϸ��� ����ȭ �ϸ鼭
//				�ڵ��� ������ ������ ���� ����
#include <atomic>

int a = 0;
int b = 0;

// foo, goo �� �ٸ� �����尡 �����մϴ�.
void foo()
{
	a = b + 1;

//	__asm { mfence }  // <== �޸� �潺 ��ġ
					  // �� �ڵ�� �Ʒ� �潺�� ������ ����.

	std::atomic_thread_fence(std::memory_order_seq_cst);

	b = 1;
}

void goo()
{
	if (b == 1)
	{
		// a�� �ݵ�� 1�ϱ�� ?
	}
}

int main()
{
}