#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog  - struct dog
* @name: name
* @age: age
* @owner: owner
* Description: This is struct for dog
* Return: no return.
*/

struct dog
{

	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
