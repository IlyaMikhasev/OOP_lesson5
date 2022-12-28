#include <iostream>
//STL контейнеры
//Vector,-вектор ,массив(хранится в линейном направлении памяти)
//list, - двунаправленный список
//forvard_list - однонаправленный список
// set - сет
// map,-мап
// stack,- стак
// queue- очередь
// 
// unordered_map - несортированый мап
// unordered_set - несортированный сет
// 
// priority_queue - приоритетная очередь
// multi_set
// multi_map
#include <vector>
#include <queue>
#include <stack>
#include <map>
int main() {
	setlocale(LC_ALL, "Russian");
	//Vector
	/*
	std::vector<int>arr = {123,64};
	arr.push_back(22);  //добавления данных в конец контейнера
	arr.push_back(43);
	arr.push_back(54);
	arr.reserve(20);    //выделение памяти под контейнер
	arr.shrink_to_fit();//ужать вместимость до size
	for (size_t i = 0; i < arr.size(); i++)	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	std::cout << "Size " << arr.size() << '\n';
	std::cout << "Capacity " << arr.capacity() << '\n';
	//std::vector<int>::iterator it; // создание итератора для вектора(итератор универсальный указатель для всех видов контейнеров - похож на указатель)
	for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++) {//arr.begin-возвращает начало вектора,arr.end()- возвращает итератор после последнего элемента(когда дальше элементов нет)
		std::cout << *it << ' ';//вывод вектора механизмом итераторов
	}
	std::cout << '\n';
	std::vector<int> abc(10,3);//помощение в вектор 10 - 3
	for (size_t i = 0; i < abc.size(); i++) {
		std::cout << abc[i] << ' ';
	}
	std::vector<int> my_vector = { 42,45,65,23 };
	std::cout << *my_vector.begin() << std::endl;//вывод первого элемента через итератор
	my_vector.erase(my_vector.begin()+1);// удаление элемента
	my_vector.emplace(my_vector.begin() + (my_vector.size()/2), 33);//вставляем значение в центр вектора, в начале указывается место через итератор , потом значение 
	for (size_t i = 0; i < my_vector.size(); i++) {
		std::cout << my_vector[i] << ' ';
	}
	std::cout << "\n+++++++++++++++++++\n";
	//сложность по времени
	//random access(случайный доступ) 0(1)-занимает одно и тоже время (одинаковое)
	//вставка/удалени O(n) - n == vector.size() чем больше вектор тем больше занимает времени вставка или удаление элементов
	//существует сложность O(n^2)
	std::vector<std::vector<int>> vec2d(5, std::vector<int> (10,5));//обьявление двумерного вектора(5 строк в которой 10 пятерок)
	for (size_t i = 0; i < vec2d.size(); i++)	{//вывод двумерного вектора
		for (size_t j = 0; j < vec2d[i].size(); j++) {
			std::cout << vec2d[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	*/
	//queue (FIFO-первый зашел первый вышел)
	/*
	std::queue<int> q;//создание очереди
	q.push(5);
	q.push(4);
	q.push(3);
	std::cout << "queue " << q.front() << '\n';
	q.pop();//выкидывает из очереди
	q.push(15);
	q.push(56);
	std::cout << "queue " << q.front() << '\n';
	//all operation of queu O(1)
	while (!q.empty()) {//пока q не пустая выводим на экран елемнт и выкидываем его из очереди
		std::cout << q.front() << " ";
		q.pop();
	}
	*/
	//stack (LIFO-последний зашел первый выйдет)
	/*
	std::stack<std::string> st;//объявление контейнера стак
	st.push("Helllo");
	st.push("how are you");
	st.push("good bay");
	while (!st.empty())	{//пока стек пустой выкладвыть последний и выкидывать из стека
		std::cout << st.top() << "\n";//st.top вывод верхнего елемента
		st.pop();
	}
	*/
	//map-ассециативный контейнер который хранит в себе пару (ключ - значение)при этом ключ должен быть уникальнымдля каждого значения, даже если они повторяються
	std::map<int, std::string> map;//объявление мап где значение инт , а ключ string
	map.insert({ 1, "bob" });
	map.insert({ 2, "tim" });
	map.insert({ 3, "li" });
	map.insert({ 4, "boss" });
	std::cout << map[1] << '\n';
	std::cout << map[4] << '\n';
	
	return 0;
}