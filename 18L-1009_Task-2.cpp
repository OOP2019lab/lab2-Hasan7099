#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include "18L-1009-task-2.h"

using namespace std;

void read_data(github_user* users, string file_path )
{
	ifstream file;
	file.open("sample.txt");

	int size;
	file >> size;
	int count;
	for (int i = 0; i < size; i++)
	{
		file >> users[i].first_name;
		file >> users[i].user_name;
		file >> users[i].email;
		file >> count;
		count = users[i].folder_count;

		for (int j = 0; j < count; j++)
		{
			file >> users[j].folders;
		}

	}
}

int main()
{
	github_user * users_array;							//dynamic array
	users_array = new github_user[10];			//size is set to 10
	read_data(users_array, "sample.txt");
	_getch();
}
                