STDIN.each_line do |line|
  r, c = line.scan(/\d+/).map(&:to_i)

  puts 100 * (1 - c.fdiv(r))**2
end
