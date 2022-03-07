/**
 * UE 12.8
 */

#include <cassert>
#include <iostream>

#include "person.hpp"

int main() {
    Person p("Max Mustermann", "Erde");
    Student s("Mustermann Max", "TU WIEN", 1234, "TM");
    Employee e("Test", "Street 1", 4000.0, "jobName");

    cout << endl;
    p.print();
    cout << endl;
    s.print();
    cout << endl;
    e.print();
    cout << endl;

    p.setName("Test");
    assert(p.getName() == "Test");

    p.setAddress("Street 2");
    assert(p.getAddress() == "Street 2");

    assert(s.getStudentNumber() == 1234);

    s.setStudy("Test");
    assert(s.getStudy() == "Test");

    e.setSalery(1024.0);
    assert(e.getSalery() == 1024.0);

    e.setJob("new job");
    assert(e.getJob() == "new job");

    cout << "All tests passed!" << endl;
    return 0;
}