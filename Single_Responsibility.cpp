#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cat{
    private:
        int age;
        string name;
    public:
        // int age;
        // string name;
        Cat(int age_,string name_): age(age_) , name(name_) {}
        void eat() {} // Cat's responsibility
        void walk() {} // Cat's responsibility
        void sepak() {} // Cat's responsibility
        pair<int,string> represent(){
            return {age,name};
        }
        /* Don't use code like this because print is not Cat Class's responsibility
        void represent(){
            cout << age << ' ' << name << '\n';
        }
        */
};
int main(){
    Cat kitty(3, "angle");
    cout << kitty.represent().first<<' '<<kitty.represent().second;//Just Print Like This
}