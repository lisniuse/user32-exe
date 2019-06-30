#pragma once
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

HWND cFindWindow(int argc, char* argv[]) {
	if (argc != 4) return 0;
	string _lpClassName = argv[2];
	string _lpWindowName = argv[3];
	LPCTSTR lpClassName = (LPCTSTR)_lpClassName.c_str();
	LPCTSTR lpWindowName = (LPCTSTR)_lpWindowName.c_str();
	if (_lpClassName == "0") {
		lpClassName = NULL;
	}
	if (_lpWindowName == "0") {
		lpWindowName = NULL;
	}
	HWND hWnd = FindWindow(lpClassName, lpWindowName);
	if (hWnd) {
		cout << hWnd << endl;
	}
	return hWnd;
}