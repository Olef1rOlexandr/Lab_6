#include <iostream>
using namespace std;


struct Phone
{
    string model;
    int battarery = 3000;
    float price;
    bool i_have = false;

};
void print(Phone ph);

int main()
{

    Phone xiaomi;
    xiaomi.battarery = 4000;
    xiaomi.model = "Redmi 4x";
    xiaomi.price = 2700;

    Phone iphone;
    iphone.price = 25000;
    iphone.model = "11 Pro Max";
    iphone.i_have = true;



    cout << "\n";
    print(xiaomi);
    print(iphone);
}
void print(Phone ph)
{
    cout << "//////////////////////////";
    cout << "\n model is " << ph.model;
    cout << "\n price is: " << ph.price << "$";
    if (!ph.i_have)
        cout << "\nThis phone is not in your collection";

}