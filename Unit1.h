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
	TButton *Button2;
	TGroupBox *GroupBox1;
	TLabeledEdit *LabeledEdit4;
	TButton *Button3;
	TLabeledEdit *LabeledEdit3;
	TLabeledEdit *LabeledEdit2;
	TLabel *Label1;
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
	AnsiString Generate_new_alphabet (const AnsiString key, int k);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
