#pragma once
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define COUNT 10
const string groups[14] = { "Abstract", "Air", "Animals", "Civilization", "Earth", "Fire", "Food", "Humans", "Organisms", "Plants", "Supernatural", "Tools", "Transportation", "Water" };
const string elements[14][10] = {
    { "Energy", "Electricity", "Life", "Egg", "Seeds", "Sex", "Poison", "Blood" },
    { "Air", "Steam", "Storm", "Dust", "Ash" },
    { "Fish", "Snake", "Dinosaur", "Lizard", "Beast", "Domestic-Animal", "Bird", "Turtle", "Dolphin", "Whale" },
    { "Bricks", "Cement", "Concrete", "Paper", "Book", "Ceramics", "Fabric", "Clothes", "Wood", "Field" },
    { "Earth", "Stone", "Metal", "Sand", "Glass", "Clay", "Limestone", "Fertilizer" },
    { "Fire", "Lava", "Sulfur", "Coal", "Oil", "Saltpetre" },
    { "Milk", "Meat", "Feather", "Wool", "Cigarette", "Wheat", "Flour", "Dough", "Bread", "Beer" },
    { "Human", "Hunter", "Warrior", "Hero", "Alcoholic", "Wizard", "Demigod", "Corpse", "Assassin" },
    { "Weeds", "Bacteria", "Moss", "Mushroom", "Plankton", "Worm", "Shell", "Butterfly", "Beetle", "Scorpion" },
    { "Fern", "Grass", "Tobacco", "Reed", "Tree" },
    { "Golem", "Dragon", "Vampire", "Werewolf", "Thunder-Bird", "Phoenix", "Zombie", "Ghoul", "Treant", "Ghost" },
    { "Boiler", "House", "Skyscraper", "Tools", "Weapon", "Poisoned-Weapon", "Hut", "Steam-Engine", "Gun-Powder", "Firearm" },
    { "Wheel", "Cart", "Car", "Airplane", "Chariot", "Locomotive", "Boat", "Ship", "Frigate", "Steam-Ship"},
    { "Water", "Alcohol", "Vodka", "Swamp" }
};

void mainMenu();
void groupMenu();
void elementsMenu(int i);
void elementMenu(int i, int j);

class Node {
public:
    string data;
    Node* left, * right;

    Node(string data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void print2DUtil(Node* root, int space);
void print2D(Node* root);
int maxDepth(Node* node);
Node* lava();
Node* stone();
Node* sand();
Node* swamp();
Node* clay();
Node* steam();
Node* metal();
Node* energy();
Node* boiler();
Node* electricity();
Node* alcohol();
Node* vodka();
Node* glass();
Node* bricks();
Node* storm();
Node* dust();
Node* ash();
Node* life();
Node* egg();
Node* seeds();
Node* golem();
Node* human();
Node* sex();
Node* weeds();
Node* bacteria();
Node* moss();
Node* mushroom();
Node* fern();
Node* grass();
Node* plankton();
Node* worm();
Node* sulfur();
Node* fish();
Node* shell();
Node* limestone();
Node* cement();
Node* concrete();
Node* house();
Node* skyscraper();
Node* butterfly();
Node* snake();
Node* beetle();
Node* scorpion();
Node* tools();
Node* weapon();
Node* poison();
Node* poisonedWeapon();
Node* hunter();
Node* warrior();
Node* dinosaur();
Node* dragon();
Node* hero();
Node* bird();
Node* blood();
Node* vampire();
Node* lizard();
Node* beast();
Node* werewolf();
Node* domesticAnimal();
Node* milk();
Node* fertilizer();
Node* tobacco();
Node* reed();
Node* paper();
Node* turtle();
Node* dolphin();
Node* whale();
Node* meat();
Node* feather();
Node* wool();
Node* book();
Node* cigarette();
Node* alcoholic();
Node* wizard();
Node* demigod();
Node* corpse();
Node* assassin();
Node* thunderBird();
Node* pheonix();
Node* hut();
Node* ceramics();
Node* fabric();
Node* clothes();
Node* tree();
Node* wood();
Node* wheel();
Node* cart();
Node* coal();
Node* oil();
Node* car();
Node* airplane();
Node* chariot();
Node* steamEngine();
Node* locomotive();
Node* boat();
Node* ship();
Node* frigate();
Node* steamShip();
Node* saltpetre();
Node* gunPowder();
Node* firearm();
Node* field();
Node* wheat();
Node* flour();
Node* dough();
Node* bread();
Node* beer();
Node* zombie();
Node* ghoul();
Node* treant();
Node* ghost();