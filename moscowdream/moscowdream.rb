def valid_proposal a, b, c, n
  case [a >= 1, b >= 1, c >= 1, a + b + c >= n, n >= 3]
  when [true, true, true, true, true] then "YES"
  else "NO"
  end
end
