// title : 2. MyString 클래스 만들기
// explanation : MyString 클래스를 만들어서 문자열을 저장하고 문자열의 길이를 반환하는 size() 함수를 만들어보세요.
// author : SDW
// date : 2024-07-05

#include <iostream>
#include <string>

// MyString 클래스
class MyString
{
public:
	MyString(const char* str)
	{
		for (int i = 0; i < 256; ++i)
		{
			len = i;
			if (str[i] == '\0')
			{
				break;
			}
			this->str[i] = str[i];
		}
	};

	void operator=(const char* str)
	{
		for (int i = 0; i < 256; ++i)
		{
			if (str[i] == '\0')
			{
				break;
			}
			this->str[i] = str[i];
		}
	};

	int size()
	{
		return len;
	};
private:
	char str[256];
	int len;
};

// Test Code
int main()
{
	std::string str = "Hello";

	int ilen = str.size();

	MyString str2("World!");

	std::cout << str2.size() << std::endl;


	return 0;
}