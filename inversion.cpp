#include <iostream>
#include <vector>
using namespace std;
class Animal{
    public:
        void virtual speak() = 0;
};
class Dog : public Animal{//virtual inheritance 
    public:
        void speak(){
            cout << "Bark" << '\n';
        }
};
class Cat : public Animal{ // virtual inheritance
public:
    void speak(){
        cout << "Meow" << '\n';
    }
};

// class Cow : public Animal{  // you just add Additional animal
// public:
//     void speak()
//     {
//         cout << "um mewo" << '\n';
//     }
};

class Zoo{//Dependency in abstract class Animal if you add animal sheep or cow you don't need to modify Zoo or Animal class
    public:
        vector<Animal*> arr;
        void Add_Animal(Animal &animal){
            arr.__emplace_back(&animal);
        }
        void Speak_All(){
            for (int i = 0;i<arr.size();++i){
                arr[i]->speak();
            }
        }
};
int main(){

    Dog dog;
    Cat cat;
    Zoo zoo;
    // Cow cow;
    zoo.Add_Animal(cat);
    zoo.Add_Animal(dog);
    // zoo.Add_Animal(cow);
    zoo.Speak_All();
}