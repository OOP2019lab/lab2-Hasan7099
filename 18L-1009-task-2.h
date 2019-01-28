#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// struct declaration
struct github_user
{
	string first_name;
	string user_name;
	string email;
	string password;
	int folder_count;
	string * folders = new string[folder_count];				// dynamic. changes accordingly with foldercount.
};
