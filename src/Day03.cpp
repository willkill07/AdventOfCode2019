#include "Solution.hpp"

template <>
template <bool part2>
void
Day<3>::solve(std::istream& is, std::ostream& os) {
  is.good();
  os << std::endl;
}

template struct Day<3>;
template void Day<3>::solve<true>(std::istream&, std::ostream&);
template void Day<3>::solve<false>(std::istream&, std::ostream&);
