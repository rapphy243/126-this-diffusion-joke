#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/particle.hpp"

TEST_CASE("benchmarking the walk function") {
    // BENCHMARK("walk(2500000)") {
    //         return walk(400000000);
    // };
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
        BENCHMARK("walk(200) Trial: " + std::to_string(i + 1)) {
            return walk(200);
        };
    }

    for (int i = 0; i < 10; ++i) {
        BENCHMARK("walk(500) Trial: " + std::to_string(i + 1)) {
            return walk(500);
        };
    }
}
