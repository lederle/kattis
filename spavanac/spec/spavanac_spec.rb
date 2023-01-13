require_relative '../spavanac'

RSpec.describe "spavanac"  do
  it "passes first example" do
    res = expect(spavanac(10, 10)).to eq "9 25"
  end
  
  it "passes second example" do
    res = expect(spavanac(0, 30)).to eq "23 45"
  end

  it "passes third example" do
    res = expect(spavanac(23, 40)).to eq "22 55"
  end
end
