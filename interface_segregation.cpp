#include <iostream>
using namespace std;
class Boat{
    public:
        void steer(){
            cout << "steer" << '\n';
        }
        void steerleft(){
            cout << "steer Left" << '\n';
        }
        void steerright(){
            cout << "steer Right"<< '\n';
        }
};
class Car{
    public:
        void drive(){
            cout << "drive" << '\n';
        }
        void turnleft(){
            cout << "turn Left" << '\n';
        }
        void turnright(){
            cout << "turn Right" << '\n';
        }
};
class CarBoat : public Boat, public Car{//Two inheritance Class
    public:
};
int main(){
    Car car;
    Boat boat;
    CarBoat carboat;

    carboat.drive();
    carboat.steer();

    car.turnleft(); // can not steer

    boat.steerleft();//can not drive
}
/*Make class seperate through properties of class
if you need over than 2 class properties you can inheri two classes*/