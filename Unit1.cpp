//---------------------------------------------------------------------------
#include <vcl.h>
#include <string>
#include <string.h>
#include <iostream>

#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma resource "*.dfm"
using namespace std;
TForm1 *Form1;

AnsiString s;
AnsiString new_s;
AnsiString key;
int k=0;

AnsiString new_alphabet;
AnsiString alphabet="��������������������������������";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{   //��������
	key="";
	s="";
	k=0;
	new_s="";
	LabeledEdit1->Text="";
	LabeledEdit2->Text="";
	LabeledEdit3->Text="";
    CSpinEdit1->Value=0;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{ 	// �����������
    new_s="";
	key=LabeledEdit2->Text;
	k=CSpinEdit1->Value;
	s=LabeledEdit1->Text;

	new_alphabet= Generate_new_alphabet(key, k);
	// ������� �����
    for (size_t i = 1; i <= s.Length(); i++) {
		char c = s[i];
		new_s += new_alphabet[alphabet.Pos(c)];
    }
	LabeledEdit3->Text = new_s;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	//������������
    new_s="";
	key=LabeledEdit2->Text;
	k=CSpinEdit1->Value;
	s=LabeledEdit1->Text;

	new_alphabet= Generate_new_alphabet(key, k);

	// �������������� �����
    for (size_t i = 1; i <= s.Length(); i++) {
		char c = s[i];
		new_s += alphabet[new_alphabet.Pos(c)];
	}
	LabeledEdit3->Text = new_s; // ������� �������������� �����
}
//---------------------------------------------------------------------------

AnsiString TForm1::Generate_new_alphabet (const AnsiString key, int k){
	AnsiString newAlphabet = "";
	AnsiString used="";
	for (size_t j = 1; j <= key.Length(); j++) {
		char d = key[j];
		if (used.Pos(d) == 0) {
			newAlphabet += d;
			used += d;
        }
    }

	for (size_t i = 1; i <= alphabet.Length(); i++) {
        char c = alphabet[i];
		if (used.Pos(c) == 0) {
			newAlphabet += c;
			used += c;
        }
    }

	k=k%newAlphabet.Length();
	newAlphabet = newAlphabet.SubString(newAlphabet.Length()-k+1, newAlphabet.Length()) + newAlphabet.SubString(1, newAlphabet.Length()-k);
	ShowMessage("�������� ����� �������: "+newAlphabet) ;

	return newAlphabet;
}



