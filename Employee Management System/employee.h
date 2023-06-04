#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string id;
    std::string name;
    int age;
    std::string designation;
    double salary;
    bool present;

public:
    // Constructors
    Employee();
    Employee(const std::string& name, int age, const std::string& designation, double salary);

    // Getters and Setters
    std::string getId() const;
    std::string getName() const;
    void setName(const std::string& name);
    int getAge() const;
    void setAge(int age);
    std::string getDesignation() const;
    void setDesignation(const std::string& designation);
    double getSalary() const;
    void setSalary(double salary);
    bool isPresent() const;
    void markPresent(bool present);

    // Other member functions
    void display() const;
    void generateId();
};

#endif
