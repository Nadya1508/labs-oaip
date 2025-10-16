#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

class Array3D {
private:
    int*** data;
    int size;

public:
    Array3D(int n);
    ~Array3D();
    
    void fillRandom();
    void fillFromInput();
    void setValue(int x, int y, int z, int value);
    int getValue(int x, int y, int z) const;
    int findMaxDiagonalSum() const;
    int getSize() const { return size; }
};

void printMenu();
void clearInputBuffer();
void printTaskInfo();
int getValidatedInput(const char* prompt, int minVal, int maxVal);

#endif
