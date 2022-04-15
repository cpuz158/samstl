#include <iostream>
#include <thread>

// atomic

int x = 0;

void foo()
{
	for (int i = 0; i < 1000000; i++)
	{
//		m.lock();
//		x = x + 1;
//		m.unlock();

		// x = x +1 �� ����� �Ʒ��� �����ϴ�. 32bit
		/*
		__asm
		{			
			mov eax, x
			add eax, 1
			mov x, eax
		}
		*/

		// 1�����ϱ� ���� ����� �ٸ��� �� ���ô�.
		// inc : ������ context swiching �� �߻����� ���� ���� �����մϴ�.
		//       �׷���, CPU ��ü�� ������ �� ���� 1���� ���� �ȵ�
		// 
		// lock prefix : ���� CPU ����, Ư�� �޸𸮸� ���ÿ� �����Ҽ� �����ϴ�
		//				intel opcode
		__asm
		{
			lock inc x 
		}
		// lock free : OS �� ����ȭ ������ ������� �ʰ�
		//				CPU ��ɸ� ������, ����ȭ�� �����ϴ� ���

	}
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	std::thread t3(&foo);
	t1.join();
	t2.join();
	t3.join();
	std::cout << x << std::endl;
}