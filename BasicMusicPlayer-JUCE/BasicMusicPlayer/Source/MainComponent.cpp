void MainComponent::resized()
{
    auto area = getLocalBounds();
    playButton.setBounds (area.removeFromTop (50).reduced (10));
    pauseButton.setBounds (area.removeFromTop (50).reduced (10));
    volumeSlider.setBounds (area.removeFromTop (50).reduced (10));
}
