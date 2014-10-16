#include "ruby.h"
#include <boost/math/distributions/skew_normal.hpp>

#include "distributions.hpp"

static VALUE rb_cFastPsn(VALUE self, VALUE x, VALUE xi, VALUE omega, VALUE alpha)
{
  const double x_val = NUM2DBL(x);
  const double xi_val = NUM2DBL(xi);
  const double omega_val = NUM2DBL(omega);
  const double alpha_val = NUM2DBL(alpha);

  boost::math::skew_normal norm(xi_val, omega_val, alpha_val);
  return rb_float_new(cdf(norm, x_val));
}

void Init_distributions()
{
  VALUE cDistributions = rb_define_class_under(mBoost, "Distributions", rb_cObject);
  rb_define_singleton_method(cDistributions, "fast_psn", RUBY_METHOD_FUNC(rb_cFastPsn), 4);
}