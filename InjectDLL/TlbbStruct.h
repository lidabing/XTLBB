#include <windows.h>

#pragma pack(push)
#pragma pack(1)

// 放技能的数据包
typedef struct _SKILL
{
	WORD code;
	WORD length;
	WORD syn;
	char reserved1[14];
	DWORD id;
	char reserved2[8];
} SKILL, * PSKILL;

// 选怪的数据包
typedef struct _SELECT
{
	WORD code;
	WORD length;
	WORD syn;
	DWORD id;
} SELECT, * PSELECT;

#pragma pack(pop)