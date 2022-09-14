//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "bar_code.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{

if(OpenPictureDialog1->Execute()){
Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
  }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{

int w = Image1->Picture->Width ,h = Image1->Picture->Height ;

AnsiString  code="",code2="",f ;
int j;


for (int i = 0; i <w; i++) {
 int r = (GetRValue(Image1->Canvas->Pixels[i][h/2])) ;

 if(r<127)f="1"; else f="0";
 if(f==1)code=code+f;
	  else if(f==0 && code!="") code=code+f;

   }





char* S = code.c_str();
int l=strlen(S);

for (int i = l-1; i >0; i--)
		if(code[i]=='1')                  code2 = code2 + code[i];
		else if(code[i]=='0'&& code2!="") code2= code2 + code[i];






char* S2 = code2.c_str();
int l2=strlen(S2);
int pas=l2/95;
code="";
 j=0;

for (int i = l2-1; i >0; i=i-pas)  code += code2[i];






char* S3 = code.c_str();
int l3=strlen(S3);
// Manifacture code
char  MC[6];
// manifacture scanned code
char  Sc_code[5];


for (int i = 3,j=0; i <45; i=i+7,j++) {
				//      50     92
					  MC[0]=S3[i];
					  MC[1]=S3[i+1];
					  MC[2]=S3[i+2];
					  MC[3]=S3[i+3];
					  MC[4]=S3[i+4];
					  MC[5]=S3[i+5];
					  MC[6]=S3[i+6];

				 if(MC[0]=='0'&&MC[1]=='0'&&MC[2]=='0'&&MC[3]=='1'&&MC[4]=='1'&&MC[5]=='0'&&MC[6]=='1')     Sc_code[j]='0';
				 else if(MC[0]=='0'&&MC[1]=='0'&&MC[2]=='1'&&MC[3]=='1'&&MC[4]=='0'&&MC[5]=='0'&&MC[6]=='1') Sc_code[j]='1';
				 else if(MC[0]=='0'&&MC[1]=='0'&&MC[2]=='1'&&MC[3]=='0'&&MC[4]=='0'&&MC[5]=='1'&&MC[6]=='1') Sc_code[j]='2';
				 else if(MC[0]=='0'&&MC[1]=='1'&&MC[2]=='1'&&MC[3]=='1'&&MC[4]=='1'&&MC[5]=='0'&&MC[6]=='1') Sc_code[j]='3';
				 else if(MC[0]=='0'&&MC[1]=='1'&&MC[2]=='0'&&MC[3]=='0'&&MC[4]=='0'&&MC[5]=='1'&&MC[6]=='1') Sc_code[j]='4';
				 else if(MC[0]=='0'&&MC[1]=='1'&&MC[2]=='1'&&MC[3]=='0'&&MC[4]=='0'&&MC[5]=='0'&&MC[6]=='1') Sc_code[j]='5';
				 else if(MC[0]=='0'&&MC[1]=='1'&&MC[2]=='0'&&MC[3]=='1'&&MC[4]=='1'&&MC[5]=='1'&&MC[6]=='1') Sc_code[j]='6';
				 else if(MC[0]=='0'&&MC[1]=='1'&&MC[2]=='1'&&MC[3]=='1'&&MC[4]=='0'&&MC[5]=='1'&&MC[6]=='1') Sc_code[j]='7';
				 else if(MC[0]=='0'&&MC[1]=='1'&&MC[2]=='1'&&MC[3]=='0'&&MC[4]=='1'&&MC[5]=='1'&&MC[6]=='1') Sc_code[j]='8';
				 else if(MC[0]=='0'&&MC[1]=='0'&&MC[2]=='0'&&MC[3]=='1'&&MC[4]=='0'&&MC[5]=='1'&&MC[6]=='1') Sc_code[j]='9';

   }

	Label1->Caption = Sc_code[0];
	Label2->Caption = Sc_code[1];
	Label3->Caption = Sc_code[2];
	Label4->Caption = Sc_code[3];
	Label5->Caption = Sc_code[4];
	Label6->Caption = Sc_code[5];
	//Edit1->Text=code;


	char* S4 = code.c_str();
	int l4=strlen(S4);
	// Product code
    char  PC[6];
		for (int i = 50,j=0; i <92; i=i+7,j++) {
				//      50     92
					  PC[0]=S4[i];
					  PC[1]=S4[i+1];
					  PC[2]=S4[i+2];
					  PC[3]=S4[i+3];
					  PC[4]=S4[i+4];
					  PC[5]=S4[i+5];
					  PC[6]=S4[i+6];

			     if(PC[0]=='1'&&PC[1]=='1'&&PC[2]=='1'&&PC[3]=='0'&&PC[4]=='0'&&PC[5]=='1'&&PC[6]=='0')     Sc_code[j]='0';
				 else if(PC[0]=='1'&&PC[1]=='1'&&PC[2]=='0'&&PC[3]=='0'&&PC[4]=='1'&&PC[5]=='1'&&PC[6]=='0')Sc_code[j]='1';
				 else if(PC[0]=='1'&&PC[1]=='1'&&PC[2]=='0'&&PC[3]=='1'&&PC[4]=='1'&&PC[5]=='0'&&PC[6]=='0')Sc_code[j]='2';
				 else if(PC[0]=='1'&&PC[1]=='0'&&PC[2]=='0'&&PC[3]=='0'&&PC[4]=='0'&&PC[5]=='1'&&PC[6]=='0')Sc_code[j]='3';
				 else if(PC[0]=='1'&&PC[1]=='0'&&PC[2]=='1'&&PC[3]=='1'&&PC[4]=='1'&&PC[5]=='0'&&PC[6]=='0')Sc_code[j]='4';
				 else if(PC[0]=='1'&&PC[1]=='0'&&PC[2]=='0'&&PC[3]=='1'&&PC[4]=='1'&&PC[5]=='1'&&PC[6]=='0')Sc_code[j]='5';
				 else if(PC[0]=='1'&&PC[1]=='0'&&PC[2]=='1'&&PC[3]=='0'&&PC[4]=='0'&&PC[5]=='0'&&PC[6]=='0')Sc_code[j]='6';
				 else if(PC[0]=='1'&&PC[1]=='0'&&PC[2]=='0'&&PC[3]=='0'&&PC[4]=='1'&&PC[5]=='0'&&PC[6]=='0')Sc_code[j]='7';
				 else if(PC[0]=='1'&&PC[1]=='0'&&PC[2]=='0'&&PC[3]=='1'&&PC[4]=='0'&&PC[5]=='0'&&PC[6]=='0')Sc_code[j]='8';
				 else if(PC[0]=='1'&&PC[1]=='1'&&PC[2]=='1'&&PC[3]=='0'&&PC[4]=='1'&&PC[5]=='0'&&PC[6]=='0')Sc_code[j]='9';

   }

 Label7->Caption=Sc_code[0];
 Label8->Caption=Sc_code[1];
Label9->Caption=Sc_code[2];
Label10->Caption=Sc_code[3];
Label11->Caption=Sc_code[4];
Label12->Caption=Sc_code[5];




}
//---------------------------------------------------------------------------


