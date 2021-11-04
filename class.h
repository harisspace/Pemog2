#ifndef CLASS_H
#define CLASS_H

class Vehicle {
    private:
        string kind;
        string model;
        string name;
        int year;
    public:
        Vehicle(string kind) {
            this->kind = kind;
        };
        
        string getModel() {
            return this->model;
        }
        
        void setModel(string model) {
            this->model = model;
        }
        
        string getName() {
            return this->name;
        }
        
        void setName(string name) {
            this->name = name;
        }
        
        int getYear() {
            return this->year;
        }
        
        void setYear(int year) {
            this->year = year;
        }
        
        void displayAll() {
            cout << "Jenis kendaraan: " << this->kind << endl;
            cout << "Model kendaraan: " << this->model << endl;
            cout << "Nama kendaraan: " << this->name << endl;
            cout << "Tahun kendaraan realese: " << this->year << endl;
        };
};
