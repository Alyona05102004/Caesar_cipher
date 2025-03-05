//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *LabeledEdit1;
	TButton *Button1;
	TLabeledEdit *LabeledEdit3;
	TButton *Button2;
	TGroupBox *GroupBox1;
	TLabeledEdit *LabeledEdit5;
	TGroupBox *GroupBox2;
	TLabeledEdit *LabeledEdit6;
	TButton *Button3;
	TButton *Button4;
	TLabeledEdit *LabeledEdit7;
	TLabeledEdit *LabeledEdit8;
	TLabeledEdit *LabeledEdit2;
	TLabeledEdit *LabeledEdit4;
	void __fastcall LabeledEdit1Change(TObject *Sender);
	void __fastcall LabeledEdit3Change(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall LabeledEdit2Change(TObject *Sender);
	void __fastcall LabeledEdit4Change(TObject *Sender);
	void __fastcall LabeledEdit7Change(TObject *Sender);
	void __fastcall LabeledEdit8Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
