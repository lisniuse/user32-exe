#pragma once
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int cGetWindowText(int argc, char* argv[]) {
	if (argc != 4) return 0;
	const char* _hWnd = argv[2];
	int _nMaxCount = stoi(argv[3]);
	int nMaxCount = _nMaxCount;
	CHAR windowText[MAXBYTE];
	HWND hWnd = (HWND)strtoul(_hWnd, NULL, 16);
	if (_hWnd == "0") {
		hWnd = NULL;
	}
	GetWindowText(hWnd, windowText, nMaxCount);
	cout << windowText << endl;
	return 0;
}