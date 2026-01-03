#include<iostream>
using namespace std;
class Car {
    private:
    string brand;
    string model;
    int year;

    public:
    // Constructor
    Car(string b, string m, int y) {
        this->brand = b;
        this->model = m;
        this->year = y;
    }
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
    void honk() {
        cout << "Beep Beep!" << endl;
    }
};
int main() {
    
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Honda", "Civic", 2019);

    car1.displayInfo();
    car1.honk();
    car2.displayInfo();
    car2.honk();

    return 0;
}