#include <iostream>
using namespace std;
class Hero {
protected:
    string name;
    string type;
    int healthPoints;
    int powerLevel;
    double experiencePoints;

public:
    Hero(string n, string t, int hp, int pl, double exp) : name(n), type(t), healthPoints(hp), powerLevel(pl), experiencePoints(exp) { 
		}

    void displayWelcomeMessage() {
        cout << "Welcome to the Fantasy Battle Arena " << endl;
        
    }

    virtual void attackAction() = 0;
    virtual void defenseAction() = 0;
    virtual double calculateAttackPower() = 0;

    virtual void displayInfo() {
        cout << "HERO PROFILE= " << name  << endl;
        cout << "Class: " << type << "  HP= " << healthPoints << " Power= " << powerLevel << endl;
    }

    string getName() { 
	return name; 
	}
    virtual ~Hero() {
	}
};

class Warrior : public Hero {
private:
    string weaponName;
    int armorStrength;
    double rageLevel;

public:
    Warrior(string n, int hp, int pl, double exp, string wpn, int arm, double rage)
        : Hero(n, "Warrior", hp, pl, exp), weaponName(wpn), armorStrength(arm), rageLevel(rage) {
		}

    
    double calculateAttackPower() { 
	return powerLevel + (rageLevel * 1.5); 
	}
    void attackAction() { 
	cout << name << " attacks with " << weaponName << endl;
	 }
    void defenseAction() {
	 cout << name << " blocks with armor!" << endl; 
	}
};
int main() {
    Warrior war("Thorin", 150, 45, 12.5, "Iron Axe", 30, 20.0);
    war.displayWelcomeMessage();
    war.displayInfo();
    war.attackAction();

    double wAtk = war.calculateAttackPower();
    
    double mAtk = 100.0; 
    double aAtk = 90.0;

    
    double highest = wAtk;
    if (mAtk > highest) highest = mAtk;
    if (aAtk > highest) highest = aAtk;

    cout << "Highest Attack Value = " << highest << endl;

    return 0;
}
