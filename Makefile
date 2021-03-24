greet_user:
	echo "Hello User!"
	g++ src/main.cpp src/dtypes/Int4096.cpp -o main

test:
	g++ src/tests.cpp src/dtypes/Int4096.cpp -o test
	./test
	rm test