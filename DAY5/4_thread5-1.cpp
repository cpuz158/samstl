#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

int foo()
{
	std::cout << "foo ����" << std::endl;
	std::this_thread::sleep_for(5s);

	return 100;
}

int main()
{
	// std::launch::async    : �񵿱�(���ο� ������)�� �Լ��� ������ �޶�
	// std::launch::deferred : ��������, ����� �ʿ��Ҷ� ������ �޶�.
	//							���ο� �����尡 �ƴ� �ֽ����尡 ȣ��
	// 
//	std::future<int> ft = std::async(std::launch::async, &foo);

	std::future<int> ft = std::async(std::launch::deferred, &foo);
	
	std::cout << "main ��� ����" << std::endl;

	std::this_thread::sleep_for(2s);

	int result = ft.get();  

	std::cout << "��� : " << result << std::endl;
}


