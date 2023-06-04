#include "employee.h"
#include <iostream>

// Default constructor
Employee::Employee() {
    id = "";
    name = "";
    age = 0;
    designation = "";
    salary = 0.0;
    present = false;
}

// Parameterized constructor
Employee::Employee(const std::string& name, int age, const std::string& designation, double salary) {
    id = "";
    this->name = name;
    this->age = age;
    this->designation = designation;
    this->salary = salary;
    present = false;
}

// Getter for employee ID
std::string Employee::getId() const {
    return id;
}

// Getter for name
std::string Employee::getName() const {
    return name;
}

// Setter for name
void Employee::setName(const std::string& name) {
    this->name = name;
}

// Getter for age
int Employee::getAge() const {
    return age;
}

// Setter for age
void Employee::setAge(int age) {
    this->age = age;
}

// Getter for designation
std::string Employee::getDesignation() const {
    return designation;
}

// Setter for designation
void Employee::setDesignation(const std::string& designation) {
    this->designation = designation;
}

// Getter for salary
double Employee::getSalary() const {
    return salary;
}

// Setter for salary
void Employee::setSalary(double salary) {
    this->salary = salary;
}

// Getter for present status
bool Employee::isPresent() const {
    return present;
}

// Setter for present status
void Employee::markPresent(bool present) {
    this->present = present;
}

// Generate employee ID
void Employee::generateId() {
    // Generate a unique ID based on some logic
    // You can implement your own logic here, such as using timestamps or a combination of name and age
    // For simplicity, a random ID is generated here
    id = "EMP" + std::to_string(rand() % 1000);
}

// Display employee details
void Employee::display() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Designation: " << designation << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Present: " << (present ? "Yes" : "No") << std::endl;
}
