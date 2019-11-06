/*#include<iostream>

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
} //reference�� a, b�� �޸� �� ����� ���� ����

void swap_ptr(int *a, int *b) {
	int *tmp = a;
	a = b;
	b = tmp;
} //pointer�� call by value�� ���ٵ�, �ּҰ��� ���� ���� a, b �������� ����Ǿ� main �󿡼��� ��ȭ ����

void swap_ptr_basic(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
} //pointer�� call by value, but �ּҰ��� �������� �����Ͽ� a, b�� �޸� �� ����� ���� ����

void swap_ptr_refer(int *(&a), int*(&b)) {
	int *tmp = a;
	a = b;
	b = tmp;
} //pointer�� call by reference, ������ a_ptr, b_ptr�� ����� �ּҰ��� ����

int main() {
	int a(30);
	int b(20);

	int *a_ptr = &a;
	int *b_ptr = &b;

	std::cout << "�⺻ : " << a << ", " << b << std::endl;
	
	swap(a, b);
	std::cout << "swap() ���� : " << a << ", " << b << std::endl;

	swap_ptr(a_ptr, b_ptr);
	std::cout << "swap_ptr() ���� a, b �ܼ� ȣ�� : " << a << ", " << b << std::endl;
	std::cout << "swap_ptr() ���� *a_ptr, b_ptr : " << *a_ptr << ", " << *b_ptr << std::endl;
	
	swap_ptr_basic(a_ptr, b_ptr);
	std::cout << "swap_ptr_basic() ���� a, b �ܼ� ȣ�� : " << a << ", " << b << std::endl;
	std::cout << "swap_ptr_basic() ���� *a_ptr, b_ptr : " << *a_ptr << ", " << *b_ptr << std::endl;

	swap_ptr_refer(a_ptr, b_ptr);
	std::cout << "swap_ptr_refer() ���� a, b �ܼ� ȣ�� : " << a << ", " << b << std::endl;
	std::cout << "swap_ptr_refer() ���� *a_ptr, b_ptr : " << *a_ptr << ", " << *b_ptr << std::endl;

}
*/