#include <iostream>
using namespace std;
int main()
{
	char code[5]{'u','o','d','m','f'};
	char word_1[5]{ 's','t','o','r','m' };
	char word_2[5]{ 's','t','o','n','e' };
	char word_3[5]{ 'w','a','t','e','r' };
	char word_4[5]{ 'm','a','g','i','c' };
	char word_5[5]{ 's','n','a','k','e' };
	char word[5];
	char code_1[5];
	char sim;

	cout << "cipher:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << code[i];
	}
	cout << "\n"<<"\n";
	
	cout << "Enter word:" << endl;
	cin >> word[0] >> word[1] >> word[2] >> word[3] >> word[4];
	if (word[0] == word_1[0] && word[1] == word_1[1] && word[2] == word_1[2] && word[3] == word_1[3] && word[4] == word_1[4])
	{
		for (int i = 0; i < 5; i++)
		{
			sim = word[i];
			while (sim != 123)
			{
				sim = sim + 1;
				if (sim == code[i])
				{
					break;
				}
			}
			code_1[i] = sim;
		}
		cout << endl;
		
	}
	else if (word[0] == word_2[0] && word[1] == word_2[1] && word[2] == word_2[2] && word[3] == word_2[3] && word[4] == word_2[4])
	{
		for (int i = 0; i < 5; i++)
		{
			sim = word[i];
			while (sim != 123)
			{
				sim = sim + 1;
				if (sim == code[i])
				{
					break;
				}
			}
			code_1[i] = sim;
		}
		cout << endl;
	}
	else if (word[0] == word_3[0] && word[1] == word_3[1] && word[2] == word_3[2] && word[3] == word_3[3] && word[4] == word_3[4])
	{
		for (int i = 0; i < 5; i++)
		{
			sim = word[i];
			while (sim != 123)
			{
				sim = sim + 1;
				if (sim == code[i])
				{
					break;
				}
			}
			code_1[i] = sim;
		}
		cout << endl;
	}
	else if (word[0] == word_4[0] && word[1] == word_4[1] && word[2] == word_4[2] && word[3] == word_4[3] && word[4] == word_4[4])
	{
		for (int i = 0; i < 5; i++)
		{
			sim = word[i];
			while (sim != 123)
			{
				sim = sim + 1;
				if (sim == code[i])
				{
					break;
				}
			}
			code_1[i] = sim;
		}
		cout << endl;
	}
	else if (word[0] == word_5[0] && word[1] == word_5[1] && word[2] == word_5[2] && word[3] == word_5[3] && word[4] == word_5[4])
	{
		for (int i = 0; i < 5; i++)
		{
			sim = word[i];
			while (sim != 123)
			{
				sim = sim + 1;
				if (sim == code[i])
				{
					break;
				}
			}
			code_1[i] = sim;
		}
		cout << endl;
	}
	if (code_1[0] == code[0] && code_1[1] == code[1] && code_1[2] == code[2] && code_1[3] == code[3] && code_1[4] == code[4])
	{
		cout << "That is the right word" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << word[i];
		}
		cout << endl;
	}
	else
	{
		cout << "That is the wrong word" << endl;
		
	}
	system("pause");
	return 0;
}