//
// Created by ryan.simas on 2/14/2020.
//

#ifndef DIECLASS_DIE_H
#define DIECLASS_DIE_H
#include <string>

class Die {
private:
    int numberOfSides;
    int increment;
    int value;
    std::string color;
    bool isSymbols;
    std::string material;
    int startingValue;
public:
    Die (int startingNumberOfSides, int startingIncrement = 1, int startingStartingValue = 1, std::string color = "White", bool isSymbols = false, std::string material = "Bone");
    int roll();
    void setNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setStartingValue(int newStartingValue);
    int getStartingValue();
    void setValue(int newValue);
    int getValue();
    void setColor(std::string newColor);
    std::string getColor();
    void setIsSymbol(bool newIsSymbol);
    bool isSymbol();
    void setMaterial(std::string newMaterial);
    std::string getMaterial();
};

#endif //DIECLASS_DIE_H
