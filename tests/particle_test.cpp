#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/particle.hpp"

TEST_CASE("benchmarking the walk function") {
    for (int i = 0; i < 10; ++i) {
        BENCHMARK("walk(10) Trial: " + std::to_string(i)) {
            return walk(10);
        };
    }


    for (int i = 0; i < 10; ++i) {
        BENCHMARK("walk(20) Trial: " + std::to_string(i + 1)) {
            return walk(20);
        };
    }

    for (int i = 0; i < 10; ++i) {
        BENCHMARK("walk(50) Trial: " + std::to_string(i + 1)) {
            return walk(50);
        };
    }

    for (int i = 0; i < 10; ++i) {
        BENCHMARK("walk(100) Trial: " + std::to_string(i + 1)) {
            return walk(100);
        };
    }

    for (int i = 0; i < 10; ++i) {
        BENCHMARK("walk(1000) Trial: " + std::to_string(i + 1)) {
            return walk(1000);
        };
    }

    for (int i = 0; i < 10; ++i) {
        BENCHMARK("walk(10000) Trial: " + std::to_string(i + 1)) {
            return walk(10000);
        };
    }
}
