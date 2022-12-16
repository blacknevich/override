#include <stdio.h>
#include <string.h>

int main() {

	char buf_from_decrypt[17] = "Q}|u`sfg~sf{}|a3";
	char converted_value[17];
	int string_iterator;

	long long int initial_key = 322424845;

	for (int key = 0; key <22;key++) {
		string_iterator = 0;
		bzero(&converted_value, 17);

		while(string_iterator < 17) {
			converted_value[string_iterator] = 0xff & (buf_from_decrypt[string_iterator] ^ key);
				string_iterator++;
		}

		printf("The key was %d, the result is %s\n result value is %d\n", key, converted_value, initial_key-key);
	}
}
