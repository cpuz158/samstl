#include <iostream>
#include <thread> 

void f1() {}

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

int main()
{
	// �ٽ� 1. �����带 �����ϴ� ���
//	std::thread t1( &f1 ); // �̼��� �����尡 �����Ǿ f1 �Լ� ����˴ϴ�.
						   // ������ start() ���� �Լ��� �ʿ� �����ϴ�.

	// �ٽ� 2. ��� ������ �Լ��� ������� �����Ҽ� �ֽ��ϴ�.
	//        ������ ���¿� ���� �����ϴ�.
	//        �Լ�, ��� �Լ�, �Լ���ü, ����ǥ���� ��� ����
//	std::thread t2(&foo, 3, 3.4 ); 
//	std::thread t3( []() { std::cout << "lambda" << std::endl; } );

	Test test;
	std::thread t4(&Test::goo, &test, 3, 3.4);

	t4.join();
}

// �Լ��̸��� ���ؼ�
// �Ϲ��Լ� : �Լ��̸��� �Լ� �ּҷ� ��ȯ �����մϴ�. ��, foo �� ��� &foo �ǹ�
// ����Լ� : �Լ��̸��� �Լ� �ּҷ� ��ȯ �ȵ˴ϴ�.
//			��� �Լ��� �ּҰ� �ʿ� �Ҷ��� �� &Test::goo�ؾ� �մϴ�.

// ��, std::thread ���ô� "�Լ� �̸�"�� �ص� �ǰ� "�Լ� �ּ�"�� �ص� �˴ϴ�.


