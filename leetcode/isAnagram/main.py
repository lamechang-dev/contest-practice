from collections import defaultdict


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hash_table_s = defaultdict(int)
        hash_table_t = defaultdict(int)

        for char in s:
            hash_table_s[char] = hash_table_s[char] + 1

        for char in t:
            hash_table_t[char] = hash_table_t[char] + 1

        return hash_table_s == hash_table_t
