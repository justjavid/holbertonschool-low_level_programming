#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
