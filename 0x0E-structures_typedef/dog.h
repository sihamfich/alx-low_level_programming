#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_cp - typedef for struct dog
 */
typedef struct dog dog_cp;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_cp *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
