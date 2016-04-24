#include <Python.h>

#include <iostream>

static PyObject * print_hello(PyObject * self, PyObject * args) {
    std::cout << "Hello from C++." << std::endl;
    return NULL;
}

static PyMethodDef ExtensionMethods[] = {
    {"print_hello", print_hello, METH_VARARGS, "Say hello"},
};

static struct PyModuleDef extensionmodule = {
    PyModuleDef_HEAD_INIT,
    "extension",
    NULL,
    -1,
    ExtensionMethods,
};

PyMODINIT_FUNC PyInit_extension() {
    return PyModule_Create(&extensionmodule);
}
