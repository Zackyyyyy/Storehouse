#pragma once


// ADD_DIA1 �Ի���

class ADD_DIA1 : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DIA1)

public:
	ADD_DIA1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD_DIA1();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	double i;
};
