require "bundler/gem_tasks"
require 'rake/extensiontask'

spec = Gem::Specification.load('boost-fast-psn.gemspec')
Rake::ExtensionTask.new('boost', spec) do |ext|
  ext.ext_dir = 'ext/boost-fast-psn'
  ext.lib_dir = 'lib/boost-fast-psn'
end