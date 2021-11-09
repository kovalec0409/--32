#include <iostream>
#include <locale>
using namespace std;

class bus{
private:
    char *FIO, *mapka;
    int Homep_avto,Homep_map,god_ekcplyatacii,probeg;
public:
    bus(char *FIO_,char *mapka_,int Homep_mashini,int Homep_marshryta,int god,int probeg_){
        FIO=FIO_;
        mapka=mapka_;
        Homep_avto=Homep_mashini;
        Homep_map=Homep_marshryta;
        god_ekcplyatacii=god;
        probeg=probeg_;
        }
    void show(){
    cout<<"FIO="<<FIO<<endl<<"mapka="<<mapka<<endl<<"Homep avto="<<Homep_avto<<endl<<"god ekcplyatacii="<<god_ekcplyatacii<<endl<<"probeg="<<probeg<<endl<<endl;
    }
    void BiBod(){
    if(Homep_map==2){
        show();
    }
    }
    void god(){
    if(god_ekcplyatacii>10){
        show();
    }
    }
    void probegi(){
    if(probeg>10000){
        show();
    }
    }
};

int main(){
    bus massiv[5]{
    bus("Petrov A.O.","Toyota",1,2,30,5000),
    bus("Ivanov D.K","BMW",2,4,5,10000),
    bus("Serkov I.V","Lada",3,2,20,2000),
    bus("Sidorov K.I.","Honda",4,5,10,15000),
    bus("Zelenov P.S","Volga",5,3,7,7000)
    };
    for (int i=0;i<5;i++){
        massiv[i].show();
    }
    cout<<endl<<"cnicok gde Homep marshryta=2"<<endl<<endl;
    for (int i=0;i<5;i++){
        massiv[i].BiBod();
    }
    cout<<endl<<"cnicok gde god eksplyatacii>10 let"<<endl<<endl;
    for(int i=0;i<5;i++){
        massiv[i].god();
    }
    cout<<endl<<"cnicok gde probeg>10000"<<endl<<endl;
    for(int i=0;i<5;i++){
        massiv[i].probegi();
    }
}
