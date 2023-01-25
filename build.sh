clang++ -O2 -o ./CPP/cppiseven ./CPP/*.cpp
dotnet build ./CSharp/CSharp.csproj
javac ./Java/*.java
jar cfe ./Java/iseven.jar JavaIsEven ./Java/JavaIsEven.class
jar uf ./Java/iseven.jar ./Java/*.class