require_relative '../romans'

RSpec.describe 'romans' do
  it 'sample one' do
    expect(romans 1.0).to eq 1088  
  end

  it 'sample two' do
    expect(romans 20.267).to eq 22046  
  end
end
