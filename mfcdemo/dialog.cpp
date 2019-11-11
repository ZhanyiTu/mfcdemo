// dialog.cpp: 实现文件
//

#include "pch.h"
#include "mfcdemo.h"
#include "dialog.h"
#include "afxdialogex.h"


// dialog 对话框

IMPLEMENT_DYNAMIC(dialog, CDialogEx)

dialog::dialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

dialog::~dialog()
{
}

void dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(dialog, CDialogEx)
    ON_BN_CLICKED(IDOK, &dialog::OnBnClickedOk)
END_MESSAGE_MAP()


// dialog 消息处理程序


void dialog::OnBnClickedOk()
{
    // TODO: 在此添加控件通知处理程序代码
    char buf[100];
    s_sprintf(buf, x);
    s_sprintf(buf, y);
    MessageBox(TEXT(buf), TEXT("新建任务"), MB_YESNO);
    CDialogEx::OnOK();
}
