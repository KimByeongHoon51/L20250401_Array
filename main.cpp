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
	// float MP[10] = { 0, }; // 모두 0으로 채워주세요.
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

	// for (int i = 0; i < 5; i++) // for (;;)도 실행은 되지만 조건이 없으면 무한루프가 된다. 또한 조건이 하나 빠지면 무한루프가 되므로 주의!
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

	// 다중 반복문 (2중, 3중 가능)
	/*for (int j = 1; j <= 5; j++)
	{
		for (int i = 1; i <= 5; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}*/
	// UnrealEngine 게임 루프(게임 구조)
	/*for (;;)
	{
		Input();
		Process();
		Render();

	}*/

	// 다중 배열(2중, 3중 더 가능. 하지만 2중까지만 쓸 것.)
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
	// // 게임에서는 입력을 받게 되면 예외 처리를 한다.
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
	
	// 초기화
	float Color = 0;
	int Apple = 0;
	int Goblin = 0;
	char Alphabet = 'A';
	bool Condition = true;
	bool bIsFinish = false;
	bool IsRunning = true;

	char Key = 0;
	for (; IsRunning;) // while (IsRunning) 도 같은 기능을 한다.
	{
		// Input
		cin >> Key;

		// Process
		if (Key == 'Q') // 대문자 Q를 누르면 프로그램 종료
		{
			IsRunning = false;
		}

		// Render
		cout << "사진찍자" << endl;
	}

	return 0;
}