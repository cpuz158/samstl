#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;
using namespace std::literals; // 3min, 3s ��

int main()
{
	// 1. predefined typedef
	hours		 h(1);		// using hours = duration<int, ratio<3600,1>>;
	minutes      m  = h;	// 
	seconds      s  = h;
	milliseconds ms = h;
	microseconds us = h;
	nanoseconds  ns = h;

	std::cout << h.count() << std::endl;
	std::cout << m.count() << std::endl;
	std::cout << s.count() << std::endl;
	std::cout << ms.count() << std::endl;
	std::cout << us.count() << std::endl;
	std::cout << ns.count() << std::endl;

	// ������ "3��"�� �ʿ��ϸ� �Ʒ� ó�� ���弼��
	std::chrono::seconds s1(3);



	// 2. literals( h, min, s, ms, us, ns )
	//	   C++11 ���� "user define literal" �̶�� ������ �ֽ��ϴ�.
	
	auto s2 = 10s; // seconds operator""s(10) �̶�� �Լ� �� ȣ��Ǵ� ������ �ֽ��ϴ�.



	seconds sec = 1min;

	sec = 1min + 3s;
	sec += 40s;
	std::cout << sec.count() << std::endl;

	seconds sec2 = 1min + 3s;
	std::cout << sec2.count() << std::endl;


	// ��� � �Լ��� 10�ʸ� ������ �ʹ�.
//	foo(std::chrono::seconds(10)); // seconds ��ü�� ���� �����ϰų�
//	foo(10s); // �̷��� �ϸ� �˴ϴ�.
}
// 3s, 3min ���� ����Ϸ���
//#include <chrono>				// �� ����� �����ϰ�
//using namespace std::literals;	// �� namespace �� ���� �ּ���