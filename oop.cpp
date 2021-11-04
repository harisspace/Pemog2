#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <class.h>

using namespace std;

int main() {
    Vehicle* vehicle = new Vehicle("Car");
    
    vehicle->setModel("Super Car");
    vehicle->setName("Ferrari");
    vehicle->setYear(2019);
    vehicle->displayAll();
    return 0;
}
