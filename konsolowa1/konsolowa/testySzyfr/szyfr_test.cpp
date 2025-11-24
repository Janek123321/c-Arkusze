#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <string>
#include "szyfrHeader.h"

using namespace std;

extern string szyfruj(string jawny, int klucz);

// // --- TEST 1 ---
// TEST_CASE("Dane podstawowe – abc + 3 = def") {
//     REQUIRE(szyfruj("abc", 3) == "def");
// }

// // --- TEST 2 ---
// TEST_CASE("Zawijanie – xyz + 3 = abc") {
//     REQUIRE(szyfruj("xyz", 3) == "abc");
// }

// // --- TEST 3 ---
// TEST_CASE("Odszyfrowanie – def -3 = abc") {
//     REQUIRE(szyfruj("def", -3) == "abc");
// }

// // --- TEST 4 ---
// TEST_CASE("Klucz > 26 – abc + 29 = def") {
//     REQUIRE(szyfruj("abc", 29) == "def");
// }

// --- TEST 5 ---
TEST_CASE("Spacje w tekście – 'ab cd' + 2 = 'cd ef'") {
    REQUIRE(szyfruj("ab cd", 2) == "cd ef");
}