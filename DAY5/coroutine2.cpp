#include <iostream>
#include <coroutine> // C++20 coroutine���


// C++ ���� �ڷ�ƾ�� ����ϱ� ���ؼ��� "C++ ǥ�ع����� �����ϴ� ������ ���Ѿ� �մϴ�."
// 1. ����� ���� Ÿ���� ��ȯ�ؾ� �Ѵ�.
// 2. ��ȯ Ÿ�Կ� ���Ǵ� ��ü�ȿ��� "promise_type" �̶�� ��� Ÿ���� �־�� �Ѵ�.

// github.com/codenuri/cpp20 

struct Task
{
	struct promise_type
	{
		// ��ӵ� 5���� �Լ��� �����ؾ� �Ѵ�.
		// 
	};
};

Task foo()
{
	//--------------------
	// �����Ϸ��� corotuine ���� �ڵ带 �����ϴµ�..
	// Task �ȿ� �ִ� promise_type �� ��ü�� �����ؼ�
	// Ư�� �̺�Ʈ ��Ȳ���� ��ӵ� �Լ��� ȣ���� �ٲ�!!
	//------------------------------------
	std::cout << "foo 1" << std::endl;
	co_await std::suspend_always{};	// ȣ���ڿ��� ���ư���� ��

	std::cout << "foo 2" << std::endl;
	co_await std::suspend_always{};	// ȣ���ڿ��� ���ư���� ��
}

int main()
{
	auto coro = foo();
	
	std::cout << "main 1" << std::endl;
	coro.resume();
	std::cout << "main 2" << std::endl;
	coro.resume();
}