
// zooTestOneDlg.h : header file
//

#pragma once
#include <vector>
#include "Animal.h"
using namespace std;


// CzooTestOneDlg dialog
class CzooTestOneDlg : public CDialogEx
{
	// Construction
public:
	CzooTestOneDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ZOOTESTONE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


private:
	vector<Animal*> done;
	vector<Animal*> undone;


public:
		//Buttons////////////////////////////////////
	CButton m_dolphin;
	CButton m_kangaroo;
	CButton m_sloth;
	CButton m_tiger;
	CButton m_crocodile;
	CButton m_iguana;
	CButton m_darco;
	CButton m_turtle;
	CButton m_mammals;
	CButton m_reptiles;
	CListCtrl m_listCtrl;
	CButton m_undo;
	CButton m_redo;
	CButton m_save;
	CButton m_delete;
	//Variables///////////////////////////////////////

	int m_type;
	int m_age;
	//Functions//////////////////////////////////////
	void initList();
	void recreate(CArchive& archive);
	Animal* createAnimal(CString name, CString age);
	void insertAnimal(Animal* animal);
	afx_msg void OnBnClickedBtnDel();
	afx_msg void OnBnClickedBtnAdd();
	CEdit m_name;
	afx_msg void OnBnClickedBtnUndo();
	
	afx_msg void OnBnClickedBtnRedo();
	
	afx_msg void OnBnClickedBtnSave();
	afx_msg void OnBnClickedBtnOpen();
	
	
	
	
	
	afx_msg void OnBnClickedDolphin();
	afx_msg void OnBnClickedKangaroo();
	afx_msg void OnBnClickedSloth();
	afx_msg void OnBnClickedTiger();
	afx_msg void OnBnClickedCrocodile();
	afx_msg void OnBnClickedIguana();
	afx_msg void OnBnClickedDraco();
	afx_msg void OnBnClickedTurtle();
	
	
				
	
	
	
	
	afx_msg void OnBnClickedMammals_Button();
	afx_msg void OnBnClickedReptiles_Button();
	

	
	
	afx_msg void OnBnClickedAboutTheZoo();
	

	
	
	
	
};