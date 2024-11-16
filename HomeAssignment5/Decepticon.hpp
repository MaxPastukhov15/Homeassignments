// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP

#include "transformer.hpp"
#include <string>

class Decepticon : public Transformer {
private:
    bool canFly;
    std::string name;
public:
    Decepticon(const std::string& name, int lvl, int str, int fl, int am, Weapon* wpn, bool fly);

    bool getCanFly() const;
    void setCanFly(bool fly);

    void sabotage();
    // redefined from class Transformer
    void transform() override;
    void openFire() override;
    void ulta() override;
};

#endif
