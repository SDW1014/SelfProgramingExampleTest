#include <iostream>

// 4�� ���
int hasFunction(char ch)
{
	return ch * 2 + 1 / 2 * 0.7;
}

// 6�� ��� 

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
	// ���� ã�� (�Լ� �̿�)
	// DAT - hash table
	// �� ��ü�� index�� Ȱ���Ѵ�.

	/*char ch = 'A';

	int bucket[256] = {};*/

	// 1�� ���
	//char target = 'A';
	//bucket[target] = 1; // �츮�� ã�� A�� �Ѱ� �ִ�.

	// 2�� ���
	/*char str[7] = "ADBFAD";

	for (size_t i = 0; i < 6; i++)
	{
		bucket[str[i]]++;
	}*/

	// 3�� ���
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

	// 4�� ���
	//int idx = hasFunction('A');


	// 5�� ��� 
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

	// 6�� ��� (����) �Լ��̿�
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





















// ������ Ž�� (0(n))
// [  |  |  |  |  ]... �̷��� ������ �迭���� Ư�� ���� �ִ��� ������ Ȯ���ϴ� ���
// ���������� 1������ n������ �˻��ϴ°� O(n)

// ���� Ž�� (O(log n))
// ��Ʈ ���
// ������ A
//     ������ B
//     ��   ������ D
//     ��   ������ E
//     ��       ������ G
//     ������ C
//         ������ F
//             ������ H
//             ������ I

// DAT (Direct Access Table) (O(1))
// �ؽ� ���̺��� ����Ͽ� �����͸� �����ϰ� �˻��ϴ� ���