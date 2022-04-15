#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// �����忡�� ����� ���� ���� �ʹ�.
// promise & future

// 1�ܰ�. ������ �Լ��� ���鶧 "promise" ��ü�� ������ �޽��ϴ�.
void foo( std::promise<int>& p )
{
	std::this_thread::sleep_for(5s);
	
	// 2�ܰ�. ���� �����Ŀ�.. ����� ��Ӱ�ü�� �־� �ݴϴ�
	p.set_value(100);
}

int main()
{
	// ������ ���� �ڵ�
	// 1�ܰ�. promise ��ü�� ����ϴ�. 
	std::promise<int> p;

	// 2�ܰ�. promise ��ü���� future ��ü�� �����ϴ�.
	std::future<int> ft = p.get_future();

	// 3. ������ ������ promise ��ü�� "������ ����" �մϴ�.
	std::thread t(&foo, std::ref(p) );

	std::cout << "main ��� ����" << std::endl;

	// 4. ������ ����� ��� ������ future�� get ���
	// => �̶� ����� �������� �ְ�, 
	// => ���� �������� �ֽ��ϴ�. ������ ����ϱ� �˴ϴ�.
	int result = ft.get();

	std::cout << "��� : " << result << std::endl;
						
	t.join();
}


