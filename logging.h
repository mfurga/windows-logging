//
// MIT License Copyright (c) 2019 Mateusz Furga <matfurga@gmail.com>
//

#pragma once

#include <stdio.h>
#include <windows.h>

void PrintSuccess(const char *text, ...)
{
  va_list arg;
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(hConsole, 10);
  vfprintf(stdout, "[+] ", NULL);
  SetConsoleTextAttribute(hConsole, 7);

  va_start(arg, text);
  vfprintf(stdout, text, arg);
  va_end(arg);
}

void PrintInfo(const char *text, ...)
{
  va_list arg;
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(hConsole, 9);
  vfprintf(stdout, "[*] ", NULL);
  SetConsoleTextAttribute(hConsole, 7);

  va_start(arg, text);
  vfprintf(stdout, text, arg);
  va_end(arg);
}

void PrintWarning(const char *text, ...)
{
  va_list arg;
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(hConsole, 14);
  vfprintf(stdout, "[!] ", NULL);
  SetConsoleTextAttribute(hConsole, 7);

  va_start(arg, text);
  vfprintf(stdout, text, arg);
  va_end(arg); 
}

void PrintError(const char *text, ...)
{
  va_list arg;
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(hConsole, 12);
  vfprintf(stderr, "[-] ", NULL);
  SetConsoleTextAttribute(hConsole, 7);

  va_start(arg, text);
  vfprintf(stderr, text, arg);
  va_end(arg); 
}
