#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>
#include <iomanip>

//				���						�Է�
// ǥ�ؽ�Ʈ��		std::ostream cout		std::istream cin
// ���Ͻ�Ʈ��		std::ofstream			std::ifstream
// �޸�(���ڿ�)	std::ostringstream		std::istringstream

int main()
{
	std::istringstream iss("to be or not to be");

	std::string s;
//	std::cin >> s; // ǥ�� �Է�(�����)�� ���� �� �ܾ� �б�

	while(iss >> s)
		std::cout << s << std::endl;
}
