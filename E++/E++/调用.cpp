#include "pch.h"
#include "����.h"

������ ȡ�ı�����(�ı��� ����)
{
	return ����.size();
}

�ı��� ȡ�ı����(�ı��� ����, ������ ����)
{
	return ����.substr(0, ����);
}

�ı��� ȡ�ı��м�(�ı��� ����, ������ ��ʼλ��, ������ ����)
{
	return ����.substr(��ʼλ��, ����);
}

�ı��� ȡ�ı��ұ�(�ı��� ����, ������ ����)
{
	return ����.substr(����.size() - ����, ����);
}

������ Ѱ���ı�(�ı��� ����, �ı��� ҪѰ�ҵ�����)
{
	return ����.find(ҪѰ�ҵ�����);
}

������ �����ı�(�ı��� ����, �ı��� ҪѰ�ҵ�����)
{
	return ����.rfind(ҪѰ�ҵ�����);
}

������ ��Ϣ��(�ı��� ����, ������ ��ť, �ı��� ���ڱ���, ������ ������)
{
	return MessageBoxA((HWND)������, ���ڱ���.c_str(), ����.c_str(), ��ť);
}

�ı��� ���������ı�(�������� n)//int to string
{
	return std::to_string(n);
}

�������� �ı���������(�ı��� x)
{
	return std::stoll(x);
}

�ı��� С�����ı�(С���� n)
{
	char temp_char[4];
	sprintf(temp_char, "%f", n);
	return std::string(temp_char);
}

С���� �ı���С��(�ı��� n)
{
	return std::stof(n);
}

�ı��� ˫����С�����ı�(˫����С���� n)
{
	char temp_char[8];
	sprintf(temp_char, "%lf", n);
	return std::string(temp_char);
}

˫����С���� �ı���˫����С��(�ı��� n)
{
	return std::stold(n);
}

�ı��� ��������(�ı��� �ļ���, �ı��� ������, �ı��� ������)
{
	char bytes[4096];
	GetPrivateProfileStringA(������.c_str(), ������.c_str(), NULL, bytes, 4096, �ļ���.c_str());
	return std::string(bytes);
}

�߼��� д������(�ı��� �ļ���, �ı��� ������, �ı��� ������,�ı��� д������)
{
	return WritePrivateProfileStringA(������.c_str(), ������.c_str(), д������.c_str(), �ļ���.c_str());
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

�ı��� ȡ����Ŀ¼()
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

�ı��� ȡ��������()
{
	MODULEENTRY32W t32{  };
	t32.dwSize = sizeof MODULEENTRY32W;
	auto pThread = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, GetCurrentProcessId());
	Module32First(pThread, &t32);
	CloseHandle(pThread);
	auto str = ws2s(std::wstring(t32.szModule));
	return str;
}

�޷���ֵ �ӳ�(������ n)
{
	
	Sleep(n);
}

//����

//���� 

//����

//���