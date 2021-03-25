greet_user:
	echo "Hello User!"
	g++ src/main.cpp src/dtypes/bigint/src/bigint.cpp src/dtypes/FiniteFields.cpp -o main

test:
	g++ src/tests.cpp src/dtypes/bigint/src/bigint.cpp src/dtypes/FiniteFields.cpp -o test
	./test
	rm test