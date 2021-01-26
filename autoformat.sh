# http://astyle.sourceforge.net/astyle.html
OPTIONS+=' -n '                       # format in place (no swap file)
OPTIONS+=' --mode=c '                 # indent as C files
OPTIONS+=' --style=java '             # use same-line braces
OPTIONS+=' --indent=spaces=4 '        # use 4 spaces for indent
OPTIONS+=' --indent-preproc-block '   # indent in preprocessor macros
OPTIONS+=' --indent-preproc-define '  # indent in preprocessor defines
OPTIONS+=' --indent-classes '         # indent class bodies
OPTIONS+=' --indent-modifiers '       # indent class access modifiers (public, private, protected)
OPTIONS+=' --indent-switches '        # indent switch statement bodies
OPTIONS+=' --indent-namespaces '      # indent namespace bodies
OPTIONS+=' --indent-labels '          # indent labels
OPTIONS+=' --indent-col1-comments '   # indent comments
OPTIONS+=' --pad-oper '               # add space around operators (+, -, *, <<, etc.)
OPTIONS+=' --pad-comma '              # add space after commas
OPTIONS+=' --pad-header '             # add space after if, for, while, etc.
OPTIONS+=' --unpad-paren '            # remove extra space around parentheses
OPTIONS+=' --align-pointer=type '     # use 'char* x' instead of 'char *x'
OPTIONS+=' --align-reference=type '   # use 'char& x' instead of 'char &x'
OPTIONS+=' --break-closing-braces '   # eliminate evil butterfly ( '} else {' )
OPTIONS+=' --break-one-line-headers ' # don't allow one-line if statements
OPTIONS+=' --add-braces '             # add braces to single-statement blocks
OPTIONS+=' --attach-return-type '     # don't break lines in the middle of a function header
OPTIONS+=' --convert-tabs '           # convert tab characters to spaces
OPTIONS+=' --max-code-length=80 '    # line wrapping
OPTIONS+=' --break-after-logical '    # leave logical operators on the end of the line
echo Running autoformatter with options: ${OPTIONS}
astyle ${OPTIONS} --recursive "./*.cpp"
astyle ${OPTIONS} --recursive "./*.hpp"
echo Autoformat finished.

