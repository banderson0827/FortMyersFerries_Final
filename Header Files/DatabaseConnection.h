#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include <sqlite3.h>
#include <stdio.h>




class DatabaseConnection {

public:

	DatabaseConnection();
	static int createDB(const char* s);
	static int createTable(const char* s);
	static int deleteData(const char* s);
	static int insertData(const char* s);
	static int updateData(const char* s);
	static int selectData(const char* s);
	static int callback(void* NotUsed, int argc, char** argv, char** azColName);
};