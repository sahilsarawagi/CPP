# include <iostream>
using namespace std;
typedef struct employee
{
    int id;
    float salary;
    char favchar;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};



int main(){
cout<<"by using struct"<<endl;
employee sahil;
sahil.salary=5555;
sahil.id=5;
sahil.favchar='s';
cout<<"sahil's salary is "<<sahil.salary<<endl;
cout<<"sahil's employee id is "<<sahil.id<<endl;
cout<<"sahil's favchar is "<<sahil.favchar<<endl;

employee billu;
billu.salary=50000000;
billu.id=45;
billu.favchar='b';
cout<<"billu's salary is "<<billu.salary<<endl;
cout<<"billu's employee id is "<<billu.id<<endl;
cout<<"billu's favchar is "<<billu.favchar<<endl;
        
ep shera;
shera.salary=10200000;
shera.id=58;
shera.favchar='a';
cout<<"shera's salary is "<<shera.salary<<endl;
cout<<"shera's employee id is "<<shera.id<<endl;
cout<<"shera's favchar is "<<shera.favchar<<endl;
        
cout<<"using union"<<endl;
union money m1;
m1.rice=55;
// m1.pounds=44;
cout<<m1.rice<<endl;

cout<<"using enum"<<endl;
    enum Meal{breakfast,lunch,dinner};
    Meal m7=breakfast;
    cout<<m7<<endl;
    cout<<breakfast<<endl;
    cout<<dinner<<endl;
    cout<<lunch<<endl;


    return 0;
}