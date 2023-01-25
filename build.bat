@echo off
g++ -O2 -o CPP\iseven.exe .\CPP\*.cpp
MSBuild build CSharp\CSharp.csproj
javac Java\*.java
jar cfe Java\iseven.jar JavaIsEven Java\JavaIsEven.class
jar uf Java\iseven.jar Java\*.class