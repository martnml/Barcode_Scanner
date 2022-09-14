//---------------------------------------------------------------------------

#ifndef bar_codeH
#define bar_codeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *Button1;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button2;
	TEdit *Edit1;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TOpenPictureDialog *OpenPictureDialog1;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
