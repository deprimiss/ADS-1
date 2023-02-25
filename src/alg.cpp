// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
	for (uint64_t k = 2; k * k <= value; k++)
		if (value % k == 0)
			return false;
	return true;
}

uint64_t nPrime(uint64_t n) {
	uint64_t k = 2;
	for (uint64_t i = 0; i < n; k++)
		if (checkPrime(k))
			i++;
	return (k - 1);
}

uint64_t nextPrime(uint64_t value) {
	bool w = true;
	value++;
	while (w) {
		if (checkPrime(value))
			w = false;
		value++;
	}
	return (value - 1);
}

uint64_t sumPrime(uint64_t hbound) {
	uint64_t sum = 0;
	for (uint64_t i = 2; i < hbound; i++)
		if (checkPrime(i))
			sum += i;
	return sum;
}
