
// AdmincenterView.cpp : implementation of the CAdmincenterView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Admincenter.h"
#endif

#include "AdmincenterDoc.h"
#include "AdmincenterView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAdmincenterView

IMPLEMENT_DYNCREATE(CAdmincenterView, CFormView)

BEGIN_MESSAGE_MAP(CAdmincenterView, CFormView)
END_MESSAGE_MAP()

// CAdmincenterView construction/destruction

CAdmincenterView::CAdmincenterView()
	: CFormView(IDD_ADMINCENTER_FORM)
{
	// TODO: add construction code here

}

CAdmincenterView::~CAdmincenterView()
{
}

void CAdmincenterView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CAdmincenterView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CAdmincenterView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}


// CAdmincenterView diagnostics

#ifdef _DEBUG
void CAdmincenterView::AssertValid() const
{
	CFormView::AssertValid();
}

void CAdmincenterView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CAdmincenterDoc* CAdmincenterView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAdmincenterDoc)));
	return (CAdmincenterDoc*)m_pDocument;
}
#endif //_DEBUG


// CAdmincenterView message handlers
