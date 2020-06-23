#pragma once


// change_DIA 对话框

class change_DIA : public CDialogEx
{
	DECLARE_DYNAMIC(change_DIA)

public:
	change_DIA(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_DIA();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double l;
};
