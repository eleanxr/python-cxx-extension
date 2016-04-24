#include <Python.h>

#include <iostream>

static PyObject * print_hello(PyObject * self, PyObject * args) {
    std::cout << "Hello from C++." << std::endl;
    Py_RETURN_NONE;
}

static PyMethodDef ExtensionMethods[] = {
    {"print_hello", print_hello, METH_NOARGS, "Say hello"},
    {NULL, NULL, 0, NULL},
};

static struct PyModuleDef extensionmodule = {
    PyModuleDef_HEAD_INIT,
    "extension",
    NULL,
    -1,
    ExtensionMethods,
};

extern "C" {

PyMODINIT_FUNC PyInit_extension() {
    return PyModule_Create(&extensionmodule);
}

}
