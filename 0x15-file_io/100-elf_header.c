/*
 * File_name: 100-elf_header.c
 * Author: Mohammed Ak Yerima.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * readelf - Reads an ELF header from an ELF file
 * @filename: The path to the ELF file
 * @ehdr: Pointer to the ELF header structure
 *
 * Return: 0 on success, -1 on failure
 */

int readelf(const char *filename, Elf32_Ehdr *ehdr)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (read(fd, ehdr, sizeof(*ehdr)) != sizeof(*ehdr))
	{
		perror("read");
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
	{
		perror("close");
		return (-1);
	}

	return (0);
}

/**
 * print_magic_number - Prints the ELF magic bytes
 * @e_ident: Pointer to the ELF identification bytes
 */

void print_magic_number(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_file_class - Prints the ELF class
 * @e_ident: Pointer to the ELF identification bytes
 */
void print_file_class(unsigned char *e_ident)
{
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("  Class:\n");
		break;
	case ELFCLASS32:
		printf("  Class:                            ELF32\n");
		break;
	case ELFCLASS64:
		printf("  Class:                            ELF64\n");
		break;
	default:
		printf("  Class:                            <unknown: %x>\n",
			e_ident[EI_CLASS]);
		break;
	}
}

/**
 * print_data_encoding - Prints the ELF data encoding
 * @e_ident: Pointer to the ELF identification bytes
 */
void print_data_encoding(unsigned char *e_ident)
{
	printf("  Data:                             ");

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
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
		break;
	}
}

/**
 * print_elf_version - Prints the ELF version
 * @e_ident: Pointer to the ELF identification bytes
 */

void print_elf_version(unsigned char *e_ident)
{
	printf("  Version:                          %d (current)\n",
		e_ident[EI_VERSION]);
}

/**
 * print_os_abi - Prints the ELF ABI
 * @e_ident: Pointer to the ELF identification bytes
 */

void print_os_abi(unsigned char *e_ident)
{
	const char *osabi_str;

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		osabi_str = "UNIX - System V";
		break;
	case ELFOSABI_HPUX:
		osabi_str = "UNIX - HP-UX";
		break;
	case ELFOSABI_NETBSD:
		osabi_str = "UNIX - NetBSD";
		break;
	case ELFOSABI_LINUX:
		osabi_str = "UNIX - Linux";
		break;
	case ELFOSABI_SOLARIS:
		osabi_str = "UNIX - Solaris";
		break;
	case ELFOSABI_IRIX:
		osabi_str = "UNIX - IRIX";
		break;
	case ELFOSABI_FREEBSD:
		osabi_str = "UNIX - FreeBSD";
		break;
	case ELFOSABI_TRU64:
		osabi_str = "UNIX - TRUE64";
		break;
	case ELFOSABI_ARM:
		osabi_str = "ARM";
		break;
	case ELFOSABI_STANDALONE:
		osabi_str = "Standalone App";
		break;
	default:
		osabi_str = "Unknown";
		break;
	}
	printf("  OS/ABI:                           %s\n", osabi_str);
}


/**
 * print_abi_version - Prints the ELF ABI version
 * @e_ident: Pointer to the ELF identification bytes
 */

void print_abi_version(unsigned char *e_ident)
{
	printf("  ABI Version:                      %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_file_type - Prints the ELF object file type
 * @e_type: The object file type
 */

void print_file_type(Elf32_Half e_type)
{

	const char *type;

	switch (e_type)
	{
	case ET_NONE:
		type = "NONE (None)";
		break;
	case ET_REL:
		type = "REL (Relocatable file)";
		break;
	case ET_EXEC:
		type = "EXEC (Executable file)";
		break;
	case ET_DYN:
		type = "DYN (Shared object file)";
		break;
	case ET_CORE:
		type = "CORE (Core file)";
		break;
	default:
		printf("<unknown: %x>\n", e_type);
		break;
	}
	printf("  Type:                             %s\n", type);
}

/**
 * print_entry_point - Prints the ELF entry point address
 * @e_entry: The entry point address
 */

void print_entry_point(Elf32_Addr e_entry)
{
	printf("  Entry point address:              %p\n", (void*)(uintptr_t)e_entry);
}


/**
 * main - Entry point for ELF parsing program
 *
 *
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 *
 * Return: 0 if successful, non-zero if an error occurred
 */


int main(int argc, char **argv)
{
	Elf32_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	if (readelf(argv[1], &ehdr) != 0)
	{
		fprintf(stderr, "Error: Failed to read ELF header from file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	printf("ELF Header:\n");
	print_magic_number(ehdr.e_ident);
	print_file_class(ehdr.e_ident);
	print_data_encoding(ehdr.e_ident);
	print_elf_version(ehdr.e_ident);
	print_os_abi(ehdr.e_ident);
	print_abi_version(ehdr.e_ident);
	print_file_type(ehdr.e_type);
	print_entry_point(ehdr.e_entry);

	return (EXIT_SUCCESS);

}
