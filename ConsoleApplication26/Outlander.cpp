#include <iomanip>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

#include "Leather.h"
#include "Material.h"
#include "MaterialBase.h"
#include "Metal.h"
#include "Steel.h"
#include "Wood.h"

#include "Ammunition.h"
#include "Weapon.h"

#include "ISoldier.h"
#include "ISoldierActions.h"
#include "Soldier.h"

#include "Horses.h"


#include "../StaticLib1/StaticLib1.cpp"
#include "../StaticLib2/StaticLib2.cpp"
#include "../StaticLib3/StaticLib3.cpp"
#include "../StaticLib4/StaticLib4.cpp"
#include "../StaticLib5/StaticLib5.cpp"
#include "Outlander.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Example");


    Material steel("Steel", "Gray", 200.0, 7.8, 1510.0, 45.0, 10.0);
    Material metal("Metal", "Silver", 60.0, 2.7, 660.0, 62.0, 7.0);
    Material leather("Leather", "Brown", 2.0, 1.0, 3.0, 5.0, 7.0);
    Material wood("Wood", "Brown", 1.0, 0.6, 0.7, 10.0, 100.0);
    Weapon musket("Musket", 1, 10.0);
    Soldier soldier("John", 35, "Colonel");
    Ammunition ammo("9mm", 15, 0.5);
    Weapon rifle("Sniper Rifle", 3, 8.0);
    Ammunition rifleAmmo("7.62mm", 10, 1.0);

    Soldier sniper("Sniper", 32, "Sergeant");
    sniper.setWeapon(rifle);
    sniper.setAmmunition(rifleAmmo);

    std::vector<MaterialBase*> materials;
    materials.push_back(&steel);
    materials.push_back(&metal);
    materials.push_back(&leather);
    materials.push_back(&wood);

    fnStaticLib1(materials);

    std::vector<Weapon> weapons;
    weapons.push_back(Weapon("Musket", 1, 10.0));
    weapons.push_back(Weapon("Flintlock Pistol", 1, 2.0));
    std::cout << std::fixed << std::setprecision(2);
    fnStaticLib2(weapons);

    std::vector<Ammunition> ammunition;

    fnStaticLib3(ammunition, weapons);

    std::vector<Soldier> soldiers;
    soldiers.push_back(Soldier("Johnson", 25, "Corporal"));
    soldiers.push_back(Soldier("Smith", 30, "Major"));
    std::vector<Soldier> moreSoldiers;
    moreSoldiers.push_back(Soldier("Alex", 28, "Lieutenant"));
    moreSoldiers.push_back(Soldier("Emily", 22, "Private"));

    for (const Soldier& soldier : soldiers) {
        soldier.report();
    }
    Soldier anotherSoldier("John", 35, "Colonel");
    std::vector<sf::RectangleShape> soldierShapes;
    for (const Soldier& s : soldiers) {
        // Создание прямоугольника для каждого солдата
        sf::RectangleShape soldierShape(sf::Vector2f(50.0f, 100.0f));
        soldierShape.setFillColor(sf::Color::Blue);

        // Размещение солдата в окне в зависимости от его позиции
        soldierShape.setPosition(sf::Vector2f(s.getX(), s.getY()));

        soldierShapes.push_back(soldierShape);
    }
    sf::CircleShape horseShape(50);
    horseShape.setFillColor(sf::Color::Red);
    std::vector<Horse> horses;
    horses.push_back(Horse("HorseName", 5, "Breed", 600.0, 50.0, 50.0));

    std::vector<sf::CircleShape> horseShapes;
    for (const Horse& h : horses) {
        sf::CircleShape horseShape(50.0f); 
        horseShape.setFillColor(sf::Color::Red);

        // Размещение лошади в окне в зависимости от ее позиции
        horseShape.setPosition(sf::Vector2f(h.getX(), h.getY()));

        horseShapes.push_back(horseShape);
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // Отрисовка солдатов
        for (const sf::RectangleShape& shape : soldierShapes) {
            window.draw(shape);
        }
        // Отрисовка лошадей
        for (const sf::CircleShape& shape : horseShapes) {
            window.draw(shape);
        }
        window.display();
    }

    ISoldierActions* soldierPtr = &soldier;
    soldierPtr->walk();

    fnStaticLib4("John", 35, "Colonel", soldiers[0]);

    fnStaticLib5("HorseName", 5, "Breed", 600.0);

    return 0;
}
