#include "Solution.hpp"

#include <range/v3/all.hpp>

int fuel_for (int amount) {
  return amount / 3 - 2;
}

int total_fuel_for (int amount) {
  amount = fuel_for(amount);
  return (amount <= 0) ? 0 : amount + total_fuel_for(amount);
}

template <>
template <bool part2>
void
Day<1>::solve(std::istream &is, std::ostream &os) {

  int(*fn)(int) = (part2) ? total_fuel_for : fuel_for;
  const std::vector<int> nums{std::istream_iterator<int>{is}, {}};
  os << ranges::accumulate(nums | ranges::view::transform(fn), 0) << '\n';
}

template void Day<1>::solve<true>(std::istream&, std::ostream&);
template void Day<1>::solve<false>(std::istream&, std::ostream&);
