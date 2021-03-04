//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *box1;
        TImage *box2;
        TImage *box3;
        TImage *box4;
        TImage *box5;
        TImage *box6;
        TImage *box7;
        TImage *box8;
        TImage *box9;
        TLabel *heading;
        TButton *button1;
        TButton *button2;
        TLabel *roundtext;
        TImage *roundpicture;
        TButton *button3;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall box1Click(TObject *Sender);
        void __fastcall box2Click(TObject *Sender);
        void __fastcall box3Click(TObject *Sender);
        void __fastcall box4Click(TObject *Sender);
        void __fastcall box5Click(TObject *Sender);
        void __fastcall box6Click(TObject *Sender);
        void __fastcall box7Click(TObject *Sender);
        void __fastcall box8Click(TObject *Sender);
        void __fastcall box9Click(TObject *Sender);
        void __fastcall button1Click(TObject *Sender);
        void __fastcall button2Click(TObject *Sender);
        void __fastcall button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
