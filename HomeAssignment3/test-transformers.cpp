// Maksim Pastukhov B82 mail: st131119@student.spbu.ru

#include <gtest/gtest.h>
#include "Autobot.hpp"
#include "Decepticon.hpp"
#include "Weapon.hpp"
#include "Predatorcon.hpp"

// test for class Weapon
TEST(WeaponTest, Initialization) {
   Weapon weapon(50);
   EXPECT_EQ(weapon.getDamage(), 50);
}
// test for class Transformer
TEST(TransformerTest, InitializationAndMethods) {
   Weapon weapon(50);
   Transformer transformer(5, 100, 300, 50, &weapon);
   
   EXPECT_EQ(transformer.getLevel(), 5);
   EXPECT_EQ(transformer.getStrength(), 100);
   EXPECT_EQ(transformer.getFuel(), 300);
   EXPECT_EQ(transformer.getAmmo(), 50);
 
   transformer.move();
   EXPECT_EQ(transformer.getFuel(), 299); 
   
   transformer.fire();
   EXPECT_EQ(transformer.getAmmo(), 49);
   
   EXPECT_EQ(weapon.getDamage(), 50); 
}

// tests for class  Autobot
TEST(AutobotTest, InitializationAndRepair) {
   Weapon weapon(50);
   Autobot autobot(5, 100, 300, 50, &weapon, 25);
   
   EXPECT_EQ(autobot.getLevel(), 5);
   EXPECT_EQ(autobot.getStrength(), 100);
   EXPECT_EQ(autobot.getFuel(), 300);
   EXPECT_EQ(autobot.getAmmo(), 50);
   
   autobot.repair();
   autobot.transform();
}

// tests for class Decepticon
TEST(DecepticonTest, InitializationAndSabotage) {
   Weapon weapon(50);
   Decepticon decepticon(6, 120, 400, 60, &weapon, true);
   
   EXPECT_TRUE(decepticon.getCanFly());
   
   decepticon.setCanFly(false);
   EXPECT_FALSE(decepticon.getCanFly());
   
   EXPECT_EQ(decepticon.getLevel(), 6);
   EXPECT_EQ(decepticon.getStrength(), 120);
   EXPECT_EQ(decepticon.getFuel(), 400);
   EXPECT_EQ(decepticon.getAmmo(), 60);
   
   decepticon.sabotage();
   decepticon.transform();
}
//tests for class Predacon
TEST(PredaconTest, InitializationAndHunt) {
   Weapon weapon(60);
   Predacon predacon(7, 130, 500, 70, &weapon, 100);
   
   EXPECT_EQ(predacon.getLevel(), 7);
   EXPECT_EQ(predacon.getStrength(), 130);
   EXPECT_EQ(predacon.getFuel(), 500);
   EXPECT_EQ(predacon.getAmmo(), 70);
   EXPECT_EQ(predacon.getEnergy(), 100);
   
   predacon.hunt();
   predacon.setEnergy(150);
   EXPECT_EQ(predacon.getEnergy(),150);
   predacon.transform();
}
//main function to run tests
int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
