require_relative 'different'

STDIN.each_line do |line|
  a, b = line.scan(/\d+/).map(&:to_i)
  puts different(a, b)
end
