#pragma once



// CImageZoom1View ���Դϴ�.

class CImageZoom1View : public CScrollView
{
	DECLARE_DYNCREATE(CImageZoom1View)

protected:
	CImageZoom1View();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~CImageZoom1View();

public:
	BITMAPINFOHEADER m_BmiHeader;	// ȭ�� ����� ���� ��Ʈ�� ���


#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void OnDraw(CDC* pDC);      // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual void OnInitialUpdate();     // ������ �� ó���Դϴ�.

	DECLARE_MESSAGE_MAP()
};


