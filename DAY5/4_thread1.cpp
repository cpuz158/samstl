#include <iostream>

// C++11 ���� ������ ���� Ŭ���� ����.
#include <thread> 
#include <chrono>
using namespace std::literals;

// this_thread namespace 
// => 4���� ������ �Լ� ����
int main()
{
	std::cout << std::this_thread::get_id() << std::endl;

	// �����带 ������ ���ڷ� "chrono" ���̺귯�� �� �ð��� ���޵Ǿ�� �մϴ�
	std::this_thread::sleep_for(3s);
	std::this_thread::sleep_for(std::chrono::seconds(3) );

//	std::this_thread::sleep_until(�̶�����); // xtime ����ü ���·� ����.

//	std::this_thread::yield(); // ���� �������� ���� ����ð� �����ϰ�
								// �ٸ� ������ ����

}


