#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

void check_elf(unsigned char *e_ident);
void elf_magic(unsigned char *e_ident);
void elf_class(unsigned char *e_ident);
void elf_data(unsigned char *e_ident);
void elf_version(unsigned char *e_ident);
void elf_abi(unsigned char *e_ident);
void elf_osabi(unsigned char *e_ident);
void elf_type(unsigned int e_type, unsigned char *e_ident);
void elf_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - function that checks an ELF file.
 * @e_ident: pointer parameter for an ELF magic numbers array.
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
/*introducing variable parameter*/
int x;

/*conditional statement for the function*/
for (x = 0; x < 4; x++)
{
if (e_ident[x] != 127 &&
e_ident[x] != 'E' &&
e_ident[x] != 'L' &&
e_ident[x] != 'F')
{
dprintf(STDERR_FILENO, "Error Msg: Not an ELF file\n");
exit(98);
}
}
}

/**
 * elf_magic - function that generate magic numbers in an ELF header.
 * @e_ident: parameter for pointer to an array containing the ELF magic numbers.
* Description: These numbers are separated by spaces.
 */
void elf_magic(unsigned char *e_ident)
{
/*introducing variable parameter*/
int x;

/*conditional statement for the function*/

printf(" Magic:");

for (x = 0; x < EI_NIDENT; x++)
{
printf("%02x", e_ident[x]);

if (x == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * elf_class - function that prints ELF header class.
 * @e_ident: pointer parameter to an ELF class array
 */
void elf_class(unsigned char *e_ident)
{

/*conditional statement for the function*/
printf(" Class: ");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
/*for default value*/
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * elf_data - function that prints the ELF header data
 * @e_ident: pointer parameter to an ELF class array
 */
void elf_data(unsigned char *e_ident)
{
printf(" Data: ");

/*conditional statement for the function*/

switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
/*for default value*/
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * elf_version - function that prints the ELF header version.
 * @e_ident: pointer parameter to an ELF version array
 */
void elf_version(unsigned char *e_ident)
{
/*conditional statement for the function*/
printf(" Version:%d",
e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
 * elf_osabi - function that prints the ELF header OS/ABI.
 * @e_ident: pointer parameter to an ELF version array.
 */
void elf_osabi(unsigned char *e_ident)
{

/*conditional statement for the function*/
printf(" OS/ABI:");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
/*for default value*/
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
 * elf_abi - function that prints the ELF header ABI version.
 * @e_ident: Pointer parameter to an ELF ABI version array
 */
void elf_abi(unsigned char *e_ident)
{
printf(" ABI Version:%d\n",
e_ident[EI_ABIVERSION]);
}

/**
 * elf_type - function that prints an ELF header type.
 * @e_type: parameter for ELF type.
 * @e_ident: pointer parameter to the ELF class array
 */
void elf_type(unsigned int e_type, unsigned char *e_ident)
{
/*conditional statement for the function*/
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf(" Type: ");

switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
	printf("REL (Relocatable file)\n");
	break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
/*for default value*/
default:
printf("<unknown: %x>\n", e_type);
}
}

/**
 * elf_entry - function that prints an ELF header entry point.
 * @e_entry: parameter for the ELF entry point address.
 * @e_ident: pointer parameter to an array containing the ELF class.
 */
void elf_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf(" Entry point address:");

/*conditional statement for the function*/
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);

else
printf("%#lx\n", e_entry);
}

/**
 * close_elf - function that closes an ELF file.
 * @elf: parameter for the ELF file descriptor.
 * Description: exit code 98 if the file cannot be closed
 */
void close_elf(int elf)
{
/*conditional statement for the function*/
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error Msg: Cannot close a %d\n", elf);
exit(98);
}
}

/**
 * main - C program that displays the information in `ELF` header
 * at the start of an ELF file.
 * @argc: parameter for arguments supplied to the program.
 * @argv: parameter for arguments array of pointers.
 * Return: 0 on success.
 * Description: exit code 98 if function fails or file not an ELF File
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
/*introducing variable parameters*/
int a, b;
/*conditional statement for the function*/
a = open(argv[1], O_RDONLY);
if (a == -1)
{
dprintf(STDERR_FILENO, "Error Msg: Cannot read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(a);
dprintf(STDERR_FILENO, "Error Msg: Cannot read file %s\n", argv[1]);
exit(98);
}
b = read(a, header, sizeof(Elf64_Ehdr));
if (b == -1)
{
free(header);
close_elf(a);
dprintf(STDERR_FILENO, "Error Msg: `%s`: No such file\n", argv[1]);
exit(98);
}
check_elf(header->e_ident);
printf("ELF Header:\n");
elf_magic(header->e_ident);
elf_class(header->e_ident);
elf_data(header->e_ident);
elf_version(header->e_ident);
elf_osabi(header->e_ident);
elf_abi(header->e_ident);
elf_type(header->e_type, header->e_ident);
elf_entry(header->e_entry, header->e_ident);
free(header);
close_elf(a);
return (0);
}

