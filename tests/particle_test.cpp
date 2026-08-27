#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/particle.hpp"

TEST_CASE("benchmarking the walk function") {
    BENCHMARK("walk(20)") {
        return walk(20);
    };

    BENCHMARK("walk(25)") {
        return walk(25);
    };

    BENCHMARK("walk(30)") {
        return walk(30);
    };

    BENCHMARK("walk(35)") {
        return walk(35);
    };
}
