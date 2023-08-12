x = gets.to_i
y = gets.to_i

puts 1 if x.positive? and y.positive?
puts 2 if x.negative? and y.positive?
puts 3 if x.negative? and y.negative?
puts 4 if x.positive? and y.negative?
