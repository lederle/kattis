def qaly quality, years
  quality.zip(years).map { |q, y| q * y }.sum
end
