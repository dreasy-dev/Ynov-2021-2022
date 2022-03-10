package piscine

func BasicAtoi2(s string) int {
	runes := []rune(s)
	final := 0
	var result []int
	c := true
	for i := 0; i < len(runes); i++ {
		if runes[i] >= rune(48) && runes[i] <= rune(57) {

			p := runes[i] - rune(48)
			result = append(result, int(p))
		} else {
			c = false
			break
		}
	}
	if c {
		for _, r := range result {
			final = final*10 + r
		}
	}
	return final
}
