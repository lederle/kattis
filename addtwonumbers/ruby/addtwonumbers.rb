STDIN.each_line do |line|
  a, b = line.scan(/\d+/).map(&:to_i)
  puts a + b
end
