#include <iostream>
#include <thread>
#include <atomic>

// atomic

// int x = 0;

std::atomic<int> x = 0;  

void foo()
{
	for (int i = 0; i < 1000000; i++)
	{
//		x = x + 1;

//		++x; // x.operator++() ���� "lock inc x" �� ������ 
			 // lock-free ��� ����

		x.fetch_add(1); // �̷��� �ص� ����

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