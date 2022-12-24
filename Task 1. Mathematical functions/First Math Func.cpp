int math_plus(int num1, int num2) {
	return num1 + num2;
}
int math_minus(int num1, int num2) {
	return num1 - num2;
}
int math_multiply(int num1, int num2) {
	return num1 * num2;
}
int math_division(int num1, int num2) {
	return num1 / num2;
}
int math_exponentation(int num1, int num2) {
	if (num2 == 2) {
		return num1 * num2;
	}
	else {
		int temp = num1;
		for (int i = 1; i < num2; i++) {
			num1 = num1 * temp;
		}
		return num1;
	}
}