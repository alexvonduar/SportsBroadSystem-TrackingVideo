// ImageZoom1View.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "ImageProcessing.h"
#include "ImageZoom1View.h"


// CImageZoom1View

IMPLEMENT_DYNCREATE(CImageZoom1View, CScrollView)

CImageZoom1View::CImageZoom1View()
{
	m_BmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	m_BmiHeader.biPlanes = 1;
	m_BmiHeader.biBitCount = 24;
	m_BmiHeader.biCompression = BI_RGB;
	m_BmiHeader.biXPelsPerMeter = 1000;
	m_BmiHeader.biYPelsPerMeter = 1000;
	m_BmiHeader.biClrUsed = 0;
	m_BmiHeader.biClrImportant = 0;
}

CImageZoom1View::~CImageZoom1View()
{
}


BEGIN_MESSAGE_MAP(CImageZoom1View, CScrollView)
END_MESSAGE_MAP()


// CImageZoom1View �׸����Դϴ�.

void CImageZoom1View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: �� ���� ��ü ũ�⸦ ����մϴ�.
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

void CImageZoom1View::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: ���⿡ �׸��� �ڵ带 �߰��մϴ�.
}


// CImageZoom1View �����Դϴ�.

#ifdef _DEBUG
void CImageZoom1View::AssertValid() const
{
	CScrollView::AssertValid();
}

#ifndef _WIN32_WCE
void CImageZoom1View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif
#endif //_DEBUG


// CImageZoom1View �޽��� ó�����Դϴ�.
