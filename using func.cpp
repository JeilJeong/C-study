/*#include<iostream>

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
} //reference로 a, b의 메모리 상에 저장된 내용 변경

void swap_ptr(int *a, int *b) {
	int *tmp = a;
	a = b;
	b = tmp;
} //pointer가 call by value로 접근됨, 주소값이 지역 변수 a, b 내에서만 변경되어 main 상에서는 변화 없음

void swap_ptr_basic(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
} //pointer가 call by value, but 주소값을 기준으로 접근하여 a, b의 메모리 상에 저장된 내용 변경

void swap_ptr_refer(int *(&a), int*(&b)) {
	int *tmp = a;
	a = b;
	b = tmp;
} //pointer가 call by reference, 포인터 a_ptr, b_ptr에 저장된 주소값을 변경

int main() {
	int a(30);
	int b(20);

	int *a_ptr = &a;
	int *b_ptr = &b;

	std::cout << "기본 : " << a << ", " << b << std::endl;
	
	swap(a, b);
	std::cout << "swap() 이후 : " << a << ", " << b << std::endl;

	swap_ptr(a_ptr, b_ptr);
	std::cout << "swap_ptr() 이후 a, b 단순 호출 : " << a << ", " << b << std::endl;
	std::cout << "swap_ptr() 이후 *a_ptr, b_ptr : " << *a_ptr << ", " << *b_ptr << std::endl;
	
	swap_ptr_basic(a_ptr, b_ptr);
	std::cout << "swap_ptr_basic() 이후 a, b 단순 호출 : " << a << ", " << b << std::endl;
	std::cout << "swap_ptr_basic() 이후 *a_ptr, b_ptr : " << *a_ptr << ", " << *b_ptr << std::endl;

	swap_ptr_refer(a_ptr, b_ptr);
	std::cout << "swap_ptr_refer() 이후 a, b 단순 호출 : " << a << ", " << b << std::endl;
	std::cout << "swap_ptr_refer() 이후 *a_ptr, b_ptr : " << *a_ptr << ", " << *b_ptr << std::endl;

}
*/