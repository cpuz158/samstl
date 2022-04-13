
#include <iostream>
#include <string>
/*
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
*/
//--------------------------------------
// cppreference.com �� char_trais �˻��ϸ� �Ʒ� �ڵ� �ֽ��ϴ�.

/*
struct MyTraits :  public std::char_traits<char>
{
	static bool compare() {}
};
*/
struct MyTraits : public std::char_traits<char> {
    static char to_upper(char ch) {
        return std::toupper((unsigned char)ch);
    }
    static bool eq(char c1, char c2) {
        return to_upper(c1) == to_upper(c2);
    }
    static bool lt(char c1, char c2) {
        return to_upper(c1) < to_upper(c2);
    }
    static int compare(const char* s1, const char* s2, std::size_t n) {
        while (n-- != 0) {
            if (to_upper(*s1) < to_upper(*s2)) return -1;
            if (to_upper(*s1) > to_upper(*s2)) return 1;
            ++s1; ++s2;
        }
        return 0;
    }
    static const char* find(const char* s, std::size_t n, char a) {
        auto const ua(to_upper(a));
        while (n-- != 0)
        {
            if (to_upper(*s) == ua)
                return s;
            s++;
        }
        return nullptr;
    }
};


using mystring = std::basic_string<char, MyTraits>;

int main()
{
	mystring s1 = "abcd";
	mystring s2 = "ABCD";

	bool b = (s1 == s2);

	std::cout << b << std::endl;


}