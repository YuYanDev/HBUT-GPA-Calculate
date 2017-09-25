all: GpaCalculate

GpaCalculate: main.cpp
	g++ main.cpp -o HBUT_GPA_Calculate

clean:
	rm HBUT_GPA_Calculate
