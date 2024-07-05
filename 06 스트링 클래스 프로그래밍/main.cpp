// title : 2. MyString Ŭ���� �����
// explanation : MyString Ŭ������ ���� ���ڿ��� �����ϰ� ���ڿ��� ���̸� ��ȯ�ϴ� size() �Լ��� ��������.
// author : SDW
// date : 2024-07-05

#include <iostream>
#include <string>

// MyString Ŭ����
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