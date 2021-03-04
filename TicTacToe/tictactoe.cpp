#include <iostream>
using namespace std;

class kolko_i_krzyzyk{ // sprawdzone pozytywnie
    public: char plansza[3][3];

    public: kolko_i_krzyzyk(){ //konstruktor bezparametrowy
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                plansza[i][j]=' ';
            }
        }
    }

    public: void wyswietl_plansze();
    public: int ruch_uzytkownika();
    public: int przebieg_gry();
    public: int ruch_komputera();
    public: int wygrana();
    public: int blok();
    public: int widelec();
    public: int blokowanie_widelca();
    public: int srodek();
    public: int przeciwny_rog();
    public: int pusty_rog();
    public: int pusta_strona();
};

// komputer - O
// uzytkownik - X

void kolko_i_krzyzyk::wyswietl_plansze(){ // sprawdzone pozytywnie
    cout<<endl;
    cout<<plansza[0][0]<<" | "<<plansza[0][1]<<" | "<<plansza[0][2]<<endl;
    cout<<plansza[1][0]<<" | "<<plansza[1][1]<<" | "<<plansza[1][2]<<endl;
    cout<<plansza[2][0]<<" | "<<plansza[2][1]<<" | "<<plansza[2][2]<<endl;
    cout<<endl;
}

int kolko_i_krzyzyk::wygrana(){ // sprawdzone pozytywnie
// komputer szuka mozliwosci wygrania
// petla 1 - sprawdzona pozytywnie
    for(int i=0; i<3; i++){
        int licznik=0, x=0, y=0, z=0;
        for(int j=0; j<3; j++){
            if(plansza[i][j]=='O') licznik++;
            if(plansza[i][j]=='X') z++;
            if(plansza[i][j]==' '){
                x=i;
                y=j;
            }
        }
        if(licznik==2 && z==0){
            plansza[x][y]='O';
            return 1; // wygrana komputera - poziom
        }
    }
// petla 2 - sprawdzona pozytywnie
    for(int j=0; j<3; j++){
        int licznik=0, x=0, y=0, z=0;
        for(int i=0; i<3; i++){
            if(plansza[i][j]=='O') licznik++;
            if(plansza[i][j]=='X') z++;
            if(plansza[i][j]==' '){
                x=i;
                y=j;
            }
        }
        if(licznik==2 && z==0){
            plansza[x][y]='O';
            return 1; // wygrana komputera - pion
        }
    }
// petla 3 - sprawdzona pozytywnie
    int licznik=0, x=0, y=0, z=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                if(plansza[i][j]=='O') licznik++;
                if(plansza[i][j]=='X') z++;
                if(plansza[i][j]==' '){
                    x=i;
                    y=j;
                }
            }
        }
    }
    if(licznik==2 && z==0){
        plansza[x][y]='O';
        return 1; // wygrana komputera - przekatna
    }
// petla 4 - sprawdzona pozytywnie
    licznik=0, x=0, y=0, z=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i+j==2){
                if(plansza[i][j]=='O') licznik++;
                if(plansza[i][j]=='X') z++;
                if(plansza[i][j]==' '){
                    x=i;
                    y=j;
                }
            }
        }
    }
    if(licznik==2 && z==0){
        plansza[x][y]='O';
        return 1; // wygrana komputera - przekatna
    }

    return 0;
}

int kolko_i_krzyzyk::blok(){ // sprawdzone pozytywnie
//komputer szuka pola, dzieki ktoremu uzytkownik moze wygrac
// petla 1 - sprawdzona pozytywnie
   for(int i=0; i<3; i++){
        int licznik=0, x=0, y=0, z=0;
        for(int j=0; j<3; j++){
            if(plansza[i][j]=='X') licznik++;
            if(plansza[i][j]=='O') z++;
            if(plansza[i][j]==' '){
                x=i;
                y=j;
            }
        }
        if(licznik==2 && z==0){
            plansza[x][y]='O';
            return 1; // poziom
        }
    }
// petla 2 - sprawdzona pozytywnie
    for(int j=0; j<3; j++){
        int licznik=0, x=0, y=0, z=0;
        for(int i=0; i<3; i++){
            if(plansza[i][j]=='X') licznik++;
            if(plansza[i][j]=='O') z++;
            if(plansza[i][j]==' '){
                x=i;
                y=j;
            }
        }
        if(licznik==2 && z==0){
            plansza[x][y]='O';
            return 1; // pion
        }
    }
// petla 3 - sprawdzona pozytywnie
    int licznik=0, x=0, y=0, z=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                if(plansza[i][j]=='X') licznik++;
                if(plansza[i][j]=='O') z++;
                if(plansza[i][j]==' '){
                    x=i;
                    y=j;
                }
            }
        }
    }
    if(licznik==2 && z==0){
        plansza[x][y]='O';
        return 1; // przekatna
    }
// petla 4 - sprawdzona pozytywnie
    licznik=0, x=0, y=0, z=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i+j==2){
                if(plansza[i][j]=='X') licznik++;
                if(plansza[i][j]=='O') z++;
                if(plansza[i][j]==' '){
                    x=i;
                    y=j;
                }
            }
        }
    }
    if(licznik==2 && z==0){
        plansza[x][y]='O';
        return 1; // przekatna
    }

    return 0;
}

int kolko_i_krzyzyk::widelec(){
    int puste=0, pelne=0, x=0, y=0;
    if(plansza[0][0]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[0][0]=='O') pelne++;
    if(plansza[2][0]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[2][0]=='O') pelne++;
    if(plansza[0][2]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[0][2]=='O') pelne++;
    if(puste==1 && pelne==2){
        plansza[x][y]='O';
        return 1;
    }

    puste=0, pelne=0, x=0, y=0;
    if(plansza[0][2]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[0][2]=='O') pelne++;
    if(plansza[0][0]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[0][0]=='O') pelne++;
    if(plansza[2][2]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[2][2]=='O') pelne++;
    if(puste==1 && pelne==2){
        plansza[x][y]='O';
        return 1;
    }

    puste=0, pelne=0, x=0, y=0;
    if(plansza[2][2]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[2][2]=='O') pelne++;
    if(plansza[2][0]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[2][0]=='O') pelne++;
    if(plansza[0][2]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[0][2]=='O') pelne++;
    if(puste==1 && pelne==2){
        plansza[x][y]='O';
        return 1;
    }

    puste=0, pelne=0, x=0, y=0;
    if(plansza[0][0]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[0][0]=='O') pelne++;
    if(plansza[2][0]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[2][0]=='O') pelne++;
    if(plansza[2][2]==' '){
        puste++;
        x=0;
        y=0;
    }
    if(plansza[2][2]=='O') pelne++;
    if(puste==1 && pelne==2){
        plansza[x][y]='O';
        return 1;
    }

    return 0;
}

int kolko_i_krzyzyk::blokowanie_widelca(){
    if((plansza[0][0]=='X' && plansza[2][2]=='X')||(plansza[0][2]=='X' && plansza[2][0]=='X')){
        plansza[0][1]='O';
        return 1; // gra trwa
    }
}

int kolko_i_krzyzyk::srodek(){
    if(plansza[1][1]==' '){
        plansza[1][1]='O';
        return 1;
    }

    return 0;
}

int kolko_i_krzyzyk::przeciwny_rog(){
    if(plansza[0][0]=='X' && plansza[2][2]==' '){
        plansza[2][2]='O';
        return 1;
    }

    if(plansza[0][2]=='X' && plansza[2][0]==' '){
        plansza[2][0]='O';
        return 1;
    }

    if(plansza[2][2]=='X' && plansza[0][0]==' '){
        plansza[0][0]='O';
        return 1;
    }

    if(plansza[2][0]=='X' && plansza[0][2]==' '){
        plansza[0][2]='O';
        return 1;
    }

    return 0;
}

int kolko_i_krzyzyk::pusty_rog(){
    if(plansza[0][0]==' '){
        plansza[0][0]='O';
        return 1;
    }

    if(plansza[0][2]==' '){
        plansza[0][2]='O';
        return 1;
    }

    if(plansza[2][2]==' '){
        plansza[2][2]='O';
        return 1;
    }

    if(plansza[2][0]==' '){
        plansza[2][0]='O';
        return 1;
    }

    return 0;
}

int kolko_i_krzyzyk::pusta_strona(){
    if(plansza[0][1]==' '){
        plansza[0][1]='O';
        return 1;
    }

    if(plansza[1][2]==' '){
        plansza[1][2]='O';
        return 1;
    }

    if(plansza[1][0]==' '){
        plansza[1][0]='O';
        return 1;
    }

    if(plansza[2][1]==' '){
        plansza[2][1]='O';
        return 1;
    }

    return 0;
}

int kolko_i_krzyzyk::ruch_uzytkownika(){ // sprawdzone pozytywnie
    int n, m;
    cout<<"Podaj wartosci pola, do ktorego chcesz wpisac X: "<<endl;
    cin>>n>>m;
// warunek 1 - sprawdzony pozytywnie
    if(n>3 || n<1 || m>3 || m<1){
        cout<<"Podales zly zakres!"<<endl;
        return 0; // blad
    }
// warunek 2 - sprawdzony pozytywnie
    if(plansza[n-1][m-1]!=' '){
       cout<<"Pole jest juz zajete!"<<endl;
       return 0; // blad
    }
// sprawdzony pozytywnie
    plansza[n-1][m-1]='X'; // zapisanie ruchu uzytkownika
// petla 1 - sprawdzony pozytywnie
    for(int i=0; i<3; i++){
        int licznik=0;
        for(int j=0; j<3; j++){
            if(plansza[i][j]=='X') licznik++;
        }
        if(licznik==3) return -1; // wygrana uzytkownika - poziom
    }
// petla 2 - sprawdzony pozytywnie
    for(int j=0; j<3; j++){
        int licznik=0;
        for(int i=0; i<3; i++){
            if(plansza[i][j]=='X') licznik++;
        }
        if(licznik==3) return -1; // wygrana uzytkownika - pion
    }
// petla 3 - sprawdzony pozytywnie
    int licznik=0, x=0, y=0, z=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                if(plansza[i][j]=='X') licznik++;
            }
        }
    }
    if(licznik==3)return -1; // wygrana uzytkownika - przekatna
// petla 4 - sprawdzony pozytywnie
    licznik=0, x=0, y=0, z=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i+j==2){
                if(plansza[i][j]=='X') licznik++;
            }
        }
        if(licznik==3) return -1; // wygrana uzytkownika - przekatna
    }

    return 1; // gra trwa dalej
}

int kolko_i_krzyzyk::ruch_komputera(){
    if(wygrana()==1){
            //cout<<"wygrana"<<endl;
            return 1; // return 1 - wygrana komputera
    }
    if(blok()==1){
            //cout<<"blok"<<endl;
            return 0; // gra trwa
    }
    if(widelec()==1){
            //cout<<"widelec"<<endl;
            return 0; // gra trwa
    }
    if(blokowanie_widelca()==1){
            //cout<<"blokowanie_widelca"<<endl;
            return 0; // gra trwa
    }
    if(srodek()==1){
            //cout<<"srodek"<<endl;
            return 0; // gra trwa
    }
    if(przeciwny_rog()==1){
            //cout<<"przeciwny_rog"<<endl;
            return 0; // gra trwa
    }
    if(pusty_rog()==1){
            //cout<<"pusty_rog"<<endl;
            return 0; // gra trwa
    }
    if(pusta_strona()==1){
            //cout<<"pusta_strona"<<endl;
            return 0; // gra trwa
    }
}

int kolko_i_krzyzyk::przebieg_gry(){ // sprawdzone pozytywnie
    int licznik=0;

    while(licznik<5){ // gra zakonczy sie przy braku wolnych miejsc na planszy
        licznik++;

        int x=ruch_uzytkownika(); // wykonuje sie ruch uzytkownika
        while(x==0){ // sprawdzam blad, bez wykonywania ruchu uzytkownika
                x=ruch_uzytkownika(); // blad pola wybranego przez uzytkownika
        }

        if(x==-1){ // sprawdzam wygrana uzytkownika
                wyswietl_plansze();
                cout<<"Wygrales!"<<endl;
                return 0; // wygrana - koniec gry
        }

        wyswietl_plansze();

        if(ruch_komputera()==1){ // ruch komputera z jednoczesnym sprawdzeniem wygranej
                wyswietl_plansze();
                cout<<"Przegrales!"<<endl;
                return 0; // wygrana - koniec gry
        }
        wyswietl_plansze();
    }

    cout<<"Koniec gry!"<<endl;
    return 0;
}

int main(){ // sprawdzone pozytywnie
    kolko_i_krzyzyk kolko_i_krzyzyk;
    kolko_i_krzyzyk.przebieg_gry();

    return 0;
}
