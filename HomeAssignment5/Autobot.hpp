// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP

#include "transformer.hpp"
#include <string>

class Autobot: public Transformer {
private:
    int repairPower;
    std::string name;
public:
    Autobot(const std::string& name, int lvl, int str, int fl, int am, Weapon* wpn, int repair);

    // functions
    void repair();
    // redifined from class Transformer
    void transform() override;
    void openFire() override;
    void ulta() override;
};

#endif








