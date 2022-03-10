package piscine

import "github.com/01-edu/z01"

func PrintStr(s string) {
	for k := 0; k < len(s); k++ {
		z01.PrintRune(rune(s[k]))
	}
}
