#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Check if the file is ELF
 * @e_ident: A pointer to an array that contains ELF magic number
 * Description: If is not ELF - File Exit 98
 */
void check_elf(unsigned char *e_ident)
{
	index index;

	for (index = 0; index < 4; index++)
	{
	if (e_ident[index] != 127 && e_ident[index] != 'E' && e_ident[index] != 'L' && e_ident[index] != 'F')
	{
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
	}
	}
}

/**
 * print_magic - Print the magic number of ELF header
 * @e_ident: A pointer to array containing the magic number of elf
 * Description: Magic number separated by space.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
	printf("%02x", e_ident[index]);

	if (index == EI_NIDENT - 1)
	printf("\n");
	else
	printf(" ");
	}
}

/**
 * print_class - Print the class of ELF
 * @e_ident: A pointer to array of ELF
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
	Printf("none\n");
	break;
	case ELFCLASS32:
	printf("ELF32\n");
	break;
	case ELFCLASS64:
	printf("ELF64\n");
	break;
	default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Print data of ELF
 * @e_ident: A pointer to array that have ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:   ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
	printf("none\n");
	break;
	case ELFDATA2LSB:
	printf("2's complement, little endian\n")
	break;
	case ELFDATA2MSB:
	printf("2's complement, big endian\n")
	break;
	default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
