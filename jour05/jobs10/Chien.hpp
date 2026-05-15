#include "Animal.cpp"

class Chien : public Animal {
public:
    void crier() const override;
    void manger() const override;
};