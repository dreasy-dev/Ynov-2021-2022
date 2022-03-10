package piscine

func BasicAtoi(s string) int {
	runes := []rune(s)
	var result []int
	for i := 0; i < len(runes); i++ {
		p := runes[i] - rune(48)
		result = append(result, int(p))
	}
	final := 0
	for _, r := range result {
		final = final*10 + r
	}
	return final
}
