
#include <iostream>
#include <string>

template<typename T,   
	typename Traits = std::char_traits<T>, 
	typename Alloc = std::allocator<T> >   
class basic_string
{
	T* buff;
	Alloc ax;// ax.allocate
public:
	bool operator==(const basic_string& other)
	{
		// ���ڿ��� ��� ���絵 ���� �������� ��ü �Ҽ� �ְ� ��������ϴ�.
		// �׷���, �Ʒ� �ڵ带 �ߺ��� compare �� static ����Լ��� 
		// ������ �մϴ�.
		return Traits::compare(buff, other.buff);
	}
};

int main()
{
	std::string s1 = "abcd";
	std::string s2 = "ABCD";

	bool b = (s1 == s2);

	std::cout << b << std::endl;
	

}