﻿#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "rus");
	float dvp = 0.0008, dsp = 0.0006, wood = 0.0015; // Плотность кг/см3
	int h = 0, w = 0, d = 0;
	float mas = 0, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0;

	do {
		printf("Введите высоту в см(от 180 до 220): ");
		scanf_s("%d", &h);
	} while (h < 180 || h > 220);

	do {
		printf("Введите ширину в см(от 80 до 120): ");
		scanf_s("%d", &w);
	} while (w < 80 || w > 120);

	do {
		printf("Введите глубину в см(от 50 до 90): ");
		scanf_s("%d", &d);
	} while (d < 50 || d > 90);

	m1 = dvp * h * w * 0.5; // масса накладной задней стенки из ДВП
	m2 = 2 * dsp * h * d * 1.5; // масса двух боковин из ДСП
	m3 = 2 * dsp * w * d * 1.5; // масса накладных верхней и нижней крышки из ДСП
	m4 = wood * h * w; // масса двух накладных дверей из дерева
	m5 = dsp * w * d * 1.5; // масса внутреней полки в шкафу толщиной 1.5см

	mas = m1 + m2 + m3 + m4 + int(h / 41.5) * m5; // 41.5см = 40см + 1.5см это расстояние между полками + толщина одной из них

	printf("Масса шкафа = %.2f кг\n", mas);

	return 0;
}