class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        dict1 = set(dictionary)
        words = sentence.split(" ")
        for i, word in enumerate(words):
            for j in range(1, len(words) + 1):
                if word[:j] in dict1:
                    words[i] = word[:j]
                    break
        return " ".join(words)
