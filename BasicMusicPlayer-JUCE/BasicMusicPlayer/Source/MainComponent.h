class MainComponent : public juce::AudioAppComponent
{
public:
    MainComponent()
    {
        // Configure the audio player settings
        setSize(600, 400);
        formatManager.registerBasicFormats();  // Allow WAV and MP3 formats
        transportSource.addChangeListener(this);

        // Add UI components
        addAndMakeVisible(playButton);
        addAndMakeVisible(pauseButton);
        addAndMakeVisible(volumeSlider);

        // Set default volume
        volumeSlider.setRange(0.0, 1.0);  // Volume range between 0 (mute) and 1 (max)
        volumeSlider.setValue(0.5);  // Default volume is set to 50%

        // Configure the play/pause button actions
        playButton.onClick = [this] { transportSource.start(); };
        pauseButton.onClick = [this] { transportSource.stop(); };

        // Volume slider action to control the gain (volume)
        volumeSlider.onValueChange = [this] {
            transportSource.setGain(volumeSlider.getValue());
        };

        // Start audio input/output
        setAudioChannels(0, 2);  // No audio inputs, 2 outputs (stereo)
    }

    ~MainComponent() override
    {
        shutdownAudio();  // Shutdown audio when the component is destroyed
    }

    // Other methods...
};
