#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	// pair �� �����ϴ� hash(unordered_set)
	std::unordered_map<std::string, std::string> m;

	// map �� ������ ���� �����մϴ�
	m["sun"] = "�Ͽ���";

	auto ret = m.find("sun");

	std::cout << ret->first << std::endl;
	std::cout << ret->second << std::endl;

}


