#include "header.h"


int main()
{
    listMhs lMhs;
    createMhs_list(lMhs);
    infoMhs mhs;
    mhs.nama = "fariz";
    mhs.jurusan = "TI";
    mhs.nim = "xxxx";
    adrMhs aMhs = createMhs(mhs);
    insertMhs_first(lMhs, aMhs);

    listPres lPres;
    createPres_list(lPres);
    infoPres pres;
    pres.type = "NASIONAL";
    pres.nama = "Juara 1 GEMASTIK 2023";
    adrPres aPres = createPres(pres);
    insertPres_first(lPres, aPres);

    listChild lCh;
    createChild_list(lCh);
    insertChild_first(lCh, aPres);

    mhs.nama = "pr";
    mhs.jurusan = "TI";
    mhs.nim = "xxxx";
    aMhs = createMhs(mhs);
    insertMhs_first(lMhs, aMhs);
    cout << endl << "Hello world! "<<info(first(lMhs)).nama << " " << info(firstCh(lCh)).nama << endl;
//    listPres lPres;
//    createPres_list(lPres);
//    infoPres pres;
    pres.type = "NASIONAL";
    pres.nama = "Juara 2 2023";
    aPres = createPres(pres);
    insertPres_first(lPres, aPres);
//
//    listChild lCh;
    createChild_list(lCh);
    insertChild_first(lCh, aPres);
    cout << endl << "Hello world! "<< " " << info(firstCh(lCh)).nama << info(first(lMhs)).nama;
    return 0;
}
