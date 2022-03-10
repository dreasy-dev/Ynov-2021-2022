package piscine

func FindNextPrime(nb int) int {
	resultat := nb
	if resultat < 0 {
		resultat = 0
	}
	for ; !IsPrime(resultat); resultat++ {
	}
	return resultat
}
