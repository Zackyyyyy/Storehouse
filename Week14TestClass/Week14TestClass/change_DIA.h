#pragma once


// change_DIA �Ի���

class change_DIA : public CDialogEx
{
	DECLARE_DYNAMIC(change_DIA)

public:
	change_DIA(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_DIA();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	double l;
};
