#include "header.h"
adrMhs createMhs(infoMhs i){
    adrMhs adr = new elmMhs;
    info(adr) = i;
    return adr;
};
void createMhs_list(listMhs &List){
    first(List) = NULL;
};
void insertMhs_first(listMhs &List, adrMhs mhs){
    if(first(List)==NULL){
        first(List) = mhs;
    }else{
        next(mhs) = first(List);
        first(List) = mhs;
    }
};
void deleteMhs_first(listMhs &List,adrMhs &mhs){
    if(first(List)==NULL){
        cout << "List kosong" <<endl;
    }else if(next(first(List))==NULL){
        mhs = first(List);
        first(List) = NULL;
    }else{
        mhs = first(List);
        first(List) = next(first(List));
        next(mhs) = NULL;
    }
};

adrPres createPres(infoPres i){
    adrPres adr = new elmPres;
    info(adr) = i;
    return adr;
};
void createPres_list(listPres &List){
    first(List) = NULL;
    last(List) = NULL;
};
void insertPres_first(listPres &List, adrPres pres){
    if(first(List)==NULL){
        first(List) = pres;
        last(List) = pres;
    }else{
        next(pres) = first(List);
        first(List)= next(pres);
        next(last(List)) = first(List);
    }
};
void deletePres_first(listPres &List,adrPres &pres){
    if(first(List)==NULL){
        cout << "List kosong" <<endl;
    }else if(first(List)==last(List)){
        first(List) = NULL;
        last(List) = NULL;
    }else{
        pres = first(List);
        first(List) = next(first(List));
        next(pres) = NULL;
        next(last(List)) = first(List);
    }
};

void createChild_list(listChild &List){
    firstCh(List) = NULL;
    lastCh(List) = NULL;
};

void insertChild_first(listChild &List, adrPres ch){
    if(firstCh(List)==NULL){
        firstCh(List) = ch;
        lastCh(List) = ch;
    }else{
        next(ch) = firstCh(List);
        next(lastCh(List)) = ch;
        firstCh(List) = ch;

//        next(ch) = firstCh(List);
//        firstCh(List)= next(ch);
//        next(lastCh(List)) = firstCh(List);
    }
};

void deleteChild_first(listChild &List,adrPres &ch){
    if(firstCh(List)==NULL){
        cout << "List kosong" <<endl;
    }else if(firstCh(List)==lastCh(List)){
        ch = firstCh(List);
        firstCh(List) = NULL;
        lastCh(List) = NULL;
    }else{
        ch = firstCh(List);
        firstCh(List) = next(firstCh(List));
        next(ch) = NULL;
        next(lastCh(List)) = firstCh(List);
    }
};

