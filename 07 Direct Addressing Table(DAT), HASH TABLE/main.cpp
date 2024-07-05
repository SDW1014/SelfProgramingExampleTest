#include <iostream>

// 4차 방법
int hasFunction(char ch)
{
	return ch * 2 + 1 / 2 * 0.7;
}

// 6차 방법 

char vect[10] = "BTABCQABC";
char patten[4] = "ABC";

int isPatten(int idx)
{
	for (size_t i = 0; i < 3; i++)
	{
		if(patten[i] != vect[idx +i])
		{
			return 0;
		}
	}
	return 1;
}

int main() {
	// 패턴 찾기 (함수 이용)
	// DAT - hash table
	// 값 자체를 index로 활용한다.

	/*char ch = 'A';

	int bucket[256] = {};*/

	// 1차 방법
	//char target = 'A';
	//bucket[target] = 1; // 우리가 찾는 A는 한개 있다.

	// 2차 방법
	/*char str[7] = "ADBFAD";

	for (size_t i = 0; i < 6; i++)
	{
		bucket[str[i]]++;
	}*/

	// 3차 방법
	//int count = 0;

	//for (size_t i = 'A'; i < 'Z'; ++i)
	//{
	//	if
	//}

	/*for (int x = 0; x < 256; ++x)
	{
		if (bucket[x] != 0)
		{
			std::cout << (char)x << " : " << bucket[x] << std::endl;
		}
	}*/

	// 4차 방법
	//int idx = hasFunction('A');


	// 5차 방법 
	/*for (size_t i = 0; i < 256; i++)
	{
		if (bucket[i] != 0)
		{
			for (size_t j = 0; j < bucket[i]; j++)
			{
				std::cout << (char)i;
			}
		}
	}*/

	// 6차 방법 (패턴) 함수이용
	int result = 0;
	for (size_t i = 0; i < 7; i++)
	{
		result = isPatten(i);
		if (result == 1)
		{
			std::cout << "Find Patten" << std::endl;
		}
	}



	return 0;
}





















// 데이터 탐색 (0(n))
// [  |  |  |  |  ]... 이러한 형태의 배열에서 특정 값이 있는지 없는지 확인하는 방법
// 순차적으로 1번부터 n번까지 검색하는게 O(n)

// 이진 탐색 (O(log n))
// 루트 노드
// └── A
//     ├── B
//     │   ├── D
//     │   └── E
//     │       └── G
//     └── C
//         └── F
//             ├── H
//             └── I

// DAT (Direct Access Table) (O(1))
// 해시 테이블을 사용하여 데이터를 저장하고 검색하는 방법