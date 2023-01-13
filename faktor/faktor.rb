# This was a problem about ceilings, the equation was
# I = ceil(C / A) and we are given A and I. The jist is
# that C can take many values that satisfy the given 
# relationship (i.e., the function is grossly onto).
# Ultimately we need the mininum of all Cs that produce
# the given I. The easiest way to see this is to let I
# equal 1, then C can be any value from 1 to at most A
# and it will still satisfy ceil(C / A) = 1. The answer in
# this case is 1, we want the least C that satisfies the
# relation. If I is 2, then the min value is A + 1, if I 
# is 3, the min is 2A + 1. This is what is returned in 
# the puts line.

STDIN.each_line do |line|
  a, i = line.scan(/\d+/).map(&:to_i)
  puts (i - 1) * a + 1
end
