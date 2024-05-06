#ifndef STREAMGUARD_HPP
#define STREAMGUARD_HPP
#include <ios>

namespace sukacheva
{
  class StreamGuard
  {
  public:
    explicit StreamGuard(std::basic_ios< char >& s) noexcept;
    ~StreamGuard();
  private:
    std::basic_ios<char>& s_;
    std::streamsize precision_;
    std::basic_ios<char>::fmtflags flags_;
  };
}

#endif
