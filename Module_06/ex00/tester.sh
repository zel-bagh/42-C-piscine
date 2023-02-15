#!/bin/bash
mk_test() {
	echo "./convert" "$*"
	./convert $@
    echo "\n"
}
echo "Start the tests:"
echo "\n"
mk_test a
mk_test 1
mk_test 1.34f
mk_test 4.2
mk_test .256f
mk_test -.256f
mk_test 18.f
mk_test .
mk_test f
mk_test -
mk_test 0.
mk_test nan
mk_test nanf
mk_test +inf
mk_test -inff
mk_test inf
mk_test 642
mk_test 42
echo "bigger than FLOAT_MAX but smaller than DOUBLE_MAX"
mk_test 5000000000000000000000000000000000000000.0
mk_test x 0.3542 64 62.0f
mk_test bonjour
mk_test 18f
mk_test .f
mk_test -.f
mk_test 4.24.2
mk_test 0.256f12
