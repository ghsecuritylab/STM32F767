/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/equalizer_screen/EqualizerViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

EqualizerViewBase::EqualizerViewBase() :
    buttonCallback(this, &EqualizerViewBase::buttonCallbackHandler)
{
    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_TEXTURES_CARBON_FIBRE_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    SliderAmplified.setXY(6, 220);
    SliderAmplified.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_INDICATORS_SLIDER2_ROUND_NOB_ID));
    SliderAmplified.setupHorizontalSlider(0, 10, 0, 0, 300);
    SliderAmplified.setValueRange(0, 16);
    SliderAmplified.setValue(0);

    SliderBass.setXY(6, 168);
    SliderBass.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_INDICATORS_SLIDER2_ROUND_NOB_ID));
    SliderBass.setupHorizontalSlider(0, 10, 0, 0, 300);
    SliderBass.setValueRange(0, 16);
    SliderBass.setValue(8);

    SliderMid.setXY(6, 119);
    SliderMid.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_INDICATORS_SLIDER2_ROUND_NOB_ID));
    SliderMid.setupHorizontalSlider(0, 10, 0, 0, 300);
    SliderMid.setValueRange(0, 16);
    SliderMid.setValue(8);

    SliderTreble.setXY(6, 62);
    SliderTreble.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_SLIDER_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_DARK_SLIDER_HORIZONTAL_MEDIUM_INDICATORS_SLIDER2_ROUND_NOB_ID));
    SliderTreble.setupHorizontalSlider(0, 10, 0, 0, 300);
    SliderTreble.setValueRange(0, 16);
    SliderTreble.setValue(8);

    box1.setPosition(345, 0, 135, 36);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(43, 39, 39));

    textArea1.setXY(357, 0);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(69, 250, 121));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));

    textArea2.setXY(260, 198);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    textArea2_1.setXY(307, 147);
    textArea2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));

    textArea2_2.setXY(289, 96);
    textArea2_2.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_2.setLinespacing(0);
    textArea2_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID20));

    textArea2_3.setXY(295, 40);
    textArea2_3.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_3.setLinespacing(0);
    textArea2_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));

    ButtonBack.setXY(412, 205);
    ButtonBack.setBitmaps(touchgfx::Bitmap(BITMAP_IC_ID), touchgfx::Bitmap(BITMAP_IC_ID));
    ButtonBack.setAction(buttonCallback);

    add(tiledImage1);
    add(SliderAmplified);
    add(SliderBass);
    add(SliderMid);
    add(SliderTreble);
    add(box1);
    add(textArea1);
    add(textArea2);
    add(textArea2_1);
    add(textArea2_2);
    add(textArea2_3);
    add(ButtonBack);
}

void EqualizerViewBase::setupScreen()
{

}

void EqualizerViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &ButtonBack)
    {
        //IntBack
        //When ButtonBack clicked change screen to Main
        //Go to Main with screen transition towards West
        application().gotoMainScreenCoverTransitionWest();
    }
}
