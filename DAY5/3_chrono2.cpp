#include <iostream>
#include <chrono>
using namespace std::chrono;

// duration ���� : Ư�� ������ ����(tick count)�� ǥ���ϴ� �ڷᱸ��
//				  10�� => 1���� 10��
//					   => 1/1000���� 10000��..

int main()
{
	// 1. duration ���
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); // 1/100 * 2
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);

	std::cout << d2.count() << std::endl; // 20

	// 2. ���� duration ���� ������ ��Ÿ���� Ÿ�� ����� �˴ϴ�.
	using namespace std::chrono;
	using Meter      = duration<int, std::ratio<1, 1>>;
	using CentiMeter = duration<int, std::ratio<1, 100>>;
//	using KiloMeter  = duration<int, std::ratio<1000, 1>>;
	using KiloMeter  = duration<int, std::kilo>;

	KiloMeter km(3);   // 3km
	CentiMeter cm(km);

	std::cout << cm.count() << std::endl;

	// 3. �ð��� ��Ÿ���� ���� - �̹� ǥ�ؿ� �Ʒ� ó�� �Ǿ� �ֽ��ϴ�.
//	using seconds = duration<int, std::ratio<1, 1>>;
//	using minutes = duration<int, std::ratio<60, 1>>;
//	using hours   = duration<int, std::ratio<3600, 1>>;
}





