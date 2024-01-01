
class Solution {
    public int maximumLength(String s) {
        HashMap<String, Integer> hash = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            int j = 0;
            int t = i;

            while (t < s.length()) {
                String b = s.substring(j, t + 1);
                hash.put(b, hash.getOrDefault(b, 0) + 1);
                j++;
                t++;
            }
        }

        int res = 0;
        for (String a : hash.keySet()) {
            if (hash.get(a) >= 3 && check(a)) {
                res = Math.max(res, a.length());
            }
        }

        return (res == 0) ? -1 : res;
    }

    public boolean check(String s) {
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) != s.charAt(i - 1))
                return false;
        }

        return true;
    }
}
