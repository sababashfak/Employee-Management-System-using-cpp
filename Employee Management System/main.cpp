#include "employee.h"
#include <iostream>
#include <vector>

// Function to add a new employee to the system
void addEmployee(std::vector<Employee>& employees) {
    std::string name;
    int age;
    std::string designation;
    double salary;

    std::cout << "Enter employee details:" << std::endl;
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Designation: ";
    std::cin.ignore();
    std::getline(std::cin, designation);

    std::cout << "Salary: ";
    std::cin >> salary;

    Employee emp(name, age, designation, salary);
    emp.generateId();

    employees.push_back(emp);

    std::cout << "Employee added successfully!" << std::endl;
}

// Function to search for an employee by ID
void searchEmployee(const std::vector<Employee>& employees) {
    std::string searchId;
    std::cout << "Enter employee ID to search: ";
    std::cin >> searchId;

    bool found = false;
    for (const auto& emp : employees) {
        if (emp.getId() == searchId) {
            emp.display();
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Employee not found!" << std::endl;
    }
}

// Function to mark an employee as present or absent
void markAttendance(std::vector<Employee>& employees) {
    std::string searchId;
    std::cout << "Enter employee ID: ";
    std::cin >> searchId;

    bool found = false;
    for (auto& emp : employees) {
        if (emp.getId() == searchId) {
            char choice;
            std::cout << "Is the employee present? (Y/N): ";
            std::cin >> choice;

            if (choice == 'Y' || choice == 'y') {
                emp.markPresent(true);
                std::cout << "Attendance marked as present!" << std::endl;
            } else if (choice == 'N' || choice == 'n') {
                emp.markPresent(false);
                std::cout << "Attendance marked as absent!" << std::endl;
            } else {
                std::cout << "Invalid choice! Attendance not marked." << std::endl;
            }

            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Employee not found!" << std::endl;
    }
}

// Function to display all employees
void displayEmployees(const std::vector<Employee>& employees) {
    if (employees.empty()) {
        std::cout << "No employees in the system!" << std::endl;
    } else {
        std::cout << "Employee Details:" << std::endl;
        for (const auto& emp : employees) {
            emp.display();
            std::cout << std::endl;
        }
    }
}

// Function to display the menu and handle user choices
void displayMenu(std::vector<Employee>& employees) {
    int choice = 0;

    while (choice != 5) {
        std::cout << "Employee Management System" << std::endl;
        std::cout << "1. Add Employee" << std::endl;
        std::cout << "2. Search Employee" << std::endl;
        std::cout << "3. Mark Attendance" << std::endl;
        std::cout << "4. Display Employees" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(employees);
                break;
            case 2:
                searchEmployee(employees);
                break;
            case 3:
                markAttendance(employees);
                break;
            case 4:
                displayEmployees(employees);
                break;
            case 5:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }

        std::cout << std::endl;
    }
}

int main() {
    std::vector<Employee> employees;

    // Display the menu and handle user choices
    displayMenu(employees);

    return 0;
}
