#pragma once
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

BOOL CALLBACK cEnumWindowsProc(HWND hWnd, LPARAM lParam) {
	cout << "\"" << hWnd << "\"," << endl;
	return TRUE;
}

int cEnumWindows(int argc, char* argv[]) {
	cout << "[" << endl;
	EnumWindows(cEnumWindowsProc, NULL);
	cout << "]" << endl;
	return 0;
}