#include <iostream>

using namespace std;

int main()
{
	// Korean[0]  Korean[1] Korean[2] Korean[3] Korean[4]
	// [][][][]   [][][][]  [][][][]  [][][][]  [][][][]

	// Variables
	// int Age = 0;

	// Array
	// int Goblins[4] = { 1, 2, 3, 4 };
	// float MP[10] = { 0, }; // ��� 0���� ä���ּ���.
	// char Diamonds[10] = { 0 };

	/*int Korean1 = 70;
	int Korean2 = 70;
	int Korean3 = 70;
	int Korean4 = 70;
	int Korean5 = 70;
	int Korean6 = 70;
	int Korean7 = 70;
	int Korean8 = 70;
	int Korean9 = 70;
	int Korean10 = 70;*/

	//float Range = 9.5f;
	//float AttackRange = 1.5f;

	//bool Seeing = Range < 10.0f; // true
	//bool Attack = AttackRange < 1; // false

	//if (Attack)
	//{

	//}
	//else
	//{

	//}

	// int Goblins[5] = { 0, };

	// for (int i = 0; i < 5; i++) // for (;;)�� ������ ������ ������ ������ ���ѷ����� �ȴ�. ���� ������ �ϳ� ������ ���ѷ����� �ǹǷ� ����!
	// {
		// Goblins[i] = 1;
	// }

	// ++ -> i = i + 1
	// -- -> i = i - 1


	/*int Data[10];
	int Data2[10];

	for (int i = 0; i < 10; ++i)
	{
		Data[i] = i;
	}

	for (int j = 0; j < 10; j++)
	{
		Data2[j] = j;
	}*/

	// ���� �ݺ��� (2��, 3�� ����)
	/*for (int j = 1; j <= 5; j++)
	{
		for (int i = 1; i <= 5; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}*/
	// UnrealEngine ���� ����(���� ����)
	/*for (;;)
	{
		Input();
		Process();
		Render();

	}*/

	// ���� �迭(2��, 3�� �� ����. ������ 2�߱����� �� ��.)
	// int Map[10] = { 1,1,1,1,1,1,1,1,1,1 }
	/*int Map[10][10] =
	{
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{

			}
		}
	}
	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			cout << Map[y][x];
		}
		cout << endl;
	}*/


	 // *
	 // **
	 // ***
	 // ****
	 // *****

	// int MaxCount = 0;
	// cin >> MaxCount;
	// // ���ӿ����� �Է��� �ް� �Ǹ� ���� ó���� �Ѵ�.
	//for (int i = 0; i < MaxCount; ++i)
	//{
	//	for (int j = 0; j <= i; ++j)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	//// ***** 
	//// ****
	//// ***
	//// **
	//// *
	//for (int i = 0; i < MaxCount; ++i)
	//{
	//	for (int j = 0; j < MaxCount - i; ++j)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	//// *****
	////  ****
	////   ***
	////    **
	////     *

	//for (int i = 0; i < MaxCount; ++i)
	//{
	//	for (int k = 0; k < i; k++)
	//	{
	//		cout << " ";
	//	}
	//	
	//	for (int j = 0; j < MaxCount - i; ++j)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}


	////     *
	////    **
	////   ***
	////  ****
	//// *****
	//for (int i = 0; i < MaxCount; ++i)
	//{
	//	for (int j = 0; j < MaxCount - i; ++j)
	//	{
	//		cout << " ";
	//	}
	//	

	//	for (int k = 0; k < i; k++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	
	// �ʱ�ȭ
	float Color = 0;
	int Apple = 0;
	int Goblin = 0;
	char Alphabet = 'A';
	bool Condition = true;
	bool bIsFinish = false;
	bool IsRunning = true;

	char Key = 0;
	for (; IsRunning;) // while (IsRunning) �� ���� ����� �Ѵ�.
	{
		// Input
		cin >> Key;

		// Process
		if (Key == 'Q') // �빮�� Q�� ������ ���α׷� ����
		{
			IsRunning = false;
		}

		// Render
		cout << "��������" << endl;
	}

	return 0;
}