STDIN.each_line do |line|
  r = line.to_i

  puts Math::PI * r**2
  puts 2.to_f * r**2
end
