#include <iostream>
#include <vector>
using namespace std;
class Observer{//It includes Depedency Inversion
    public:
        void virtual update() = 0;
};
class Cat : public Observer{
    public:
        void update(){
            cout << "meow" << '\n';
        }
};

class Dog : public Observer
{
public:
    void update()
    {
        cout << "bark" << '\n';
    }
};

class Owner{
    public:
        vector<Observer*> animal;
        Owner(){
        }
        void Register(Observer& Animal){
            animal.__emplace_back(&Animal);
        }
        void Notify(){//When event occured low Class operate function
            for(int i=0;i<animal.size();++i){
                animal[i]->update();
            }
        }
};
int main(){
    Owner owner;
    Cat cat;
    Dog dog;
    owner.Register(cat);
    owner.Register(dog);
    owner.Notify();
}