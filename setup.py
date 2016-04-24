from setuptools import setup, Extension

extension_module = Extension('extension', sources=["extension.cpp"])

setup(
    name="python-cxx-extension",
    version="0.1",
    description="Python C++ extension example.",
    ext_modules=[extension_module],
)
