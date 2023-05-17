#include "DynamicArrayTemplates.h"
#include "Personaje.h"


int main(){
    // DynamicArray de enteros
    DynamicArray<int> intArray;
    intArray.push_back(10);
    intArray.push_back(20);
    intArray.print();

    // DynamicArray de floats
    DynamicArray<float> floatArray;
    floatArray.push_back(3.14);
    floatArray.push_back(4.325);
    floatArray.print();

    // DynamicArray de strings
    DynamicArray<string> stringArray;
    stringArray.push_back("Hola");
    stringArray.push_back("amigo");
    stringArray.print();

    // DynamicArray de clase 
    DynamicArray<Personaje> personArray;
    Personaje p1("Aurora", "Elfa", "Maga", "Femenino", 170);
    Personaje p2("Backhand", "Orco", "Guerrero", "Masculino", 142);
    Personaje p3("Zephyr", "Humano", "Ladrón", "Masculino", 180);
    Personaje p4("Saphira", "Dragón", "Guerrera", "Femenino", 220);
    Personaje p5("Lydia", "Nigromante", "Nigromante", "Femenino", 160);
    personArray.push_back(p1);
    personArray.push_back(p2);
    personArray.push_back(p3);
    personArray.push_back(p4);
    personArray.push_back(p5);
    for (int i = 0; i < personArray.getSize(); i++) {
        cout << "Name: " << personArray[i].getName() << endl;
        cout << "Species: " << personArray[i].getSpecies() << endl;
        cout << "Type: " << personArray[i].getType() << endl;
        cout << "Gender: " << personArray[i].getGender() << endl;
        cout << "Height: " << personArray[i].getHigh() << " cm" << endl;
        cout << endl;
    }
}