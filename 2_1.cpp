#include <iostream>
#include <locale>
using namespace std;
class Test{
private:
    int W;
    void Z(){
        cout << "Eto zakrytaya funcia klassa Test!" << "\n";
    };
public:
    Test(int a=1){
        W=a;
    };
    friend void fun(Test &ptr);
};
void fun(Test &ptr){
    cout << " W = " << ptr.W << "\n";
    ptr.Z();
};

int main(){
    Test a;
    fun(a);
return 0;
};