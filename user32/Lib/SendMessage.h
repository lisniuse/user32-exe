#pragma once
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int cSendMessage(int argc, char* argv[]) {
	if (argc != 6) return 0;
	const char* _hWnd = argv[2];
	string _Msg = argv[3];
	string _wParam = argv[4];
	string _lParam = argv[5];
	HWND hWnd = (HWND)strtoul(_hWnd, NULL, 16);
	UINT Msg = (UINT)stof(_Msg.c_str());
	WPARAM wParam = (WPARAM)_wParam.c_str();
	LPARAM lParam = (WPARAM)_lParam.c_str();
	if (_hWnd == "0") {
		hWnd = NULL;
	}
	if (_Msg == "0") {
		Msg = 0;
	}
	if (_wParam == "0") {
		wParam = 0;
	}
	if (_lParam == "0") {
		lParam = 0;
	}
	HWND meHwnd = GetConsoleWindow();
	SendMessage(hWnd, Msg, wParam, lParam);
	return 0;
}