#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include "./Lib/MessageBox.h"
#include "./Lib/FindWindow.h"
#include "./Lib/SendMessage.h"
#include "./Lib/ShowWindow.h"
#include "./Lib/EnumWindows.h"
#include "./Lib/GetWindowText.h"

using namespace std;

// 不显示控制台
// #pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")

int main(int argc, char* argv[]) {
  if (argc < 2) return 0;
  // 隐藏自己
  HWND meHwnd = GetConsoleWindow();
  ShowWindow(meHwnd, SW_HIDE);
  string apiName = argv[1];
  if (apiName == "MessageBox") {
    cMessageBox(argc, argv);
  }
  else if (apiName == "FindWindow") {
    cFindWindow(argc, argv);
  }
  else if (apiName == "SendMessage") {
    cSendMessage(argc, argv);
  }
  else if (apiName == "ShowWindow") {
    cShowWindow(argc, argv);
  }
  else if (apiName == "EnumWindows") {
    cEnumWindows(argc, argv);
  }
  else if (apiName == "GetWindowText") {
    cGetWindowText(argc, argv);
  }
  return 0;
}