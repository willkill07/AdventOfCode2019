#include "Solution.hpp"

#include <range/v3/all.hpp>
namespace views = ranges::views;

int
fuel_for(int amount) {
  return amount / 3 - 2;
}

int
total_fuel_for(int amount) {
  amount = fuel_for(amount);
  return (amount <= 0) ? 0 : amount + total_fuel_for(amount);
}

template <>
template <bool part2>
void
Day<1>::solve(std::istream &is, std::ostream &os) {
  auto nums = ranges::istream_view<int>(is);
  auto fun = part2 ? total_fuel_for : fuel_for;
  os << ranges::accumulate(nums | views::transform(fun), 0) << '\n';
}

template void
Day<1>::solve<true>(std::istream &, std::ostream &);
template void
Day<1>::solve<false>(std::istream &, std::ostream &);
