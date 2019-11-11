// dialog1.cpp: 实现文件
//

#include "pch.h"
#include "mfcdemo.h"
#include "dialog1.h"
#include "afxdialogex.h"


// dialog1 对话框

IMPLEMENT_DYNAMIC(dialog1, CDialogEx)

dialog1::dialog1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

dialog1::~dialog1()
{
}

void dialog1::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_EDIT2, y);
    DDX_Control(pDX, IDC_EDIT1, x);
}


BEGIN_MESSAGE_MAP(dialog1, CDialogEx)
    ON_BN_CLICKED(IDOK, &dialog1::OnBnClickedOk)
END_MESSAGE_MAP()


// dialog1 消息处理程序


void dialog1::OnBnClickedOk()
{
    // TODO: 在此添加控件通知处理程序代码
    int a, b;

    a = GetDlgItemInt(IDC_EDIT1);
    b = GetDlgItemInt(IDC_EDIT2);
    CString str;
    str.Format(_T("(%d,%d) = z"), a, b);

    MessageBox(str);
    CDialogEx::OnOK();
}
