import unittest
import doctest

class ExtensionTest(unittest.TestCase):
    def runTest(self):
        try:
            import extension
        except e:
            self.Fail(str(e))
