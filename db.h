#pragma once
#include "SDK.h"
class db
{
public:
	db();
	~db();

	static void fixAA(CUserCmd* pCmd, Vector vOldAngles, float fOldSidemove, float fOldForward);
};

