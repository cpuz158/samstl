// 3���� �����̳� ����Ͱ� �ֽ��ϴ�.
#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

template<typename T> class debug_alloc
{
public:
	T* allocate(std::size_t sz)
	{
		T* ptr = static_cast<T*>(malloc(sizeof(T) * sz));

		printf("%d allocated at %p\n", sz, ptr);
		return ptr;
	}
	void deallocate(T* ptr, std::size_t sz)
	{
		free(ptr);
		printf("%d deallocated at %p\n", sz, ptr);
	}

	// �� 2�������� �Ʒ� 3���� �־�� �մϴ�.
	using value_type = T;
	debug_alloc() {}
	template<typename U> debug_alloc(const U&) {} // ���ø� �����ڶ�� �Լ�
};

int main()
{
	std::stack<int> s1;
	s1.push(10);

	// ���� �����̳ʸ� �����ϴ� ���
	std::stack<int, std::vector<int> > s2;

	// ���� : stack s3�� ���弼��
	// 1. ���� �����̳� vector�� �ϼ���
	// 2. ��������2-1�� �ִ� "debug_alloc" �� ����� ������.
	
	std::stack< ? > s3;

	s3.push(10);
	s3.push(20);

}