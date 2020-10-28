#include <iostream>//мы включили iostream
#include <iomanip>//мы включили iomanip
#include <string>//мы включилиd string


int main(){
	
		int v = 3 * 60 * 60;
		int zzz = 3 * 60; // Это переменная для хранения значения 3 минут в секундах.
		int yyy = 6 * 60; // Это переменная для хранения значения 6 минут в секундах.
		double pi = 3.141526; // Здесь находится число "Пи"

		std::cout << "result = " << v << std::endl; // Здесь мы выводим Результат переменой v
		std::cout << "3 minutes in seconds = " << zzz << std::endl; // Здесь мы выводим Результат переменой zzz
		std::cout << "6 minutes in seconds = " << yyy << std::endl; // Здесь мы выводим Результат переменой yyy
		std::cout << "Pi = " << pi << std::endl; // Здесь мы выводим число "Пи"

		return (0);
	
}