#include <iostream>
#include <thread> 

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

int main()
{
	std::thread t1(&foo, 3, 3.4);

	// �����带 �������Ŀ��� �ݵ�� �Ʒ� �۾��� �Ѱ��� �ؾ� �մϴ�.
//	t1.join();   // ������ ���Ḧ ���
	t1.detach(); // ������ ���Ḧ ������� �ʰ�, ���̻� �ڵ鵵 �ʿ� ����.

	// .....
}



