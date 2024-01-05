#include "pch.h"
#include "调用.h"

整数型 取文本长度(文本型 内容)
{
	return 内容.size();
}

文本型 取文本左边(文本型 内容, 整数型 长度)
{
	return 内容.substr(0, 长度);
}

文本型 取文本中间(文本型 内容, 整数型 开始位置, 整数型 长度)
{
	return 内容.substr(开始位置, 长度);
}

文本型 取文本右边(文本型 内容, 整数型 长度)
{
	return 内容.substr(内容.size() - 长度, 长度);
}

整数型 寻找文本(文本型 内容, 文本型 要寻找的内容)
{
	return 内容.find(要寻找的内容);
}

整数型 倒找文本(文本型 内容, 文本型 要寻找的内容)
{
	return 内容.rfind(要寻找的内容);
}

整数型 信息框(文本型 内容, 整数型 按钮, 文本型 窗口标题, 整数型 父窗口)
{
	return MessageBoxA((HWND)父窗口, 窗口标题.c_str(), 内容.c_str(), 按钮);
}

文本型 长整数到文本(长整数型 n)//int to string
{
	return std::to_string(n);
}

长整数型 文本到长整数(文本型 x)
{
	return std::stoll(x);
}

文本型 小数到文本(小数型 n)
{
	char temp_char[4];
	sprintf(temp_char, "%f", n);
	return std::string(temp_char);
}

小数型 文本到小数(文本型 n)
{
	return std::stof(n);
}

文本型 双精度小数到文本(双精度小数型 n)
{
	char temp_char[8];
	sprintf(temp_char, "%lf", n);
	return std::string(temp_char);
}

双精度小数型 文本到双精度小数(文本型 n)
{
	return std::stold(n);
}

文本型 读配置项(文本型 文件名, 文本型 节名称, 文本型 键名称)
{
	char bytes[4096];
	GetPrivateProfileStringA(节名称.c_str(), 键名称.c_str(), NULL, bytes, 4096, 文件名.c_str());
	return std::string(bytes);
}

逻辑型 写配置项(文本型 文件名, 文本型 节名称, 文本型 键名称,文本型 写入内容)
{
	return WritePrivateProfileStringA(节名称.c_str(), 键名称.c_str(), 写入内容.c_str(), 文件名.c_str());
}

std::string ws2s(const std::wstring& ws)
{
	std::string curLocale = setlocale(LC_ALL, NULL);        // curLocale = "C";
	setlocale(LC_ALL, "chs");
	const wchar_t* _Source = ws.c_str();
	size_t _Dsize = 2 * ws.size() + 1;
	char* _Dest = new char[_Dsize];
	memset(_Dest, 0, _Dsize);
	wcstombs(_Dest, _Source, _Dsize);
	std::string result = _Dest;
	delete[]_Dest;
	setlocale(LC_ALL, curLocale.c_str());
	return result;
}

文本型 取运行目录()
{
	MODULEENTRY32W t32{  };
	t32.dwSize = sizeof MODULEENTRY32W;
	auto pThread = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, GetCurrentProcessId());
	Module32First(pThread, &t32);
	CloseHandle(pThread);
	auto str = ws2s(std::wstring(t32.szExePath));
	auto len = str.rfind("\\");
	return str.substr(0, len);
}

文本型 取运行名称()
{
	MODULEENTRY32W t32{  };
	t32.dwSize = sizeof MODULEENTRY32W;
	auto pThread = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, GetCurrentProcessId());
	Module32First(pThread, &t32);
	CloseHandle(pThread);
	auto str = ws2s(std::wstring(t32.szModule));
	return str;
}

无返回值 延迟(整数型 n)
{
	
	Sleep(n);
}

//数组

//插入 

//加入

//清楚