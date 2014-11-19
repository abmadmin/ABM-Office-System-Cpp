
// CntrItem.h : interface of the CABMOfficeSystemcppCntrItem class
//

#pragma once

class CABMOfficeSystemcppDoc;
class CABMOfficeSystemcppView;

class CABMOfficeSystemcppCntrItem : public COleDocObjectItem
{
	DECLARE_SERIAL(CABMOfficeSystemcppCntrItem)

// Constructors
public:
	CABMOfficeSystemcppCntrItem(CABMOfficeSystemcppDoc* pContainer = NULL);
		// Note: pContainer is allowed to be NULL to enable IMPLEMENT_SERIALIZE
		//  IMPLEMENT_SERIALIZE requires the class have a constructor with
		//  zero arguments.  Normally, OLE items are constructed with a
		//  non-NULL document pointer

// Attributes
public:
	CABMOfficeSystemcppDoc* GetDocument()
		{ return reinterpret_cast<CABMOfficeSystemcppDoc*>(COleDocObjectItem::GetDocument()); }
	CABMOfficeSystemcppView* GetActiveView()
		{ return reinterpret_cast<CABMOfficeSystemcppView*>(COleDocObjectItem::GetActiveView()); }

public:
	virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
	virtual void OnActivate();

protected:
	virtual void OnDeactivateUI(BOOL bUndoable);
	virtual BOOL OnChangeItemPosition(const CRect& rectPos);
	virtual BOOL OnShowControlBars(CFrameWnd* pFrameWnd, BOOL bShow);

// Implementation
public:
	~CABMOfficeSystemcppCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	virtual void Serialize(CArchive& ar);
};

