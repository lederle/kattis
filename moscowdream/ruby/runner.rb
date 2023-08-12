require_relative 'moscowdream'

STDIN.each_line do |line|
  a, b, c, n = line.scan(/\d+/).map(&:to_i)
  puts valid_proposal a, b, c, n
end
