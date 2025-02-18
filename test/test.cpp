#include "catch2/catch_test_macros.hpp"

#include "../src/core/include/algebraic/addition.hpp"
#include "../src/core/include/algebraic/subtraction.hpp"
#include "../src/core/include/algebraic/multiplication.hpp"
#include "../src/core/include/algebraic/division.hpp"

TEST_CASE("Additions are computed", "[addition]") {
    REQUIRE(addition(static_cast<fast_i32>(228), static_cast<fast_i32>(2)) == static_cast<fast_i32>(230));
    REQUIRE(subtraction(static_cast<fast_i32>(228), static_cast<fast_i32>(2)) == static_cast<fast_i32>(226));
    REQUIRE(multiplication(static_cast<fast_i32>(228), static_cast<fast_i32>(2)) == static_cast<fast_i32>(456));
    REQUIRE(division(static_cast<fast_i32>(228), static_cast<fast_i32>(2)) == static_cast<fast_i32>(114));
}
