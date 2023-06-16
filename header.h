#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#define firstCh(L) (L).firstCh
#define first(L) (L).first
#define next(P) (P)->next
#define info(P) (P)->info
#define last(P) (P).last
#define lastCh(P) (P).lastCh

using namespace std;
typedef struct elmMhs *adrMhs;
typedef struct elmPres *adrPres;
//typedef struct elmChild *adrChild;
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
    adrPres child;
    adrMhs next;
};

struct elmPres{
    infoPres info;
    adrPres next;
};

struct elmChild{
    elmPres info;
    elmPres next;
    elmPres prev;
};

struct listMhs{
    adrMhs first;
};

struct listPres{
    adrPres first;
    adrPres last;
};

struct listChild{
    adrPres firstCh;
    adrPres lastCh;
};

adrMhs createMhs(infoMhs i);
void createMhs_list(listMhs &List);
void insertMhs_first(listMhs &List, adrMhs mhs);
void deleteMhs_first(listMhs &List,adrMhs &mhs);

adrPres createPres(infoPres i);
void createPres_list(listPres &List);
void insertPres_first(listPres &List, adrPres mhs);
void deletePres_first(listPres &List, adrPres &mhs);

void createChild_list(listChild &List);
void insertChild_first(listChild &List, adrPres ch);
void deleteChild_first(listChild &List, adrPres &ch);
#endif // HEADER_H_INCLUDED
