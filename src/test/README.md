### Compiling/running unit tests

Unit tests will be automatically compiled if dependencies were met in `./configure`
and tests weren't explicitly disabled.

After configuring, they can be run with `make check`.

To run the fucucoind tests manually, launch `src/test/test_fucucoin`. To recompile
after a test file was modified, run `make` and then run the test again. If you
modify a non-test file, use `make -C src/test` to recompile only what's needed
to run the fucucoind tests.

To add more fucucoind tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the `test/` directory or add new .cpp files that
implement new BOOST_FIXTURE_TEST_SUITE sections.

To run the fucucoin-qt tests manually, launch `src/qt/test/test_fucucoin-qt`

To add more fucucoin-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.

### Running individual tests

test_fucucoin has some built-in command-line arguments; for
example, to run just the getarg_tests verbosely:

    test_fucucoin --log_level=all --run_test=getarg_tests

... or to run just the doubledash test:

    test_fucucoin --run_test=getarg_tests/doubledash

Run `test_fucucoin --help` for the full list.

### Note on adding test cases

The sources in this directory are unit test cases.  Boost includes a
unit testing framework, and since fucucoin already uses boost, it makes
sense to simply use this framework rather than require developers to
configure some other framework (we want as few impediments to creating
unit tests as possible).

The build system is setup to compile an executable called `test_fucucoin`
that runs all of the unit tests.  The main source file is called
test_fucucoin.cpp, which simply includes other files that contain the
actual unit tests (outside of a couple required preprocessor
directives). To add a new unit test file to our test suite you need
to add the file to `src/Makefile.test.include`. The pattern is to
create one test file for each class or source file for which you want
to create unit tests.  The file naming convention is
`<source_filename>_tests.cpp` and such files should wrap their tests
in a test suite called `<source_filename>_tests`.  For an example of
this pattern, examine `uint160_tests.cpp` and `uint256_tests.cpp`.

For further reading, I found the following website to be helpful in
explaining how the boost unit test framework works:
[http://www.alittlemadness.com/2009/03/31/c-unit-testing-with-boosttest/](http://archive.is/dRBGf).
