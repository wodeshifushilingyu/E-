#pragma once
#include <windows.h>
#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
#include "tlhelp32.h"

#define 长整数型 __int64
#define 整数型 int
#define 文本型 std::string
#define 无返回值 void
#define 如果真 if
#define 否则 else
#define 逻辑型 bool
#define 真 1
#define 假 0
#define 小数型 float
#define 双精度小数型 double
#define 跳出循环 break
#define 倒循环尾 continue

//用法是  计次循环(整数型 i = 0; i< 你要循环的数量; i++)
//意思是 i从0开始  循环一次+1 到你要循环的次数后就不在循环
//注意 中间是个分号
#define 计次循环 for
#define 判断循环 while
#define 通用型 void*

#ifdef _DEBUG
#pragma comment(lib, "E++_Dbg.lib")
#else
#pragma comment(lib, "E++_Res.lib")
#endif // DEBUG



整数型 取文本长度(文本型 内容);

文本型 取文本左边(文本型 内容, 整数型 长度);

文本型 取文本中间(文本型 内容, 整数型 开始位置, 整数型 长度);

文本型 取文本右边(文本型 内容, 整数型 长度);

整数型 寻找文本(文本型 内容, 文本型 要寻找的内容);

整数型 倒找文本(文本型 内容, 文本型 要寻找的内容);

整数型 信息框(文本型 内容, 整数型 按钮 = MB_OK, 文本型 窗口标题 = "", 整数型 父窗口 = 0);

文本型 长整数到文本(长整数型 n);

长整数型 文本到长整数(文本型 x);

文本型 小数到文本(小数型 n);

小数型 文本到小数(文本型 n);

文本型 双精度小数到文本(双精度小数型 n);

//路径的写法 应该是 C:\\Windows\\System\\test.ini
文本型 读配置项(文本型 文件名, 文本型 节名称, 文本型 键名称);

//路径的写法 应该是 C:\\Windows\\System\\test.ini
逻辑型 写配置项(文本型 文件名, 文本型 节名称, 文本型 键名称, 文本型 写入内容);

文本型 取运行目录();

文本型 取运行名称();

无返回值 延迟(整数型 n);


