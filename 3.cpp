#include <iostream>
#include <locale>
#include <stdlib.h>
using namespace std;
class Abonent{
private:
    int id;
    string surname;
    string number;
public:
    Abonent(int iid, string ssurname, string nnumber){
        id = iid;
        surname = ssurname;
        number = nnumber;
    };
    friend class Notebook;
};
class Notebook{
public:
    void change(Abonent &abon){
        cout << "You choose abonent ID: " << abon.id << "\n";
        cout << "Type new number:   ";
        getline(cin, abon.number);
    };
    void show(Abonent &abon){
        cout << "| ID = " << abon.id << " | ";
        cout << "Number: " << abon.number << " | ";
        cout << "Surname: " << abon.surname << " \n";
    };
};

int main(){
    Notebook a;
    Abonent nums[5]{
        Abonent(1, "Joestar", "89953456712"),
        Abonent(2, "Brando", "89291387654"),
        Abonent(3, "Kujo", "89283002010"),
        Abonent(4, "Higashikata", "89731209456"),
        Abonent(5, "Hirose", "89997088345")};
    a.show(nums[0]);
    a.change(nums[0]);
    for (int i=0; i<5; i++) a.show(nums[i]);
return 0;
};
