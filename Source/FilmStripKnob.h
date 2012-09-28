#ifndef FilmStripKnob_H
#define FilmStripKnob_H

/*
Extension of the Slider calss to use Filmstrip images
to render a rotary knob graphically.
*/
class FilmStripKnob : public Slider
    {
public:
    FilmStripKnob(const char *img_array, const int img_size, const int numFrames, const bool stripIsHorizontal)
        : Slider("Film Strip Slider"),
          numFrames_(numFrames),
          isHorizontal_(stripIsHorizontal)
        {
        filmStrip = ImageCache::getFromMemory(img_array, img_size);
        if(filmStrip.isValid())
            {
            setTextBoxStyle(NoTextBox, 0, 0, 0);
            setSliderStyle(RotaryHorizontalVerticalDrag);
            frameHeight = filmStrip.getHeight() / numFrames_;
            frameWidth = filmStrip.getWidth();
            setRange(0, numFrames_, 1);
            }
        }
    ~FilmStripKnob()
        {
        //delete(filmStrip);
        }

    void paint(Graphics& g)
        {
        if(filmStrip.isValid())
            {
            int value = (getValue() - getMinimum()) / (getMaximum() - getMinimum()) * (numFrames_ - 1);
            if(isHorizontal_)
                {
                g.drawImage(filmStrip, 0, 0, getWidth(), getHeight(), value * frameWidth, 0, frameWidth, frameHeight);
                }
            else
                {
                g.drawImage(filmStrip, 0, 0, getWidth(), getHeight(), 0, value * frameHeight, frameWidth, frameHeight);
                }
            }
        }

private:
    Image filmStrip;
    const int numFrames_;
    const bool isHorizontal_;
    int frameWidth, frameHeight;
    };

#endif
