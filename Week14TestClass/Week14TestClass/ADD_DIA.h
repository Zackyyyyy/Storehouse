#pragma once


// ADD_DIA �Ի���

class ADD_DIA : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DIA)

public:
	ADD_DIA(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD_DIA();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
