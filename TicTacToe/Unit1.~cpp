//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
        int alone=0, afriend=0, motion=0;
        char round='x';
        char board[3][3]={
                {'n','n','n'},
                {'n','n','n'},
                {'n','n','n'},
        };
        int user(){
                // winning check
                int counter1, counter2, counter3=0, counter4=0;
                for(int i=0; i<3; i++){
                        counter1=0; counter2=0;
                        for(int j=0; j<3; j++){
                                if(board[i][j]=='x'){ // tier
                                        counter1++;
                                        if(counter1==3) return 1;
                                }
                                if(board[j][i]=='x'){ // vertical
                                        counter2++;
                                        if(counter2==3) return 1;
                                }
                                if(i==j && board[i][j]=='x') counter3++; // diagional 1
                                if(i+j==2 && board[i][j]=='x') counter4++; // diagonal 2
                        }
                }
                if(counter3==3 || counter4==3) return 1;
                return 0;
        }
        int user2(){
                // winning check
                int counter1, counter2, counter3=0, counter4=0;
                for(int i=0; i<3; i++){
                        counter1=0; counter2=0;
                        for(int j=0; j<3; j++){
                                if(board[i][j]=='o'){ // tier
                                        counter1++;
                                        if(counter1==3) return 1;
                                }
                                if(board[j][i]=='o'){ // vertical
                                        counter2++;
                                        if(counter2==3) return 1;
                                }
                                if(i==j && board[i][j]=='o') counter3++; // diagional 1
                                if(i+j==2 && board[i][j]=='o') counter4++; // diagonal 2
                        }
                }
                if(counter3==3 || counter4==3) return 1;
                return 0;
        }
        int win(){
                int counter, helper, x, y;
                // tier
                for(int i=0; i<3; i++){
                        helper=0; counter=0;
                        for(int j=0; j<3; j++){
                                if(board[i][j]=='o') counter++;
                                if(board[i][j]=='x') helper++;
                                if(board[i][j]=='n'){
                                     x=i;
                                     y=j;
                                }
                        }
                        if(counter==2 && helper==0){
                                board[x][y]='o';
                                return 1;
                        }
                }
                // vertical
                for(int j=0; j<3; j++){
                        helper=0; counter=0;
                        for(int i=0; i<3; i++){
                                if(board[i][j]=='o') counter++;
                                if(board[i][j]=='x') helper++;
                                if(board[i][j]=='n'){
                                     x=i;
                                     y=j;
                                }
                        }
                        if(counter==2 && helper==0){
                                board[x][y]='o';
                                return 1;
                        }
                }
                // diagonal 1
                helper=0; counter=0;
                for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                                if(i==j){
                                        if(board[i][j]=='o') counter++;
                                        if(board[i][j]=='x') helper++;
                                        if(board[i][j]=='n'){
                                                x=i;
                                                y=j;
                                        }
                                }
                        }
                }
                if(counter==2 && helper==0){
                        board[x][y]='o';
                        return 1;
                }
                // diagonal 2
                helper=0; counter=0;
                for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                                if(i+j==2){
                                        if(board[i][j]=='o') counter++;
                                        if(board[i][j]=='x') helper++;
                                        if(board[i][j]=='n'){
                                                x=i;
                                                y=j;
                                        }
                                }
                        }
                }
                if(counter==2 && helper==0){
                        board[x][y]='o';
                        return 1;
                }
                return 0;
        }
        int block(){
                int counter, helper, x, y;
                // tier
                for(int i=0; i<3; i++){
                        helper=0; counter=0;
                        for(int j=0; j<3; j++){
                                if(board[i][j]=='x') counter++;
                                if(board[i][j]=='o') helper++;
                                if(board[i][j]=='n'){
                                     x=i;
                                     y=j;
                                }
                        }
                        if(counter==2 && helper==0){
                                board[x][y]='o';
                                return 1;
                        }
                }
                // vertical
                for(int j=0; j<3; j++){
                        helper=0; counter=0;
                        for(int i=0; i<3; i++){
                                if(board[i][j]=='x') counter++;
                                if(board[i][j]=='o') helper++;
                                if(board[i][j]=='n'){
                                     x=i;
                                     y=j;
                                }
                        }
                        if(counter==2 && helper==0){
                                board[x][y]='o';
                                return 1;
                        }
                }
                // diagonal 1
                helper=0; counter=0;
                for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                                if(i==j){
                                        if(board[i][j]=='x') counter++;
                                        if(board[i][j]=='o') helper++;
                                        if(board[i][j]=='n'){
                                        x=i;
                                        y=j;
                                        }
                                }
                        }
                }
                if(counter==2 && helper==0){
                        board[x][y]='o';
                        return 1;
                }
                // diagonal 2
                helper=0; counter=0;
                for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                                if(i+j==2){
                                        if(board[i][j]=='x') counter++;
                                        if(board[i][j]=='o') helper++;
                                        if(board[i][j]=='n'){
                                        x=i;
                                        y=j;
                                        }
                                }
                        }
                }
                if(counter==2 && helper==0){
                        board[x][y]='o';
                        return 1;
                }
                return 0;
        }
        int fork(){
                int empty=0, full=0, x=0, y=0;
                if(board[0][0]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[0][0]=='o') full++;
                if(board[2][0]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[2][0]=='o') full++;
                if(board[0][2]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[0][2]=='o') full++;
                if(empty==1 && full==2){
                        board[x][y]='o';
                        return 1;
                }
                empty=0, full=0, x=0, y=0;
                if(board[0][2]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[0][2]=='o') full++;
                if(board[0][0]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[0][0]=='o') full++;
                if(board[2][2]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[2][2]=='o') full++;
                if(empty==1 && full==2){
                        board[x][y]='o';
                        return 1;
                }
                empty=0, full=0, x=0, y=0;
                if(board[2][2]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[2][2]=='o') full++;
                if(board[2][0]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[2][0]=='o') full++;
                if(board[0][2]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[0][2]=='o') full++;
                if(empty==1 && full==2){
                        board[x][y]='o';
                        return 1;
                }
                empty=0, full=0, x=0, y=0;
                if(board[0][0]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[0][0]=='o') full++;
                if(board[2][0]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[2][0]=='o') full++;
                if(board[2][2]=='n'){
                        empty++;
                        x=0;
                        y=0;
                }
                if(board[2][2]=='o') full++;
                if(empty==1 && full==2){
                        board[x][y]='o';
                        return 1;
                }
                return 0;
        }
        int blocking_fork(){
                if((board[0][0]=='x' && board[2][2]=='x')||(board[0][2]=='x' && board[2][0]=='x')){
                        board[0][1]='o';
                        return 1;
                }
                if(board[2][1]=='x' && board[1][2]=='x' && board[2][2]!='o'){
                        board[2][2]='o';
                        return 1;
                }
                if(board[1][0]=='x' && board[2][1]=='x' && board[2][0]!='o'){
                        board[2][0]='o';
                        return 1;
                }
                if(board[1][0]=='x' && board[0][1]=='x' && board[0][0]!='o'){
                        board[0][0]='o';
                        return 1;
                }
                if(board[0][1]=='x' && board[1][2]=='x' && board[0][2]!='o'){
                        board[0][2]='o';
                        return 1;
                }
        }
        int center(){
                if(board[1][1]=='n'){
                        board[1][1]='o';
                        return 1;
                }
                return 0;
        }
        int opposite_corner(){
                if(board[0][0]=='x' && board[2][2]=='n'){
                        board[2][2]='o';
                        return 1;
                }
                if(board[0][2]=='x' && board[2][0]=='n'){
                        board[2][0]='o';
                        return 1;
                }
                if(board[2][2]=='x' && board[0][0]=='n'){
                        board[0][0]='o';
                        return 1;
                }
                if(board[2][0]=='x' && board[0][2]=='n'){
                        board[0][2]='o';
                        return 1;
                }
                return 0;
        }
        int empty_corner(){
                if(board[0][0]=='n'){
                        board[0][0]='o';
                        return 1;
                }
                if(board[0][2]=='n'){
                        board[0][2]='o';
                        return 1;
                }
                if(board[2][2]=='n'){
                        board[2][2]='o';
                        return 1;
                }
                if(board[2][0]=='n'){
                        board[2][0]='o';
                        return 1;
                }
                return 0;
        }
        int empty_side(){
                if(board[0][1]=='n'){
                        board[0][1]='o';
                        return 1;
                }
                if(board[1][2]=='n'){
                        board[1][2]='o';
                        return 1;
                }
                if(board[1][0]=='n'){
                        board[1][0]='o';
                        return 1;
                }
                if(board[2][1]=='n'){
                        board[2][1]='o';
                        return 1;
                }
                return 0;
        }
        int computer(){
                if(win()==1) return 1; // computer win
                if(block()==1) return 0; // the game continues
                if(fork()==1) return 0; // the game continues
                if(blocking_fork()==1) return 0; // the game continues
                if(center()==1) return 0; // the game continues
                if(opposite_corner()==1) return 0; // the game continues
                if(empty_corner()==1) return 0; // the game continues
                if(empty_side()==1) return 0; // the game continues
        }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        box1->Picture->LoadFromFile("pictures/cross.bmp");
        box1->Enabled=false;
        box2->Picture->LoadFromFile("pictures/nothing.bmp");
        box2->Enabled=false;
        box3->Picture->LoadFromFile("pictures/circle.bmp");
        box3->Enabled=false;
        box4->Picture->LoadFromFile("pictures/circle.bmp");
        box4->Enabled=false;
        box5->Picture->LoadFromFile("pictures/circle.bmp");
        box5->Enabled=false;
        box6->Picture->LoadFromFile("pictures/cross.bmp");
        box6->Enabled=false;
        box7->Picture->LoadFromFile("pictures/nothing.bmp");
        box7->Enabled=false;
        box8->Picture->LoadFromFile("pictures/nothing.bmp");
        box8->Enabled=false;
        box9->Picture->LoadFromFile("pictures/cross.bmp");
        box9->Enabled=false;

        roundtext->Hide();
        roundpicture->Enabled=false;
        button3->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::button1Click(TObject *Sender)
{
        afriend=1;
        button1->Hide();
        button2->Hide();
        button3->Show();

        box1->Picture->LoadFromFile("pictures/nothing.bmp");
        box1->Enabled=true;
        box2->Picture->LoadFromFile("pictures/nothing.bmp");
        box2->Enabled=true;
        box3->Picture->LoadFromFile("pictures/nothing.bmp");
        box3->Enabled=true;
        box4->Picture->LoadFromFile("pictures/nothing.bmp");
        box4->Enabled=true;
        box5->Picture->LoadFromFile("pictures/nothing.bmp");
        box5->Enabled=true;
        box6->Picture->LoadFromFile("pictures/nothing.bmp");
        box6->Enabled=true;
        box7->Picture->LoadFromFile("pictures/nothing.bmp");
        box7->Enabled=true;
        box8->Picture->LoadFromFile("pictures/nothing.bmp");
        box8->Enabled=true;
        box9->Picture->LoadFromFile("pictures/nothing.bmp");
        box9->Enabled=true;

        roundtext->Show();
        roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::button2Click(TObject *Sender)
{
        alone=1;
        button1->Hide();
        button2->Hide();
        button3->Show();

        box1->Picture->LoadFromFile("pictures/nothing.bmp");
        box1->Enabled=true;
        box2->Picture->LoadFromFile("pictures/nothing.bmp");
        box2->Enabled=true;
        box3->Picture->LoadFromFile("pictures/nothing.bmp");
        box3->Enabled=true;
        box4->Picture->LoadFromFile("pictures/nothing.bmp");
        box4->Enabled=true;
        box5->Picture->LoadFromFile("pictures/nothing.bmp");
        box5->Enabled=true;
        box6->Picture->LoadFromFile("pictures/nothing.bmp");
        box6->Enabled=true;
        box7->Picture->LoadFromFile("pictures/nothing.bmp");
        box7->Enabled=true;
        box8->Picture->LoadFromFile("pictures/nothing.bmp");
        box8->Enabled=true;
        box9->Picture->LoadFromFile("pictures/nothing.bmp");
        box9->Enabled=true;

        roundtext->Show();
        roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box1Click(TObject *Sender)
{
        if(alone==1){
                if(board[0][0]=='n'){
                        board[0][0]='x';
                        motion++;
                        box1->Picture->LoadFromFile("pictures/cross.bmp");
                        box1->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[0][0]=='n'){
                        if(round=='x'){
                                board[0][0]='x';
                                motion++;
                                box1->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        else{
                                board[0][0]='o';
                                motion++;
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box1->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box2Click(TObject *Sender)
{
        if(alone==1){
                if(board[0][1]='n'){
                        board[0][1]='x';
                        motion++;
                        box2->Picture->LoadFromFile("pictures/cross.bmp");
                        box2->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[0][1]=='n'){
                        if(round=='x'){
                                board[0][1]='x';
                                motion++;
                                box2->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");

                        }
                        else{
                                board[0][1]='o';
                                motion++;
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box2->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box3Click(TObject *Sender)
{
        if(alone==1){
                if(board[0][2]='n'){
                        board[0][2]='x';
                        motion++;
                        box3->Picture->LoadFromFile("pictures/cross.bmp");
                        box3->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[0][2]=='n'){
                        if(round=='x'){
                                board[0][2]='x';
                                motion++;
                                box3->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");

                        }
                        else{
                                board[0][2]='o';
                                motion++;
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box3->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box4Click(TObject *Sender)
{
        if(alone==1){
                if(board[1][0]='n'){
                        board[1][0]='x';
                        motion++;
                        box4->Picture->LoadFromFile("pictures/cross.bmp");
                        box4->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[1][0]=='n'){
                        if(round=='x'){
                                board[1][0]='x';
                                motion++;
                                box4->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");

                        }
                        else{
                                board[1][0]='o';
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                motion++;
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box4->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box5Click(TObject *Sender)
{
        if(alone==1){
                if(board[1][1]='n'){
                        board[1][1]='x';
                        motion++;
                        box5->Picture->LoadFromFile("pictures/cross.bmp");
                        box5->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[1][1]=='n'){
                        if(round=='x'){
                                board[1][1]='x';
                                motion++;
                                box5->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");

                        }
                        else{
                                board[1][1]='o';
                                motion++;
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box5->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box6Click(TObject *Sender)
{
        if(alone==1){
                if(board[1][2]='n'){
                        board[1][2]='x';
                        motion++;
                        box6->Picture->LoadFromFile("pictures/cross.bmp");
                        box6->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[1][2]=='n'){
                        if(round=='x'){
                                board[1][2]='x';
                                motion++;
                                box6->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");

                        }
                        else{
                                board[1][2]='o';
                                motion++;
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box6->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box7Click(TObject *Sender)
{
        if(alone==1){
                if(board[2][0]='n'){
                        board[2][0]='x';
                        motion++;
                        box7->Picture->LoadFromFile("pictures/cross.bmp");
                        box7->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[2][0]=='n'){
                        if(round=='x'){
                                board[2][0]='x';
                                motion++;
                                box7->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        else{
                                board[2][0]='o';
                                motion++;
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box7->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box8Click(TObject *Sender)
{
        if(alone==1){
                if(board[2][1]='n'){
                        board[2][1]='x';
                        motion++;
                        box8->Picture->LoadFromFile("pictures/cross.bmp");
                        box8->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[2][1]=='n'){
                        if(round=='x'){
                                board[2][1]='x';
                                motion++;
                                box8->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");

                        }
                        else{
                                board[2][1]='o';
                                motion++;
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box8->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::box9Click(TObject *Sender)
{
        if(alone==1){
                if(board[2][2]='n'){
                        board[2][2]='x';
                        motion++;
                        box9->Picture->LoadFromFile("pictures/cross.bmp");
                        box9->Enabled=false;
                }
                if(user()==1) Application->MessageBox("Cross wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='o';
                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                int i=computer();
                        if(board[0][0]=='o'){
                                box1->Picture->LoadFromFile("pictures/circle.bmp");
                                box1->Enabled=false;
                        }
                        if(board[0][1]=='o'){
                                box2->Picture->LoadFromFile("pictures/circle.bmp");
                                box2->Enabled=false;
                        }
                        if(board[0][2]=='o'){
                                box3->Picture->LoadFromFile("pictures/circle.bmp");
                                box3->Enabled=false;
                        }
                        if(board[1][0]=='o'){
                                box4->Picture->LoadFromFile("pictures/circle.bmp");
                                box4->Enabled=false;
                        }
                        if(board[1][1]=='o'){
                                box5->Picture->LoadFromFile("pictures/circle.bmp");
                                box5->Enabled=false;
                        }
                        if(board[1][2]=='o'){
                                box6->Picture->LoadFromFile("pictures/circle.bmp");
                                box6->Enabled=false;
                        }
                        if(board[2][0]=='o'){
                                box7->Picture->LoadFromFile("pictures/circle.bmp");
                                box7->Enabled=false;
                        }
                        if(board[2][1]=='o'){
                                box8->Picture->LoadFromFile("pictures/circle.bmp");
                                box8->Enabled=false;
                        }
                        if(board[2][2]=='o') {
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                box9->Enabled=false;
                        }
                        motion++;
                if(i==1) Application->MessageBox("Circle wins!","The end!");
                if(motion==9) Application->MessageBox("Draw!","The end!");
                round='x';
                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
        }
        if(afriend==1){
                if(board[2][2]=='n'){
                        if(round=='x'){
                                board[2][2]='x';
                                motion++;
                                box9->Picture->LoadFromFile("pictures/cross.bmp");
                                round='o';
                                roundpicture->Picture->LoadFromFile("pictures/circle.bmp");
                                if(user()==1)Application->MessageBox("Cross wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");

                        }
                        else{
                                board[2][2]='o';
                                motion++;
                                box9->Picture->LoadFromFile("pictures/circle.bmp");
                                round='x';
                                roundpicture->Picture->LoadFromFile("pictures/cross.bmp");
                                if(user2()==1) Application->MessageBox("Circle wins!","The end!");
                                if(motion==9) Application->MessageBox("Draw!","The end!");
                        }
                        box9->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::button3Click(TObject *Sender)
{
        box1->Picture->LoadFromFile("pictures/cross.bmp");
        box1->Enabled=false;
        box2->Picture->LoadFromFile("pictures/nothing.bmp");
        box2->Enabled=false;
        box3->Picture->LoadFromFile("pictures/circle.bmp");
        box3->Enabled=false;
        box4->Picture->LoadFromFile("pictures/circle.bmp");
        box4->Enabled=false;
        box5->Picture->LoadFromFile("pictures/circle.bmp");
        box5->Enabled=false;
        box6->Picture->LoadFromFile("pictures/cross.bmp");
        box6->Enabled=false;
        box7->Picture->LoadFromFile("pictures/nothing.bmp");
        box7->Enabled=false;
        box8->Picture->LoadFromFile("pictures/nothing.bmp");
        box8->Enabled=false;
        box9->Picture->LoadFromFile("pictures/cross.bmp");
        box9->Enabled=false;

        roundtext->Hide();
        roundpicture->Enabled=false;
        button1->Show();
        button2->Show();
        button3->Hide();

        for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                        board[i][j]='n';
                }
        }
        alone=0;
        afriend=0;
        motion=0;
        round='x';
}
//---------------------------------------------------------------------------

