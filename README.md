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