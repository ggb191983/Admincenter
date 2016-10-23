
// AdmincenterView.h : interface of the CAdmincenterView class
//

#pragma once


class CAdmincenterView : public CFormView
{
protected: // create from serialization only
	CAdmincenterView();
	DECLARE_DYNCREATE(CAdmincenterView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_ADMINCENTER_FORM };
#endif

// Attributes
public:
	CAdmincenterDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CAdmincenterView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in AdmincenterView.cpp
inline CAdmincenterDoc* CAdmincenterView::GetDocument() const
   { return reinterpret_cast<CAdmincenterDoc*>(m_pDocument); }
#endif

