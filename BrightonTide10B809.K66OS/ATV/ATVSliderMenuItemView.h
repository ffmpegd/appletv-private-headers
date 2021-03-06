/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRWaitSpinnerControl, NSAttributedString, BRImageControl, BRAutoScrollingTextControl;

__attribute__((visibility("hidden")))
@interface ATVSliderMenuItemView : BRControl {
	NSAttributedString *_attributedText;	// 84 = 0x54
	BOOL _dimmed;	// 88 = 0x58
	BRImageControl *_leadingImageItem;	// 92 = 0x5c
	BRImageControl *_leftAccessory;	// 96 = 0x60
	BOOL _showSlider;	// 100 = 0x64
	float _sliderValue;	// 104 = 0x68
	BRImageControl *_rightArrow;	// 108 = 0x6c
	BRImageControl *_leftArrow;	// 112 = 0x70
	id _sliderValueChangedBlock;	// 116 = 0x74
	BRImageControl *_sliderBar;	// 120 = 0x78
	BRImageControl *_sliderGutter;	// 124 = 0x7c
	BRImageControl *_rightAccessory;	// 128 = 0x80
	BRAutoScrollingTextControl *_textControl;	// 132 = 0x84
	BRWaitSpinnerControl *_spinner;	// 136 = 0x88
}
@property(assign, nonatomic) BOOL dimmed;	// G=0x3fc5a9; S=0x3fc3f5; @dynamic
@property(retain, nonatomic) BRImageControl *leadingImageItem;	// G=0x3fc5b9; S=0x3fc5c9; @synthesize=_leadingImageItem
@property(retain, nonatomic) BRImageControl *leftAccessory;	// G=0x3fc5f1; S=0x3fc601; @synthesize=_leftAccessory
@property(retain, nonatomic) BRImageControl *leftArrow;	// G=0x3fc691; S=0x3fc6a1; @synthesize=_leftArrow
@property(retain, nonatomic) BRImageControl *rightAccessory;	// G=0x3fc75d; S=0x3fc76d; @synthesize=_rightAccessory
@property(retain, nonatomic) BRImageControl *rightArrow;	// G=0x3fc659; S=0x3fc669; @synthesize=_rightArrow
@property(assign, nonatomic) BOOL showSlider;	// G=0x3fc629; S=0x3fc639; @synthesize=_showSlider
@property(retain, nonatomic) BRImageControl *sliderBar;	// G=0x3fc6ed; S=0x3fc6fd; @synthesize=_sliderBar
@property(retain, nonatomic) BRImageControl *sliderGutter;	// G=0x3fc725; S=0x3fc735; @synthesize=_sliderGutter
@property(assign, nonatomic) float sliderValue;	// G=0x3fc649; S=0x3fbd41; @synthesize=_sliderValue
@property(copy, nonatomic) id sliderValueChangedBlock;	// G=0x3fc6c9; S=0x3fc6dd; @synthesize=_sliderValueChangedBlock
@property(retain, nonatomic) BRWaitSpinnerControl *spinner;	// G=0x3fc7cd; S=0x3fc7dd; @synthesize=_spinner
@property(retain, nonatomic) NSString *text;	// G=0x3fbee5; S=0x3fbdc5; @dynamic
@property(retain, nonatomic) BRAutoScrollingTextControl *textControl;	// G=0x3fc795; S=0x3fc7a5; @synthesize=_textControl
- (id)initWithFrame:(CGRect)frame;	// 0x3fabf9
- (void).cxx_destruct;	// 0x3fc805
- (id)_destinationForAccessoryType:(int)accessoryType;	// 0x3fca31
- (id)_identiferForAccessoryType:(int)accessoryType;	// 0x3fca95
- (id)_imageProxyForAccessoryType:(int)accessoryType;	// 0x3fc8ed
- (void)addAccessoryOfType:(int)type;	// 0x3fc1d1
- (BOOL)brEventAction:(id)action;	// 0x3fb229
- (void)controlWasFocused;	// 0x3fbf05
- (void)controlWasUnfocused;	// 0x3fc02d
// declared property getter: - (BOOL)dimmed;	// 0x3fc5a9
- (BOOL)hasAccessoryOfType:(int)type;	// 0x3fc331
- (void)layoutSubcontrols;	// 0x3fb451
// declared property getter: - (id)leadingImageItem;	// 0x3fc5b9
// declared property getter: - (id)leftAccessory;	// 0x3fc5f1
// declared property getter: - (id)leftArrow;	// 0x3fc691
// declared property getter: - (id)rightAccessory;	// 0x3fc75d
// declared property getter: - (id)rightArrow;	// 0x3fc659
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3fc3f5
// declared property setter: - (void)setLeadingImageItem:(id)item;	// 0x3fc5c9
// declared property setter: - (void)setLeftAccessory:(id)accessory;	// 0x3fc601
// declared property setter: - (void)setLeftArrow:(id)arrow;	// 0x3fc6a1
// declared property setter: - (void)setRightAccessory:(id)accessory;	// 0x3fc76d
// declared property setter: - (void)setRightArrow:(id)arrow;	// 0x3fc669
// declared property setter: - (void)setShowSlider:(BOOL)slider;	// 0x3fc639
// declared property setter: - (void)setSliderBar:(id)bar;	// 0x3fc6fd
// declared property setter: - (void)setSliderGutter:(id)gutter;	// 0x3fc735
// declared property setter: - (void)setSliderValue:(float)value;	// 0x3fbd41
// declared property setter: - (void)setSliderValueChangedBlock:(id)block;	// 0x3fc6dd
// declared property setter: - (void)setSpinner:(id)spinner;	// 0x3fc7dd
// declared property setter: - (void)setText:(id)text;	// 0x3fbdc5
// declared property setter: - (void)setTextControl:(id)control;	// 0x3fc7a5
// declared property getter: - (BOOL)showSlider;	// 0x3fc629
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3fb42d
// declared property getter: - (id)sliderBar;	// 0x3fc6ed
// declared property getter: - (id)sliderGutter;	// 0x3fc725
// declared property getter: - (float)sliderValue;	// 0x3fc649
// declared property getter: - (id)sliderValueChangedBlock;	// 0x3fc6c9
// declared property getter: - (id)spinner;	// 0x3fc7cd
// declared property getter: - (id)text;	// 0x3fbee5
// declared property getter: - (id)textControl;	// 0x3fc795
@end

