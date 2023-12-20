#ifndef FONTS_H
#define FONTS_H
#define DEBUG false
#include <vector>
#include <string>
#include <iostream>

class Fonts {
private:
    unsigned int def_rows, def_cols;
    unsigned int char_rows, char_cols, curr_col;
    std::vector<std::vector<char> > letters;

protected:
    char **getCharGrid(unsigned int rows = 0, unsigned int cols = 0) {
        this->char_rows = rows ? rows : def_rows;
        this->char_cols = cols ? cols : def_cols;

        char **char_grid = new char *[char_rows];

        for (unsigned int i = 0; i < char_rows; i++) {
            char_grid[i] = new char[char_cols];

            for (unsigned int j = 0; j < char_cols; j++)
                char_grid[i][j] = ' ';
        }
        return char_grid;
    }

public:
    Fonts(int def_rows, int def_cols) {
        this->def_rows = def_rows;
        this->def_cols = def_cols;

        letters.reserve(def_rows);

        for (int i = 0; i < def_rows; i++)
            letters.emplace_back(100, ' ');
        
        curr_col = 0;
    }

    void pushChar(char **character) {
        if (!character)
            return;

        while (letters.size() < char_rows) {
            letters.emplace_back(100, ' ');
        }

        for (unsigned int i = 0; i < char_rows; i++) {
            for (unsigned int j = 0; j < char_cols; j++) {
                letters[i][j + curr_col] = character[i][j];
            }
        }

        curr_col += (char_cols + 2);
    }

    std::vector<std::vector<char> > getletters() {
        return letters;
    }

    void printvector() {
        for (unsigned int i = 0; i < letters.size(); i++) {
            for (unsigned int j = 0; j < letters[0].size(); j++) {
                std::cout << letters[i][j];
            }
            std::cout << std::endl;
        }
    }

    void clear() {
        letters.clear();
    }

    /********************************adding virtual functions********************************/
    virtual char **space() { std::cout << "space not overridden?\n"; return nullptr; }
    virtual char **a()     { std::cout << "a not overridden?\n"; return nullptr; }
    virtual char **b()     { std::cout << "b not overridden?\n"; return nullptr; }
    virtual char **c()     { std::cout << "c not overridden?\n"; return nullptr; }
    virtual char **d()     { std::cout << "d not overridden?\n"; return nullptr; }
    virtual char **e()     { std::cout << "e not overridden?\n"; return nullptr; }
    virtual char **f()     { std::cout << "f not overridden?\n"; return nullptr; }
    virtual char **g()     { std::cout << "g not overridden?\n"; return nullptr; }
    virtual char **h()     { std::cout << "h not overridden?\n"; return nullptr; }
    virtual char **i()     { std::cout << "i not overridden?\n"; return nullptr; }
    virtual char **j()     { std::cout << "j not overridden?\n"; return nullptr; }
    virtual char **k()     { std::cout << "k not overridden?\n"; return nullptr; }
    virtual char **l()     { std::cout << "l not overridden?\n"; return nullptr; }
    virtual char **m()     { std::cout << "m not overridden?\n"; return nullptr; }
    virtual char **n()     { std::cout << "n not overridden?\n"; return nullptr; }
    virtual char **o()     { std::cout << "o not overridden?\n"; return nullptr; }
    virtual char **p()     { std::cout << "p not overridden?\n"; return nullptr; }
    virtual char **q()     { std::cout << "q not overridden?\n"; return nullptr; }
    virtual char **r()     { std::cout << "r not overridden?\n"; return nullptr; }
    virtual char **s()     { std::cout << "s not overridden?\n"; return nullptr; }
    virtual char **t()     { std::cout << "t not overridden?\n"; return nullptr; }
    virtual char **u()     { std::cout << "u not overridden?\n"; return nullptr; }
    virtual char **v()     { std::cout << "v not overridden?\n"; return nullptr; }
    virtual char **w()     { std::cout << "w not overridden?\n"; return nullptr; }
    virtual char **x()     { std::cout << "x not overridden?\n"; return nullptr; }
    virtual char **y()     { std::cout << "y not overridden?\n"; return nullptr; }
    virtual char **z()     { std::cout << "z not overridden?\n"; return nullptr; }

    // Virtual functions for uppercase letters
    virtual char **A() { std::cout << "A not overridden?\n"; return nullptr; }
    virtual char **B() { std::cout << "B not overridden?\n"; return nullptr; }
    virtual char **C() { std::cout << "C not overridden?\n"; return nullptr; }
    virtual char **D() { std::cout << "D not overridden?\n"; return nullptr; }
    virtual char **E() { std::cout << "E not overridden?\n"; return nullptr; }
    virtual char **F() { std::cout << "F not overridden?\n"; return nullptr; }
    virtual char **G() { std::cout << "G not overridden?\n"; return nullptr; }
    virtual char **H() { std::cout << "H not overridden?\n"; return nullptr; }
    virtual char **I() { std::cout << "I not overridden?\n"; return nullptr; }
    virtual char **J() { std::cout << "J not overridden?\n"; return nullptr; }
    virtual char **K() { std::cout << "K not overridden?\n"; return nullptr; }
    virtual char **L() { std::cout << "L not overridden?\n"; return nullptr; }
    virtual char **M() { std::cout << "M not overridden?\n"; return nullptr; }
    virtual char **N() { std::cout << "N not overridden?\n"; return nullptr; }
    virtual char **O() { std::cout << "O not overridden?\n"; return nullptr; }
    virtual char **P() { std::cout << "P not overridden?\n"; return nullptr; }
    virtual char **Q() { std::cout << "Q not overridden?\n"; return nullptr; }
    virtual char **R() { std::cout << "R not overridden?\n"; return nullptr; }
    virtual char **S() { std::cout << "S not overridden?\n"; return nullptr; }
    virtual char **T() { std::cout << "T not overridden?\n"; return nullptr; }
    virtual char **U() { std::cout << "U not overridden?\n"; return nullptr; }
    virtual char **V() { std::cout << "V not overridden?\n"; return nullptr; }
    virtual char **W() { std::cout << "W not overridden?\n"; return nullptr; }
    virtual char **X() { std::cout << "X not overridden?\n"; return nullptr; }
    virtual char **Y() { std::cout << "Y not overridden?\n"; return nullptr; }
    virtual char **Z() { std::cout << "Z not overridden?\n"; return nullptr; }

    virtual char **zero()  { std::cout << "Zero not overridden?";  return nullptr; }
    virtual char **one()   { std::cout << "One not overridden?";   return nullptr; }
    virtual char **two()   { std::cout << "Two not overridden?";   return nullptr; }
    virtual char **three() { std::cout << "Three not overridden?"; return nullptr; }
    virtual char **four()  { std::cout << "Four not overridden?";  return nullptr; }
    virtual char **five()  { std::cout << "Five not overridden?";  return nullptr; }
    virtual char **six()   { std::cout << "Six not overridden?";   return nullptr; }
    virtual char **seven() { std::cout << "Seven not overridden?"; return nullptr; }
    virtual char **eight() { std::cout << "Eight not overridden?"; return nullptr; }
    virtual char **nine()  { std::cout << "Nine not overridden?";  return nullptr; }

    /********************************done adding virtual functions********************************/
    void destroyspace() {
        letters.clear();
    }

    ~Fonts() {
        destroyspace();
    }
};
#endif