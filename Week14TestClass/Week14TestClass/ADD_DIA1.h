#pragma once


// ADD_DIA1 对话框

class ADD_DIA1 : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DIA1)

public:
	ADD_DIA1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADD_DIA1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double i;
};
