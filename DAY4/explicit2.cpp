#include <string>
#include <vector>

void f1(std::string s)      {}
void f2(std::vector<int> v) {}

int main()
{
	std::string      s1("A"); // ok
	std::vector<int> v1(10);  // ok

	// �Ʒ� 2���� �� ������ ������.. �Ǵ°� ������� ? �ȵǴ°� ������� ?
	f1("A"); // ?
	f2(10);  // ?

}