#include <thread>
#include <mutex>

class Machine
{
	int data1;
	int data2;
//	std::mutex m;
	std::recursive_mutex m;
public:
	void f1()
	{
		m.lock();
		data1 = 0;
		m.unlock();
	}
	void f2()
	{
		m.lock();
		data2 = 0;
		f1();			// �ᱹ ���Ͻ����尡 �ϳ��� mutex �� lock �� 2�� �߻��ϰ� �˴ϴ�.
						// �̰�쿡�� recursive_mutex �� ����ؾ� �մϴ�.
		m.unlock();
	}
};

// C++11 : mutex, condition_variable ����
//		   thread local storage, call_once ����
// 
// C++20 : semaphore, latch, barrier �߰���.


