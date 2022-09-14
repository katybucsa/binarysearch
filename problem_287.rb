class Solution
    def solve(s0, s1)
        l0 = s0.size
        l1 = s1.size
        return false if l0 - l1 != 1

        for i in 0..l1
            return s0[i+1..-1] == s1[i..-1] if s0[i] != s1[i]
        end
        return true
    end
end