#pragma once


// ADD_DIA 对话框

class ADD_DIA : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DIA)

public:
	ADD_DIA(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADD_DIA();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
