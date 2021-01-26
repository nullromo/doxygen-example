# Doxygen Example
Doxygen is a tool that parses source code, finds specially-formatted comments, and produces nice-looking documentation files out of them. This repository is set up as an example that shows how Doxygen can be used.

For more information about how Doxygen works, see the [official Doxygen website](https://www.doxygen.nl/index.html).

## This Repository
There are a few example C++ files in the `src/` directory. To run the code, there is a `run.sh` file, which compiles the code and runs the result. An `autoformat.sh` script is also provided for completeness.

## How to Install Doxygen
Doxygen can be installed with apt.

```
sudo apt-get install doxygen
```

In order for the pretty source tree graphs to be generated, you also need to install graphviz.

```
sudo apt install graphviz
```

Now you should be able to run Doxygen from the command line.

```
doxygen --version
```

## How to Use Doxygen
There is a file called `Doxyfile` that controls how Doxygen will run. A new `Doxyfile` can be generated by using `doxygen -g <filename>` (leave the filename blank normally). This configuration file can be modified to change how Doxygen runs, and each project has its own `Doxyfile`.

To run doxygen, simply navigate to the project directory and run `doxygen`. It will look for source files, parse them, and generate output. For this project, a new folder called `generated-docs` will be created, but with the default configuration, the output will simply appear in the same folder as the `Doxyfile`. Inside the output folder or directly in the root folder, there will be an `html` folder, with a file called `index.html` in it. Open the `index.html` file with a web browser to view the documentation.

## How to Comment for Doxygen
Doxygen comments start with `/**` and end with `*/`, like this:

```c
/**
 * Doxygen comments go here.
 *
 * The extra asterisks to the left are not required, but they are nice to have visually.
 */
void exampleFunction(void);
```

A comment block like this will be recognized by Doxygen and will end up in the documentation. These blocks can contain differnt types of keywords, such as `\brief`, `\param`, and `\return`. An example C function is shown below using these. More examples can be found in the `src/` directory of this repository.

```c
/**
 * \brief Adds two numbers.
 *
 * This function takes two numbers, adds them, and then returns the result.
 * 
 * \param x The first number to add.
 * \param y The second number to add.
 * \return The sum of the two numbers.
 */
int add(int x, int y) {
    return x + y;
}
```

This Doxygen comment is complete, because it contains a `\brief` description of the function, it contains a detailed description beneath that, and it contains `\param` and `\return` descriptions for all its parameters and return values.

## This Repository's `Doxyfile`
The `Doxyfile` in this repository was generated using `doxygen -g`, and then edited in the following way:

```
Line 35:
PROJECT_NAME           = "Kyle's Doxygen Test"
Line 47:
PROJECT_BRIEF          = "This is just a test of Doxygen"
Line 54:
PROJECT_LOGO           = "/mnt/r/Resources/icons/DiConIcon.ico"
Line 61:
OUTPUT_DIRECTORY       = "generated-docs"
Line 438:
EXTRACT_ALL            = YES
Line 444:
EXTRACT_PRIVATE        = YES
Line 867:
RECURSIVE              = YES
Line 876:
EXCLUDE                = README.md
Line 998:
SOURCE_BROWSER         = YES
Line 1004:
INLINE_SOURCES         = YES
Line 1017:
REFERENCED_BY_RELATION = YES
Line 1023:
REFERENCES_RELATION    = YES
Line 1031:
REFERENCES_LINK_SOURCE = NO
```

## Tips/Rules
- Always use a `\param` tag for every parameter.
- Always use a `\return` tag is the function returns a non-void value.
- Always include a `\brief` description in addition to a long description.
- Always put a Doxygen comment on every class, function, or macro in the source code.

