require_relative 'qaly'

gets
quality = []
years = []

STDIN.each_line do |line|
  q, y = line.scan(/\d+.\d+/).map(&:to_f)
  quality << q
  years << y
end

puts qaly(quality, years)
