#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// ������� ������ �Լ���
// �Ϲ� �Լ��� �����ϰ� ��ȯ ������ ��ȯ �մϴ�.
int foo()
{
	std::this_thread::sleep_for(5s);

	return 100;
}

int main()
{
//	int ret = foo(); // ������ ������ �ƴ�. �ֽ����尡 �Լ� ȣ��

	// foo �Լ��� ������� �����ϰ�, ����� future ��ü�� ��ȯ�� �޶�.
	std::future<int> ft = std::async(std::launch::async, &foo);

	std::cout << "main ��� ����" << std::endl;

	int result = ft.get();  // ������ �Լ�(foo)�� ���� return ���� ���� ����
							// ���

	std::cout << "��� : " << result << std::endl;
}


