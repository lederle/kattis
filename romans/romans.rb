def romans miles
  (miles * 5280.0 / 4854 * 1000).round(half: :up)
end
