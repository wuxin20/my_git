#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX 1000

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 25
#define TELE_MAX 12

typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

/*typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;
*/

typedef struct Contact
{
	PeoInfo *data;
	int sz;
	int capacitty;
}Contact;

void InitContact(Contact *pc);
void AddContact(Contact *pc);
void DelContact(Contact *pc);
int SearchContact(Contact *pc);
void ModifyContact(Contact *pc);
void ShowContact(Contact *pc);
void EmptyContact(Contact *pc);
void SortContact(Contact *pc);


#endif