//---------------------------------------------------------------------------

#ifndef FormMainH
#define FormMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <stdio.h>
//---------------------------------------------------------------------------
typedef char **tKata;

struct KosaKata{
	char Kata[20];
	KosaKata *Next;
}

class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *TxtSearchWord;
	TButton *BtnFind;
	TLabel *LblResult;
	void __fastcall BtnFindClick(TObject *Sender);
private:	// User declarations
	FILE *f;
	char ReadWord[15], SmallWord[15], FindWord[15];
	KosaKata *KataGanti, *KataKerja, *KataBenda, *tGanti, *tKerja, *tBenda, *Head, *Tail, *Baru, *Hapus, *Bantu;

	void Pisahkan(char kalimat[], tKata kata, int &jlh);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
