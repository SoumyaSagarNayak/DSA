class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_set = set()     # stores unique characters of current window
        left = 0             # left pointer of the window
        max_len = 0          # answer

        for right in range(len(s)):
            # If duplicate found → shrink window from the left
            while s[right] in char_set:
                char_set.remove(s[left])
                left += 1

            # Add current char
            char_set.add(s[right])

            # Update longest window
            max_len = max(max_len, right - left + 1)

        return max_len
