#pragma once
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

bool cShowWindow(int argc, char* argv[]) {
	if (argc != 4) return 0;
	const char* _hWnd = argv[2];
	int _nCmdShow = stof(argv[3]);
	HWND hWnd = (HWND)strtoul(_hWnd, NULL, 16);
	int nCmdShow = _nCmdShow;
	if (_hWnd == "0") {
		hWnd = NULL;
	}
	bool res = ShowWindow(hWnd, _nCmdShow);
	cout << res << endl;
	return res;
}