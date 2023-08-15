#include "dog.h"
#include <stdlib.h>

/**
 *
 * str - function that gets a size of string.
 *
 * @s: input string
 *
 * Return: size os string s.
 */
int str(const char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 *
 *
 *
 *
 *
 *
 */

char *_strcopy(char *d, char *sr)
{
	int v;

	for (v = 0; sr[i]; i++)
		d[v] = sr[v];
	d[v] = '\0';
	return (dest);
}

/**
 * *new_dog - function that creates a new dog.
 *
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *new;

	if (!name || age < 0 || !owner)
		return (NULL);

	new = (dog_t *) malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*new).owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = _strcopy(new->name, name);
	new->age = age;
	new->owner = _strcopy(new->owner, owner);

	return (new);
}	
}
