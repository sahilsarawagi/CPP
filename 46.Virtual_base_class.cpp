# include <iostream>
using namespace std;
/* 
    Student----> Test
    Student----> sport
    Test---> result
    sport---> result
*/
class Student{
    protected:
    int roll_no;
    public :
    void set_number(int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"your roll no. is "<<roll_no<<endl;
    }
};                                                                                         
class Test :virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m,float p){
        maths=m;
        physics=p;
    }
    void print_marks(void){
        cout<<"Marks of physics is "<<physics<<endl;
        cout<<"Marks of maths is "<<maths<<endl;

    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"your PT score is "<<score<<endl;
    }
};
class Result: public Test,public Sports{
    private:
    float total;
    public :
    void display(void){
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};

int main(){
    Result sasuke;
    sasuke.set_number(21);
    sasuke.set_marks(42,96);
    sasuke.set_score(65);
    sasuke.display();

    return 0; 
}