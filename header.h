#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#define firstCh(L) (L).firstCh
#define first(L) (L).first
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info
#define last(P) (P).last
#define lastCh(P) (P).lastCh

using namespace std;
typedef struct elmMhs *adrMhs;
typedef struct elmPres *adrPres;
typedef struct elmChild *adrChild;
struct infoMhs{
    string nama;
    string nim;
    string jurusan;
};
struct infoPres{
    string type;
    string nama;
};
struct elmMhs{
    infoMhs info;
    adrMhs next;
    adrChild firstCh;
};

struct elmPres{
    infoPres info;
    adrPres next;
    adrPres prev;
};

struct elmChild{
    adrPres info;
    adrChild next;
    adrChild prev;
};

struct listMhs{
    adrMhs first;

};

struct listPres{
    adrPres first;
    adrPres last;
};

struct listChild{
    adrChild lastCh;
};

adrMhs createMhs(infoMhs i);
void createMhs_list(listMhs &List);
void insertMhs_first(listMhs &List, adrMhs mhs);
void deleteMhs_first(listMhs &List,adrMhs &mhs);

adrPres createPres(infoPres i);
void createPres_list(listPres &List);
void insertPres_first(listPres &List, adrPres mhs);
void deletePres_first(listPres &List, adrPres &mhs);

adrChild createChild(adrPres ch);
void createChild_list(listChild &List);
void addChild(listMhs &List, listChild &lCh, string x, adrChild ch);
void deleteChild_first(listChild &List, elmMhs &lMhs, adrChild &ch);

#endif // HEADER_H_INCLUDED
