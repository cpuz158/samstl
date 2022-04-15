#include <iostream>
#include <thread>
#include <mutex>

// ����ȭ �ڿ��� ����Ҷ��� ���� "lock/unlock" �� �����
// ���ܰ� �߻��ϴ� "deadlock" �� ���ɼ��� �ֽ��ϴ�.

// ������/�Ҹ��ڷ� lock�� �����ؾ� �մϴ�.
template<typename T>
struct lock_guard
{
	T& mtx;

	lock_guard(T& m) : mtx(m) { mtx.lock(); }
	~lock_guard()		      { mtx.unlock(); }
};



std::mutex m;	

int shared_data = 10;

void foo()
{
	lock_guard<std::mutex> g(m);
//	m.lock();

	shared_data = 200;

//	m.unlock();
}




int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

