#include <boost.hpp>

VALUE mBoost;

extern "C"
{
  void Init_boost()
  {
    mBoost = rb_define_module("Boost");

    Init_distributions();
  }
}