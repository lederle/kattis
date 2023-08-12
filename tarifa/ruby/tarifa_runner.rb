require_relative 'tarifa'

monthly = gets.to_i 
term = gets.to_i

mb = monthly * (term + 1)

STDIN.each_line do |line|
  mb = mb - line.to_i
end

puts mb
