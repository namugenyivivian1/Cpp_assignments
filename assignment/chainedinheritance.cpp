#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

    public:
        Person(string n) {
                name = n;
                    }

                        void displayPerson() {
                                cout << "Name: " << name << endl;
                                    }
                                    };

                                    // Student inherits from Person
                                    class Student : public Person {
                                    protected:
                                        int studentID;

                                        public:
                                            Student(string n, int id) : Person(n) {
                                                    studentID = id;
                                                        }

                                                            void displayStudent() {
                                                                    displayPerson();
                                                                            cout << "Student ID: " << studentID << endl;
                                                                                }
                                                                                };

                                                                                // EngineeringStudent inherits from Student
                                                                                class EngineeringStudent : public Student {
                                                                                private:
                                                                                    string course;

                                                                                    public:
                                                                                        EngineeringStudent(string n, int id, string c)
                                                                                                : Student(n, id) {
                                                                                                        course = c;
                                                                                                            }

                                                                                                                void displayEngineering() {
                                                                                                                        displayStudent();
                                                                                                                                cout << "Course: " << course << endl;
                                                                                                                                    }
                                                                                                                                    };

                                                                                                                                    int main() {
                                                                                                                                        EngineeringStudent s1("Alex", 101, "Electrical Engineering");

                                                                                                                                            s1.displayEngineering();

                                                                                                                                                return 0;
                                                                                                                                                }