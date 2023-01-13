require_relative '../timeloop'

RSpec.describe 'timeloop' do
  it 'formats correctly' do
    res = abra 3
    expected = <<~TERM
      1 Abracadabra
      2 Abracadabra
      3 Abracadabra
    TERM
    expect(res).to eq expected
  end

  it 'sample two' do
    res = abra 10
    expected = <<~TERM
      1 Abracadabra
      2 Abracadabra
      3 Abracadabra
      4 Abracadabra
      5 Abracadabra
      6 Abracadabra
      7 Abracadabra
      8 Abracadabra
      9 Abracadabra
      10 Abracadabra
    TERM
    expect(res).to eq expected
  end
end
