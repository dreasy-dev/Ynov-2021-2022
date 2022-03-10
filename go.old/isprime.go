package piscine

func IsPrime(nb int) bool {
	if nb <= 3 {
		return (nb > 1)
	}
	if nb%2 == 0 || nb%3 == 0 {
		return false
	}
	i := 5
	for ; RecursivePower(i, 2) <= nb; i += 6 {
		if nb%i == 0 || nb%(i+2) == 0 {
			return false
		}
	}
	return true
}
