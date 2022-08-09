# include <iostream>
using namespace std;
class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student:: set_roll_number(int r){
    roll_number=r;
}
void Student:: get_roll_number(void){
    cout<<"Roll number of the student is "<<roll_number<<endl;
}
class Exam: public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks();
};
void Exam:: set_marks(float m,float p){
    maths=m;
    physics=p;
}
void Exam:: get_marks(){
    cout<<"marks of maths "<<maths<<endl;
    cout<<"marks of pyscis "<<physics<<endl;
}
class Result: public Exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }

};
int main(){
    Result sasuke;
    sasuke.set_roll_number(420);
    sasuke.set_marks(25,84);
    sasuke.display();
/*Notes
If we are inheriting B form A and C from B:[A--->B--->C]
1. A is the base for B and B is the base class for C
2. A-->B-->C is called Inheritance Path 
*/
    
    return 0;

}