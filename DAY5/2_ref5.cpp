#include <iostream>
#include <thread>
#include <functional>

void f1(int  n) { n = 100; }
void f2(int& n) { n = 100; }

int main()
{
	int v = 10;
	
	std::thread t1(f1, v); // f1�� ������� ������ �޶�, 
						   // ���ڷ� v �� ���� �޶�.
	t1.join();

//	std::thread t2(f2, v); // error.

	// �ᱹ v �� ���� f2�� ���޵Ǵ� ���� �ƴ϶�
	// v => thread ������ => f2�� ���޵ǰ� �Ǵµ�
	// thread �����ڰ� call by value �� �Ǿ� �ֽ��ϴ�.
	// call by value �� �� ���� "������ �������� std::ref()" �� ����ؾ��մϴ�
	std::thread t2(f2, std::ref(v)); // ok.
	t2.join();
}
