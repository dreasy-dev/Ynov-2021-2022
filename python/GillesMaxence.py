
import hashlib
import unittest

def convert_number(number:int) -> str:
    res = ""
    str_number = str(number)
    if number % 3 == 0:
        res += "Toto" 
    if number % 5 == 0:
        res += "Tata"
    if "3" in str_number:
        res += "Titi"
    if "5" in str_number:
        res += "Tutu"
    if res == "":
        return str_number
    return res

def conversion_results() -> str:
    res = ""
    for number in range(1, 101):
        res += " " + convert_number(number)
    return res[1:]


class TestConvertNumber(unittest.TestCase):
    def test_6(self):
        self.assertEqual(convert_number(6), "Toto")

    def test_10(self):
        self.assertEqual(convert_number(10), "Tata")

    def test_13(self):
        self.assertEqual(convert_number(13), "Titi")

    def test_52(self):
        self.assertEqual(convert_number(52), "Tutu")

    def test_33(self):
        self.assertEqual(convert_number(33), "TotoTiti")

    def test_15(self):
        self.assertEqual(convert_number(15), "TotoTataTutu")

    def test_1(self):
        self.assertEqual(convert_number(1), "1")

    def test_35(self):
        self.assertEqual(convert_number(35), "TataTitiTutu")


class TestConversionResults(unittest.TestCase):
    def test_conversion_results_length(self):
        answer = conversion_results()
        self.assertEqual(
            len(answer), 534, "la réponse attendue fait 534 caractères"
        )

    def test_conversion_results_value(self):
        answer = conversion_results()
        answer = answer.strip().lower()
        hash = hashlib.sha256(answer.encode("utf-8")).hexdigest()
        self.assertEqual(
            hash,
            "70859649c5ddf3183e519a6617e898a9452cc06726dc89edb6140f9f9e95aad4",
        )


if __name__ == "__main__":
    unittest.main(verbosity=2)