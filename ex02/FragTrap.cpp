#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(): ScavTrap() {
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ScavTrap(name) {
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap Constructor for " << this->name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ScavTrap(src) {
    this->hit_points = src.hit_points;
    this->energy_points = src.energy_points;
    this->attack_damage = src.attack_damage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    if (this!= &rhs) {
        ScavTrap::operator=(rhs);
    }
    std::cout << "FragTrap assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap () {
    std::cout << "FragTrap Destructor for " << this->name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << "highfives guys" << std::endl;
}

