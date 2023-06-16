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

void createChild_list(listChild &List, elmMhs &lMhs){
    firstCh(lMhs) = NULL;
    lastCh(List) = NULL;
};

adrChild createChild(adrPres pr) {
    adrChild ch = new elmChild;
    info(ch) = pr;
    return ch;
}

void addChild(listMhs &List, listChild &lCh, string nim, adrChild ch) {
    adrMhs x = first(List);
    while(next(x)!=NULL && nim != info(x).nim) {
        x = next(x);
    }
    if (x != NULL && firstCh(x) == NULL) {
        firstCh(x) = ch;
        next(ch) = lastCh(lCh);
    } else if (x != NULL && firstCh(x) != NULL) {
        next(lastch(lCh)) = ch;
        prev(ch) = lastCh(lCh);
        last(lCh) = ch;
    }
}


void deleteChild_first(listChild &List, adrChild &ch, elmMhs &lMhs) {
    if (firstCh(lMhs)==NULL) {
        ch = NULL;
        cout<<"List Kosong"<<endl;
    } else if (firstCh(lMhs)==lastCh(List)) {
        ch = firstCh(lMhs);
        firstCh(lMhs) = NULL;
        lastCh(List) = NULL;
    } else {
        ch = firstCh(lMhs);
        firstCh(lMhs) = next(firstCh(lMhs));
        next(ch) = NULL;
    }
}


