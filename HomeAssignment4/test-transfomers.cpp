// Maksim Pastukhov B82 mail: st131119@student.spbu.ru

#include <gtest/gtest.h>

#include "Autobot.hpp"

#include "Decepticon.hpp"

#include "Weapon.hpp"

#include "Predacon.hpp"

// Test for Transformer creation and basic methods

TEST(TransformerTest, CreationAndBasicMethods) {

    auto weapon = std::make_unique<Weapon>(20); // created unique_ptr for Weapon

    Transformer transformer(5, 100, 30, 50, weapon.release());

    EXPECT_EQ(transformer.getLevel(), 5);

    EXPECT_EQ(transformer.getStrength(), 100);

    EXPECT_EQ(transformer.getAmmo(), 30);

    EXPECT_EQ(transformer.getFuel(), 50);

    transformer.move();

    EXPECT_EQ(transformer.getFuel(), 49);

    transformer.fire();

    EXPECT_EQ(transformer.getAmmo(), 29);

}

// Test overloaded operators for Transformer

TEST(TransformerTest, OperatorOverloads) {

    auto weapon1 = std::make_unique<Weapon>(20);

    auto weapon2 = std::make_unique<Weapon>(15);

    Transformer t1(5, 100, 30, 50, weapon1.release());

    Transformer t2(5, 80, 25, 40, weapon2.release());

    EXPECT_TRUE(t1 > t2);

    EXPECT_FALSE(t1 < t2);

    EXPECT_FALSE(t1 == t2);

}

// Test for Autobot-specific methods

TEST(AutobotTest, RepairAndTransform) {

    auto weapon = std::make_unique<Weapon>(20);

    Autobot autobot(5, 100, 30, 50, weapon.release(), 25);

    std::ostringstream output;

    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    autobot.repair();

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(output.str(), "Repairing with power: 25\n");

    output.str("");

    std::cout.rdbuf(output.rdbuf());

    autobot.transform();

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(output.str(), "Autobot is transforming\n");

    output.str("");

    output << autobot;

    EXPECT_NE(output.str().find("Repair Power: 25"), std::string::npos);

}

// Test for Decepticon-specific methods

TEST(DecepticonTest, SabotageAndTransform) {

    auto weapon = std::make_unique<Weapon>(25);

    Decepticon decepticon(6, 120, 35, 60, weapon.release(), true);

    EXPECT_TRUE(decepticon.getCanFly());

    decepticon.setCanFly(false);

    EXPECT_FALSE(decepticon.getCanFly());

    std::ostringstream output;

    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    decepticon.sabotage();

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(output.str(), "Sabotaging Autobots\n");

    output.str("");

    std::cout.rdbuf(output.rdbuf());

    decepticon.transform();

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(output.str(), "Decepticon is transforming\n");

    output.str("");

    output << decepticon;

    EXPECT_NE(output.str().find("Can Fly: No"), std::string::npos);

}

// Test for Predacon-specific methods

TEST(PredaconTest, HuntAndTransform) {

    auto weapon = std::make_unique<Weapon>(30);

    Predacon predacon(7, 130, 40, 70, weapon.release(), 100);

    EXPECT_EQ(predacon.getEnergy(), 100);

    predacon.setEnergy(150);

    EXPECT_EQ(predacon.getEnergy(), 150);

    std::ostringstream output;

    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    predacon.hunt();

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(output.str(), "Predacon is hunting\n");

    output.str("");

    std::cout.rdbuf(output.rdbuf());

    predacon.transform();

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(output.str(), "Predacon is transforming\n");

    output.str("");

    output << predacon;

    EXPECT_NE(output.str().find("Energy: 150"), std::string::npos);

}


// Main function to run all tests

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();

}
 
