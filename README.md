# Purpose
This project is a test.

I was trying to access the MacOS native libraries with Objective-C by using the Java Native Interface.

Under ```/src/native``` you will find the implementation in C++ to communicate with Objective-C and access native
interfaces. 

# What it does?

It only retrieves the MacOSX version with objective C and pass it through a POJO to the Java part to print it.

# Steps to create lib and launch

- Compile the java files and create .h file
```
cd src/
javac -h . OSApiAdapter.java
```

- Create the shared library
```
cd native/
sudo g++ -I"$JAVA_HOME/include"  -I"$JAVA_HOME/include/darwin" -shared -o/Library/Java/Extensions/libosAdapter.dylib EntryPointJNI.cpp  MacOSNativeApiAdapter.cpp NativeApiTranslator.mm -framework Foundation
```
- Finally, launch the program