#include <iostream>
#include "Student.h"
#include "Aspirant.h"

using namespace std;

int main()
{

    Student student("Іван Іванович", 20, "Київський університет", "Право");
    student.displayInfo();

    cout << endl;

    Aspirant aspirant("Вероніка Демчук", 24, "Київський університет", "Інформатика", "Розробка програмного забезпечення");
    aspirant.displayInfo();

    cout << "\n\n"
}