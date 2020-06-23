#pragma once


// MyDia2 对话框

class MyDia2 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDia2)

public:
	MyDia2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDia2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString ljm;
};
