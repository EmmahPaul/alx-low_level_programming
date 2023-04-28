#include "main"

/**
 * _isalpha - checks if a character is an alphabetic character
 *
 * @c: the character to check
 *
 * Return: 1 if the character is an alphabetic character, 0 otherwise
 */
	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
