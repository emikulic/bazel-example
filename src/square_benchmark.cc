#include "benchmark/benchmark.h"
#include "src/square.h"

namespace {

void BM_EmptyWhile(benchmark::State& state) {
  while (state.KeepRunning()) {
  }
}
BENCHMARK(BM_EmptyWhile);

void BM_EmptyFor(benchmark::State& state) {
  for (auto _ : state) {
  }
}
BENCHMARK(BM_EmptyFor);

void BM_Square(benchmark::State& state) {
  for (auto _ : state) {
    square(5);
  }
}
BENCHMARK(BM_Square);

}  // namespace

BENCHMARK_MAIN();
