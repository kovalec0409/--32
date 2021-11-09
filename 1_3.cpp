#include <iostream>
#include <locale>
using namespace std;
class Stock{
private:
    char *Imya;
    int kol_akciy;
    float cena, obshaya_cena;
public:
    Stock(char *Hazvanie,int kolichestvo, float ctoimoctb){
        Imya=Hazvanie;
        kol_akciy=kolichestvo;
        cena=ctoimoctb;
        set_tot();
    }
    void set_tot(){
    obshaya_cena=kol_akciy*cena;}
    void show(){
    cout<<"Hazvanie="<<Imya<<endl<<"Koli4ectBo="<<kol_akciy<<endl<<"Ctoimoctb="<<cena<<endl<<"symma="<<obshaya_cena<<endl<<endl;
    }
    void buy(int y){
    if(y>0){
        kol_akciy=kol_akciy+y;
        set_tot();
    }
    }
    void sell(int x){
    if(x>0&&kol_akciy>=x){
        kol_akciy=kol_akciy-x;
        set_tot();
    }
    }
    void update(float z){
    cena=z;
    set_tot();}
    ~Stock(){}
};

int main(){
    Stock massiv[5]{
    Stock("Apple",100,500),
    Stock("Netflix",50,100),
    Stock("Amazon",200,1000),
    Stock("Tesla",400,800),
    Stock("Avast",50,200)};
    for (int i;i<5;i++){
        massiv[i].show();
    }
}
