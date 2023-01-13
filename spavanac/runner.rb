require_relative 'spavanac'

STDIN.each_line do |line|
  h, m = line.scan(/\d+/).map(&:to_i)
  puts spavanac(h, m)
end
