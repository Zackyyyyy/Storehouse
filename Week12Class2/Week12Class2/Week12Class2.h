// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WEEK12CLASS2_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WEEK12CLASS2_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WEEK12CLASS2_EXPORTS
#define WEEK12CLASS2_API __declspec(dllexport)
#else
#define WEEK12CLASS2_API __declspec(dllimport)
#endif

// �����Ǵ� Week12Class2.dll ������
class WEEK12CLASS2_API CWeek12Class2 {
public:
	CWeek12Class2(void);
	// TODO:  �ڴ�������ķ�����
};

extern WEEK12CLASS2_API int nWeek12Class2;

WEEK12CLASS2_API int fnWeek12Class2(void);

WEEK12CLASS2_API int factorial(int n);

WEEK12CLASS2_API	 float convert(float deg);
