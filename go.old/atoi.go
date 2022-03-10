package piscine

func Atoi(s string) int {
	c := true
	sign := ""
	strToRune := []rune(s)
	var num []rune
	if s != "" {
		if strToRune[0] == '+' || strToRune[0] == '-' {
			sign = string(strToRune[0])
			for i := 1; i < len(strToRune); i++ {
				num = append(num, strToRune[i])
			}
		} else {
			for i := 0; i < len(strToRune); i++ {
				num = append(num, strToRune[i])
			}
		}
	} else {
		c = false
	}
	result := 0
	if c {
		var r []int
		for i := 0; i < len(num); i++ {
			if num[i] >= 48 && num[i] <= 57 {
				p := num[i] - rune(48)
				r = append(r, int(p))
			} else {
				c = false
				break
			}
		}

		if c {
			for _, v := range r {
				result = result*10 + v
			}
			if sign != "" && sign == "-" {
				result = -result
			}
		} else {
			result = 0
		}
	}
	return result
}
