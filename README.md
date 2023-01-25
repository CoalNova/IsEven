# IsEven
#### A CLI example of finding if a number is even, in Java, C#, and C++.
-----

The goal of this is to exemplify differences in approaches between the three languages. As well as demonstrate a surface-level understanding of their bits. As a feature, each of the programs has an integer return code associated with a result of the operation. When passing multiple numbers to the program, only the last number is used for the return code.

| Return code | Meaning |
|-|:-:|
|`0`| provided number is even |
|`1`| provided number is odd |
|`-1`| no or invalid number |

One of multiple flags are recognized by the program.

| Flag | Result |
|-|:-:|
|`-s`\|`--Silent`| Suppresses printouts to console, result is only provided by return code |
|`-h`\|`--Help`| Prints out useage and help, and quits the program |
|`-v`\|`--Version`| Prints out program version, and quits the program |
