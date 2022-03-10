package piscine

func Sqrt(nb int) int {
	j := 0
	for i := 0; i <= nb; i++ {
		j = i * i
		if j == nb {
			return i
		}
	}
	return 0
}
