// 1_map1-1
#include <string>
#include <map>
#include <iostream>

int main()
{
	std::map<std::string, std::string> m;

	m.emplace("mon", "������");
	m.emplace("sun", "�Ͽ���");

	// map �� range-for
	for (const auto& e : m)
	{
		std::cout << e.first << std::endl;
	}

	// C++17 ���� ������ ����
	std::pair<int, int> p(1, 2);

	auto [a, b] = p; // auto a = p.first
					 // auto b = p.second;

	for (auto [key, value] : m)
	{
		std::cout << key   << std::endl;
		std::cout << value << std::endl;
	}
}