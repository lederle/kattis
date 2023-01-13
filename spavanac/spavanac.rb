def spavanac(h, m)
  t = 60 * h + m
  t = (t - 45) % 1440
  a, b = t.divmod(60)
  "#{a} #{b}"
end


