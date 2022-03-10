package main

import "github.com/01-edu/z01"

func main() {
	i := 0
	for k := 0; k <= 25; k++ {
		var aRune string = "abcdefghijklmnopqrstuvwxyz"
		z01.PrintRune(rune(aRune[i]))
		i = i + 1
	}
	z01.PrintRune('\n')
}
