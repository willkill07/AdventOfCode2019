#include "Solution.hpp"
#include <array>
#include <iostream>
#include <range/v3/all.hpp>
#include <string>

constexpr static int HALT_CODE = 99;
constexpr static int INSTR_SIZE = 4;
constexpr static int ADD_OP = 1;
constexpr static int MUL_OP = 2;

template <typename Range>
auto
unpack (Range && range) {
  std::tuple<int,int,int,int> result;
  const auto v = *ranges::begin(range) | ranges::to<std::vector>();
  [&] <size_t... I> (std::index_sequence<I...>) {
    ((std::get<I>(result) = v[I]), ...);
  }(std::make_index_sequence<std::tuple_size_v<decltype(result)>>{});
  return result;
}

int run(std::vector<int> d, int noun, int verb) {
  d[1] = noun;
  d[2] = verb;
  auto instructions = d | ranges::views::chunk(4);
  for (int pc = 0; true; ++pc) {
    auto [instr, srcA, srcB, dst] = unpack(instructions | ranges::views::drop(pc));
    switch (instr) {
      case ADD_OP: d[dst] = d[srcA] + d[srcB]; break;
      case MUL_OP: d[dst] = d[srcA] * d[srcB]; break;
      case HALT_CODE : return d[0];
    }
  }
}

template <>
template <bool part2>
void
Day<2>::solve(std::istream &is, std::ostream &os) {
  const auto data = ranges::getlines(is, ',')
    | ranges::views::transform([] (auto const& s) { return std::stoi(s); })
    | ranges::to<std::vector>();

  if constexpr (part2) {
    const auto lim = ranges::views::closed_indices(100);
    for (auto [noun, verb] : ranges::views::cartesian_product(lim, lim)) {
      if (run(data, noun, verb) == 19690720) {
        os << ((noun * 100) + verb) << '\n';
        return;
      }
    }
  } else {
    os << run(data, 12, 2) << '\n';
  }
}

template struct Day<2>;
template void
Day<2>::solve<true>(std::istream &, std::ostream &);
template void
Day<2>::solve<false>(std::istream &, std::ostream &);
