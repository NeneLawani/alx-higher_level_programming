#include <Python.h>

/**
 * print_python_list_info - a function that prints some basic info
 * about Python lists
 * @p: a PyObject pointer representing a Python list
 */

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size = PyList_Size(p), i;
	Py_ssize_t allocated = ((PyListObject *)p)->allocated;
	PyObject *element;
	const char *elementType;

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", allocated);

	for (i = 0; i < size; i++)
	{
		element = PyList_GetItem(p, i);
		elementType = Py_TYPE(element)->tp_name;

		printf("Element %ld: %s\n", i, elementType);
	}
}

