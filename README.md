# rrc(1)

## NAME
  rrc - return return code.

## SYNOPSIS
  rrc [ return_code ]
  
## DESCRIPTION
  This command returns a specified return code (exit code).

## EXIT STATUS
  - when no arguments : returns 0
  - when more than 2 arguments : returns 1
  - when 1 argument : convert argument to integer and return it as a return code.

## EXAMPLES
    $ rrc
    $ echo $?
  
  Return code is 0. 

    $ rrc 1 2
  
  Return code is 1. Because of too many arguments.
  
    $ rrc -1
  
  Return code is -1.
  Note: according to UNIX system, exit code is defined between 0 to 255. See wait(3) and/or wait(2).
  So using rrc as a child process, this will return 255 instead of -1, it depends on the parent process.

## SEE ALSO
  wait(3), wait(2)

## DOWNLOAD
  Executable binaries
    for Apple Silicon Mac (Mach-O 64-bit executable arm64) : <a id="raw-url" href="https://github.com/Hiro07/rrc/releases/latest">Latest Release</a>

## Copyright
  2023 Hiroyuki Kikuchi (hjfk07@gmail.com)
