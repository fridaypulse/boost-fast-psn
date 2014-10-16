#ifndef RUBY_DISTRIBUTIONS
#define RUBY_DISTRIBUTIONS

#include <boost.hpp>

void Init_distributions();
static VALUE distributions_allocate();
static VALUE rb_cFastPsn(VALUE self, VALUE x, VALUE xi, VALUE omega, VALUE alpha);

#endif