
// testmfcdocviewappView.cpp : CtestmfcdocviewappView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "testmfcdocviewapp.h"
#endif

#include "testmfcdocviewappDoc.h"
#include "testmfcdocviewappView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestmfcdocviewappView

IMPLEMENT_DYNCREATE(CtestmfcdocviewappView, CView)

BEGIN_MESSAGE_MAP(CtestmfcdocviewappView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CtestmfcdocviewappView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CtestmfcdocviewappView ����/����

CtestmfcdocviewappView::CtestmfcdocviewappView()
{
	// TODO: �ڴ˴���ӹ������

}

CtestmfcdocviewappView::~CtestmfcdocviewappView()
{
}

BOOL CtestmfcdocviewappView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CtestmfcdocviewappView ����

void CtestmfcdocviewappView::OnDraw(CDC* /*pDC*/)
{
	CtestmfcdocviewappDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CtestmfcdocviewappView ��ӡ


void CtestmfcdocviewappView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CtestmfcdocviewappView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CtestmfcdocviewappView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CtestmfcdocviewappView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CtestmfcdocviewappView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CtestmfcdocviewappView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CtestmfcdocviewappView ���

#ifdef _DEBUG
void CtestmfcdocviewappView::AssertValid() const
{
	CView::AssertValid();
}

void CtestmfcdocviewappView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestmfcdocviewappDoc* CtestmfcdocviewappView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestmfcdocviewappDoc)));
	return (CtestmfcdocviewappDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestmfcdocviewappView ��Ϣ�������
