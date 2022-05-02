CDATA_CONTENT_PATTERN = r'<!\[CDATA\[.*?\]\]>'
TAG_CONTENT_PATTERN = r'<([A-Z]{1,9})>[^<]*</\1>'

class Solution:
    def isValid(self, code: str) -> bool:
        code = re.sub(CDATA_CONTENT_PATTERN, "#", code)
        print(code)
        for _ in range(code.count('</')):
            code = re.sub(TAG_CONTENT_PATTERN, "#", code)
            print(code)
        return code == "#"
