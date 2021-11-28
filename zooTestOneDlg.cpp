
// zooTestOneDlg.cpp : implementation file
//
#include<iostream>
#include "pch.h"
#include "framework.h"
#include "zooTestOne.h"
#include "zooTestOneDlg.h"
#include "afxdialogex.h"
#include "Animal.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Dolphin.h"
#include "Kangaroo.h"
#include "Sloth.h"
#include "Tiger.h"
#include "Crocodile.h"
#include "Iguana.h"
#include "Draco.h"
#include "Turtle.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;



CzooTestOneDlg::CzooTestOneDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ZOOTESTONE_DIALOG, pParent)
	, m_type(0)
	, m_age(0)
	

	
	
	
	
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CzooTestOneDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RADIO1, m_dolphin);
	DDX_Control(pDX, IDC_ANIMAL_LIST, m_listCtrl);
	DDX_Control(pDX, IDC_RADIO3, m_kangaroo);
	DDX_Control(pDX, IDC_RADIO4, m_sloth);
	DDX_Control(pDX, IDC_RADIO5, m_tiger);
	DDX_Control(pDX, IDC_RADIO6, m_crocodile);
	DDX_Control(pDX, IDC_RADIO7, m_iguana);
	DDX_Control(pDX, IDC_RADIO9, m_darco);
	DDX_Control(pDX, IDC_RADIO10, m_turtle);
	DDX_Control(pDX, IDC_ED_NAME, m_name);
	DDX_Text(pDX, IDC_ED_AGE, m_age);
	DDV_MinMaxInt(pDX, m_age, 0, 150);
	DDX_Control(pDX, IDC_BTN_UNDO, m_undo);
	DDX_Control(pDX, IDC_BTN_REDO, m_redo);
	DDX_Control(pDX, IDC_BTN_SAVE, m_save);
	DDX_Control(pDX, IDC_BTN_DEL, m_delete);

	
}

BEGIN_MESSAGE_MAP(CzooTestOneDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_DEL, &CzooTestOneDlg::OnBnClickedBtnDel)
	ON_BN_CLICKED(IDC_BTN_ADD, &CzooTestOneDlg::OnBnClickedBtnAdd)
	ON_BN_CLICKED(IDC_BTN_UNDO, &CzooTestOneDlg::OnBnClickedBtnUndo)
	ON_BN_CLICKED(IDC_BTN_REDO, &CzooTestOneDlg::OnBnClickedBtnRedo)
	ON_BN_CLICKED(IDC_BTN_SAVE, &CzooTestOneDlg::OnBnClickedBtnSave)
	ON_BN_CLICKED(IDC_BTN_OPEN, &CzooTestOneDlg::OnBnClickedBtnOpen)


	ON_BN_CLICKED(IDC_RADIO1, &CzooTestOneDlg::OnBnClickedDolphin)
	ON_BN_CLICKED(IDC_RADIO3, &CzooTestOneDlg::OnBnClickedKangaroo)
	ON_BN_CLICKED(IDC_RADIO4, &CzooTestOneDlg::OnBnClickedSloth)
	ON_BN_CLICKED(IDC_RADIO5, &CzooTestOneDlg::OnBnClickedTiger)
	ON_BN_CLICKED(IDC_RADIO6, &CzooTestOneDlg::OnBnClickedCrocodile)
	ON_BN_CLICKED(IDC_RADIO7, &CzooTestOneDlg::OnBnClickedIguana)
	ON_BN_CLICKED(IDC_RADIO9, &CzooTestOneDlg::OnBnClickedDraco)
	ON_BN_CLICKED(IDC_RADIO10, &CzooTestOneDlg::OnBnClickedTurtle)
	

	
	
	
	
	ON_BN_CLICKED(IDC_BUTTON1, &CzooTestOneDlg::OnBnClickedMammals_Button)
	ON_BN_CLICKED(IDC_BUTTON5, &CzooTestOneDlg::OnBnClickedReptiles_Button)
	
	
	ON_BN_CLICKED(IDC_BUTTON6, &CzooTestOneDlg::OnBnClickedAboutTheZoo)
	
	
END_MESSAGE_MAP()


// CzooTestOneDlg message handlers

BOOL CzooTestOneDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	initList();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CzooTestOneDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

HCURSOR CzooTestOneDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CzooTestOneDlg::initList()
{
	m_listCtrl.InsertColumn(0, L"Name", LVCFMT_CENTER, 80);
	m_listCtrl.InsertColumn(1, L"Type", LVCFMT_LEFT, 100);
	m_listCtrl.InsertColumn(2, L"Age", LVCFMT_LEFT, 70);
	m_listCtrl.InsertColumn(3, L"Number of legs", LVCFMT_LEFT, 150);
	m_listCtrl.InsertColumn(4, L"Sound", LVCFMT_LEFT, 80);
	m_listCtrl.InsertColumn(5, L"Color", LVCFMT_LEFT, 80);
}

void CzooTestOneDlg::OnBnClickedBtnDel()//Delete 
{
	for (int nItem = 0; nItem < m_listCtrl.GetItemCount();nItem++ ) // delete selected item(s) 
	{
		if (m_listCtrl.GetItemState(nItem, LVIS_SELECTED) == LVIS_SELECTED)
		{
			m_listCtrl.DeleteItem(nItem);
		}
		
	
	}
}

void CzooTestOneDlg::OnBnClickedBtnAdd()
{
	UpdateData();

	CString name = _T("");
	CString age = _T("");

	m_name.GetWindowTextW(name);
	age.Format(_T("%d"), m_age);
	switch (m_type)
	{
	case 1:
		if (m_age > 45)
		{
			MessageBox(_T("Dolphin lives between 10-45 years on average,please try again "), _T("Dolphin's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		break;

	case 3:
		if (m_age > 6)
		{
			MessageBox(_T("Kangaroo lives between 4-6 years on average,please try again "), _T("Kangaroo's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;

		}
		break;
	case 4:
		if (m_age > 20)
		{ 
			MessageBox(_T("Sloth lives between 10-20 years on average,please try again "), _T("Sloth's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		break;
	case 5:
		if (m_age > 10)
		{ 
			MessageBox(_T("Tiger lives between 8-10 years on average,please try again "), _T("Tiger's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		break;
	case 6:
		if (m_age > 70)
		{
			MessageBox(_T("Crocodile lives between 50-70 years on average,please try again "), _T("Crocodile's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		break;
	case 7:
		if (m_age > 15)
		{
			MessageBox(_T("Iguana lives between 12-15 years on average,please try again "), _T("Iguana's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		break;
	case 9:
		if (m_age > 3)
		{
			MessageBox(_T("Draco lives between 5-10 years on average,please try again "), _T("Draco's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		break;
	case 10:
		if (m_age > 150)
		{
			MessageBox(_T("Turtle lives between 50-150 years on average,please try again "), _T("Turtle's Life Span"));
			SetDlgItemText(IDC_ED_AGE, CString(""));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		break;

	}

	if (name.GetLength() > 0)
	{
		if (name.GetLength() > 15)
		{
			MessageBox(_T("The name is too long!,the name need to be between 1-15 characters"), _T("Error"));
			SetDlgItemText(IDC_ED_NAME, CString(""));
			return;
		}
		Animal* animal = createAnimal(name, age);
		insertAnimal(animal);

		done.push_back(animal);
		m_undo.EnableWindow(true);
		m_save.EnableWindow(true);
		m_delete.EnableWindow(true);
		undone.clear();
		m_redo.EnableWindow(false);
		

	}
	else 
	{
		MessageBox(_T("Enter name!"), _T("Error"));
	}
	
	
	m_dolphin.ShowWindow(0);
	m_kangaroo.ShowWindow(0);
	m_sloth.ShowWindow(0);
	m_tiger.ShowWindow(0);
	m_crocodile.ShowWindow(0);
	m_iguana.ShowWindow(0);
	m_darco.ShowWindow(0);
	m_turtle.ShowWindow(0);
	SetDlgItemText(IDC_ED_AGE, CString(""));
	SetDlgItemText(IDC_ED_NAME, CString(""));
	
	
}

void CzooTestOneDlg::OnBnClickedBtnUndo()
{
	if (m_listCtrl.GetItemCount() > 0)
	{
		undone.push_back(done.back());
		done.pop_back();
		m_listCtrl.DeleteItem(0);
		m_redo.EnableWindow(true);
	}

	if (m_listCtrl.GetItemCount() == 0)
	{
		m_undo.EnableWindow(false);
		m_save.EnableWindow(false);
	}
}

void CzooTestOneDlg::OnBnClickedBtnRedo()
{
	if (!undone.empty())
	{
		Animal *animal = undone.back();
		insertAnimal(animal);
		done.push_back(animal);
		undone.pop_back();
		m_undo.EnableWindow(true);
		m_save.EnableWindow(true);
	}

	if (undone.empty())
		m_redo.EnableWindow(false);
}

void CzooTestOneDlg::OnBnClickedBtnSave()
{
	char strFilter[] = {"Data Files (*.dat)"};
	CFileDialog saveDlg(FALSE, _T("dat"), NULL, 0, CString(strFilter));
	if (saveDlg.DoModal() == IDOK)
	{
		CString s = saveDlg.GetPathName();
		CFile file(s, CFile::modeCreate | CFile::modeWrite);
		CArchive archive(&file, CArchive::store);

		int size = done.size();
		archive << size;

		for (vector<Animal*>::iterator it = done.begin(); it != done.end(); it++)
			(*it)->Serialize(archive);

		archive.Close();
		file.Close();
	}



		
		
}

void CzooTestOneDlg::OnBnClickedBtnOpen()
{
	CFileDialog openDlg(TRUE, _T(".dat"));
	if (openDlg.DoModal() == IDOK)
	{
		CString s = openDlg.GetPathName();
		CFile file(s, CFile::modeRead);
		CArchive archive(&file, CArchive::load);
		done.clear();
		undone.clear();
		recreate(archive);
		archive.Close();
		file.Close();
	}




}

void CzooTestOneDlg::recreate(CArchive& archive)
{
	int size;
	CString type;
	CString color;
	CString age;
	CString name;
	Animal* animal = nullptr;

	m_listCtrl.DeleteAllItems();
	archive >> size;

	for (int i = 0; i < size; i++)
	{
		archive >> type;
		archive >> color;
		archive >> age;
		archive >> name;		
		if (type.CompareNoCase(_T("Dolphin")) == 0)
		{
			animal = new Dolphin(name, age);
		}
		else if (type.CompareNoCase(_T("Kangaroo")) == 0)
			animal = new Kangaroo(name, age);
		else if (type.CompareNoCase(_T("Sloth")) == 0)
			animal = new Sloth(name, age);
		else if (type.CompareNoCase(_T("Tiger")) == 0)
			animal = new Tiger(name, age);
		else if (type.CompareNoCase(_T("Crocodile")) == 0)
			animal = new Crocodile(name, age);
		else if (type.CompareNoCase(_T("Iguana")) == 0)
			animal = new Iguana(name, age);
		else if (type.CompareNoCase(_T("Draco")) == 0)
			animal = new Draco(name, age);
		else
			animal = new Turtle(name, age);

		insertAnimal(animal);

		done.push_back(animal);
		m_undo.EnableWindow(TRUE);
		m_save.EnableWindow(TRUE);
		undone.clear();
		m_redo.EnableWindow(FALSE);
	}
}

Animal* CzooTestOneDlg::createAnimal(CString name, CString age)
{
	Animal* animal= nullptr;
	switch (m_type)
	{
	case 1:
		animal = new Dolphin(name, age);
		break;
	
	case 3:
		animal = new Kangaroo(name, age);
		break;
	case 4:
		animal = new Sloth(name, age);
		break;
	case 5:
		animal = new Tiger(name, age);
		break;
	case 6:
		animal = new Crocodile(name, age);
		break;
	case 7:
		animal = new Iguana(name, age);
		break;
	
	case 9:
		animal = new Draco(name, age);
		break;
	case 10:
		animal = new Turtle(name, age);
		break;
	
	}
	return animal;
}

void CzooTestOneDlg::insertAnimal(Animal *animal)
{
	int nItem;
	nItem = m_listCtrl.InsertItem(0,animal->getName());
	m_listCtrl.SetItemText(nItem, 1, animal->getType());
	m_listCtrl.SetItemText(nItem, 2, animal->getAge());
	m_listCtrl.SetItemText(nItem, 3, animal->getNumOfLegs());
	m_listCtrl.SetItemText(nItem, 4, animal->getSound());
	m_listCtrl.SetItemText(nItem, 5, animal->getColor());
}




















void CzooTestOneDlg::OnBnClickedDolphin()
{
	m_type = 1;
	
}


void CzooTestOneDlg::OnBnClickedKangaroo()
{
	m_type = 3;
	
}


void CzooTestOneDlg::OnBnClickedSloth()
{
	m_type = 4;

}


void CzooTestOneDlg::OnBnClickedTiger()
{
	m_type = 5;
	
}


void CzooTestOneDlg::OnBnClickedCrocodile()
{
	m_type = 6;
	
}


void CzooTestOneDlg::OnBnClickedIguana()
{
	m_type = 7;

}



void CzooTestOneDlg::OnBnClickedDraco()
{
	m_type = 9;
	
}


void CzooTestOneDlg::OnBnClickedTurtle()
{
	m_type = 10;
	
}





void CzooTestOneDlg::OnBnClickedMammals_Button()
{
	
	m_dolphin.ShowWindow(1);
	m_kangaroo.ShowWindow(1);
	m_sloth.ShowWindow(1);
	m_tiger.ShowWindow(1);
	m_crocodile.ShowWindow(0);
	m_iguana.ShowWindow(0);
	m_darco.ShowWindow(0);
	m_turtle.ShowWindow(0);

}


void CzooTestOneDlg::OnBnClickedReptiles_Button()
{
	m_crocodile.ShowWindow(1);
	m_iguana.ShowWindow(1);
	m_darco.ShowWindow(1);
	m_turtle.ShowWindow(1);
	m_dolphin.ShowWindow(0);
	m_kangaroo.ShowWindow(0);
	m_sloth.ShowWindow(0);
	m_tiger.ShowWindow(0);
}










void CzooTestOneDlg::OnBnClickedAboutTheZoo()
{
	MessageBox(_T("The zoo founded by Ronen and Assaf on September 2021, currently our zoo contains two classes: Mammals and Reptiles, enjoy your visit,hope to see you agian"),_T("About the zoo"));
}





