#pragma once
#include "afxwin.h"


// CZoom1Dlg ��ȭ �����Դϴ�.

class CZoom1Dlg : public CDialog
{
	DECLARE_DYNAMIC(CZoom1Dlg)

public:
	CZoom1Dlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CZoom1Dlg();

	BOOL m_bCreated;

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ZOOM1DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CStatic m_stDispZ1;

	// Image
	BYTE* m_img;

	// function
	void DisplayImage(int IDC_PICTURE_TARGET, BYTE* image);
};