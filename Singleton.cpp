#include <iostream>
#include <string>
using namespace std;

class Singleton{//From Class create only one Object 
    private:
        Singleton(string name_) { name = name_; }
        static Singleton* instance;
    public:
        string name;
        static Singleton* getInstance(string name){//you can only access Class using this static funtion
            if(instance != nullptr){
                return instance;
            }
            instance = new Singleton(name);
            return instance;
        }
};

Singleton *Singleton::instance = nullptr; // initialization instance pointer
int main()
{
    // Singleton* single = new Singleton;
    // Singleton single; you can not access both ways because constructor is private
    Singleton *Hoon = Singleton::getInstance("hoon");
    Singleton *Kris = Singleton::getInstance("kris");
    Singleton *Mary = Singleton::getInstance("mary");
    Singleton *Jhon = Singleton::getInstance("Jhon");//They look like individual Object

    cout << Hoon->name << '\n';
    cout << Kris->name << '\n';
    cout << Mary->name << '\n';
    cout << Jhon->name << '\n';
    //But it results All hoon that is All of Object is pointing same Object
}