#pragma once
#include <windows.h>
#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
#include "tlhelp32.h"

#define �������� __int64
#define ������ int
#define �ı��� std::string
#define �޷���ֵ void
#define ����� if
#define ���� else
#define �߼��� bool
#define �� 1
#define �� 0
#define С���� float
#define ˫����С���� double
#define ����ѭ�� break
#define ��ѭ��β continue

//�÷���  �ƴ�ѭ��(������ i = 0; i< ��Ҫѭ��������; i++)
//��˼�� i��0��ʼ  ѭ��һ��+1 ����Ҫѭ���Ĵ�����Ͳ���ѭ��
//ע�� �м��Ǹ��ֺ�
#define �ƴ�ѭ�� for
#define �ж�ѭ�� while
#define ͨ���� void*

#ifdef _DEBUG
#pragma comment(lib, "E++_Dbg.lib")
#else
#pragma comment(lib, "E++_Res.lib")
#endif // DEBUG



������ ȡ�ı�����(�ı��� ����);

�ı��� ȡ�ı����(�ı��� ����, ������ ����);

�ı��� ȡ�ı��м�(�ı��� ����, ������ ��ʼλ��, ������ ����);

�ı��� ȡ�ı��ұ�(�ı��� ����, ������ ����);

������ Ѱ���ı�(�ı��� ����, �ı��� ҪѰ�ҵ�����);

������ �����ı�(�ı��� ����, �ı��� ҪѰ�ҵ�����);

������ ��Ϣ��(�ı��� ����, ������ ��ť = MB_OK, �ı��� ���ڱ��� = "", ������ ������ = 0);

�ı��� ���������ı�(�������� n);

�������� �ı���������(�ı��� x);

�ı��� С�����ı�(С���� n);

С���� �ı���С��(�ı��� n);

�ı��� ˫����С�����ı�(˫����С���� n);

//·����д�� Ӧ���� C:\\Windows\\System\\test.ini
�ı��� ��������(�ı��� �ļ���, �ı��� ������, �ı��� ������);

//·����д�� Ӧ���� C:\\Windows\\System\\test.ini
�߼��� д������(�ı��� �ļ���, �ı��� ������, �ı��� ������, �ı��� д������);

�ı��� ȡ����Ŀ¼();

�ı��� ȡ��������();

�޷���ֵ �ӳ�(������ n);


