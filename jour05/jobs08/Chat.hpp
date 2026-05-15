#include "Animal.hpp"

class Chat : public Animal {
public:
    void crier()const override;
    void manger() const override;
};