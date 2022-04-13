#include <vector>
#include <iostream>

// C++ ���� struct �� class �� ��, �Ѱ��� �������� �ֽ��ϴ�
// struct : ���������� ������ public
// class  : ���������� ������ private

// POD ��� ���� => "trivial" , "standard layout" �̶�� ���� ����˴ϴ�
// std::is_pod<> �� ��������ϴ�.
/*
class Point
{
public:
	int x, y;
};
*/

// STL �����̳ʿ� ������ �޸� �Ҵ� ��å�� ���� �Ҵ�� �����

// �޸� �Ҵ�, ���� ��å�� ���� allocate/deallocate �Լ��� �����ϸ� �˴ϴ�.
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
//	std::vector<int> v(5); // �޸� �Ҵ��� �ʿ��Ҷ� ���� 
						   // std::allocator �� ����ؼ� �Ҵ�

	std::vector<int, debug_alloc<int> > v(5);

	v.resize(10);
}


