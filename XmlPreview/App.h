#pragma once

#include "resource.h"


int ShowHelpInfo()
{
	MessageBox(NULL, _T("ʹ��ʱ�������ļ�(*.xml)�ϵ�XmlPreview.exe�ϼ���Ԥ������\"Esc\"����\"Alt+F4\"�˳���"), 
		_T("����Ԥ������"), MB_OK);
	return 0;
}