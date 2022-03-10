package piscine

func IterativeFactorial(nb int) int {
	j := 1
	if nb < 50 && nb > 0 {
		for i := 1; i <= nb; i++ {
			j *= i
		}
		return j
	} else if nb == 0 {
		return 1
	} else {
		return 0
	}
}
