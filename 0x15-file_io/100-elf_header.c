#include "main.h"

/**
 * main - program that displays the information contained in the ELF header at the start of an ELF file.
 * Usage: elf_header elf_filename
 *
 * @argc: Number of arg
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd;
	char *buf;
	Elf64_Ehdr *elf_header;
	char *elf_filename;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", elf_filename);
		exit(98);
	}
	buf = malloc(sizeof(char) * ELF_HEADER_SIZE);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", elf_filename);
		exit(98);
	}
	if (read(fd, buf, ELF_HEADER_SIZE) != ELF_HEADER_SIZE)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", elf_filename);
		exit(98);
	}
	elf_header = (Elf64_Ehdr *)buf;
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
	       elf_header->e_ident[1], elf_header->e_ident[2], elf_header->e_ident[3], elf_header->e_ident[4]);
	printf("  Class:                             %s\n",
	       elf_header->e_ident[4] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
	       elf_header->e_ident[5] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d %s\n",
	       elf_header->e_ident[6], elf_header->e_ident[6] == EV_CURRENT ? "(current)" : "");
	printf("  OS/ABI:                            %s\n",
	       elf_header->e_ident[7] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - System V");
	printf("  ABI Version:                       %d\n", elf_header->e_ident[8]);
	printf("  Type:                              %s\n",
	       elf_header->e_type == ET_NONE ? "NONE (None)" : "NONE (None)");
	printf("  Entry point address:               0x%lx\n", elf_header->e_entry);
	printf("  Start of program headers:          %ld (bytes into file)\n", elf_header->e_phoff);
	printf("  Start of section headers:          %ld (bytes into file)\n", elf_header->e_shoff);
	printf("  Flags:                             0x%x\n", elf_header->e_flags);
	printf("  Size of this header:               %d (bytes)\n", elf_header->e_ehsize);
	printf("  Size of program headers:           %d (bytes)\n", elf_header->e_phentsize);
	printf("  Number of program headers:         %d\n", elf_header->e_phnum);
	printf("  Size of section headers:           %d (bytes)\n", elf_header->e_shentsize);
	printf("  Number of section headers:         %d\n", elf_header->e_shnum);
	printf("  Section header string table index: %d\n", elf_header->e_shstrndx);
	free(buf);
	close(fd);
	return (0);
}
