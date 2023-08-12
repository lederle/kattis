require_relative '../moscowdream'

RSpec.describe "moscowdream" do
  it "is valid for first sample" do
    expect(valid_proposal 0, 3, 3, 5).to eq("NO")
  end

  it "is valid for second sample" do
    expect(valid_proposal 4, 10, 6, 13).to eq("YES")
  end

  it "is valid for corner case" do
    expect(valid_proposal 1, 1, 1, 1).to eq("NO")
  end
end
