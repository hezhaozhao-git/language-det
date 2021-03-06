### LanguageDet

C++ implementation of the Java [language-detection](https://github.com/shuyo/language-detection) library，and provides Python interface makes it easier to use in Python and is the fastest detection library.

It analyzes UTF8-encoded text and returns the most likely human language of the contents.

It uses the same language profiles as the original library, which are based on 1-3 character N-grams. These profiles cover 55 different languages, for details, please check the Java language - detection library (https://github.com/shuyo/language-detection).

### Prerequisites

On Unix (Linux, OS X)
- Install CMake
- A compiler with C++11 support
- CMake >= 3.4 or Pip 10+
- Ninja or Pip 10+

On Windows
- Visual Studio 2015 or newer (required for all Python versions, see notes below)
- CMake >= 3.8 (3.8 was the first version to support VS 2015) or Pip 10+

### python install

1. Installation method one
   + git clone https://github.com/hezhaozhao-git/language-det.git
   + cd  language-det
   + python setup.py install 

2. Installation method tow
   + pip install git+https://github.com/hezhaozhao-git/language-det.git

### use in your python code
```python
from language_det import LanguageDet
ld = LanguageDet()
ld.language_det("nice to meet you")  # "EN"
```

### About to do

+ My project and https://stackoverflow.com/questions/39142778/python-how-to-determine-the-language these language detect packages compare the test performance

### reference

- [pybind11](https://github.com/pybind/pybind11)
- [langdetectpp](https://github.com/scivey/langdetectpp)

