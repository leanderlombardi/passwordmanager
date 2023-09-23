#include "encrypter.h"

char *encrypt(char *original, int key) {
	char *encrypted_string;
	int len = strlen(original);
	for (int i = 0; i < len; i++) {
		encrypted_string[i] ^= key;
	}

	return encrypted_string;
}

