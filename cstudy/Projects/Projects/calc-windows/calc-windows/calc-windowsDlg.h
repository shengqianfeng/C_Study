
// calc-windowsDlg.h : ͷ�ļ�
//

#pragma once


// CcalcwindowsDlg �Ի���
class CcalcwindowsDlg : public CDialogEx
{
// ����
public:
	CcalcwindowsDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CALCWINDOWS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int a;
	CString str;
	int b;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnStnClickedStatic2();
	int c;
	afx_msg void OnBnClickedButton1();
};
