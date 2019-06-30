#pragma once
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int cMessageBox(int argc, char* argv[]) {
	if (argc != 6) return 0;
	const char* _hWnd = argv[2];
	string _lpText = argv[3];
	string _lpCaption = argv[4];
	string _uType = argv[5];
	LPCTSTR lpText = _lpText.c_str();
	LPCTSTR lpCaption = _lpCaption.c_str();
	HWND hWnd = (HWND)strtoul(_hWnd, NULL, 16);
	UINT uType = (UINT)stoi(_uType.c_str());
	if (_hWnd == "0") {
		hWnd = NULL;
	}
	if (_uType == "0") {
		uType = 0;
	}
	int id = MessageBox(hWnd, lpText, lpCaption, uType);
	return id;
}