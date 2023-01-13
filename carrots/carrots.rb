STDIN.each_line do |line|
  n, p = line.scan(/\d+/).map(&:to_i)
  (1..n).each do
    gets
  end
  puts p
end
