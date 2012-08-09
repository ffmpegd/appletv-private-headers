/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, BRTextControl, BRImage, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRHorizontalSegmentedWidget : BRControl {
	BRImage *_leftImage;	// 80 = 0x50
	BRImage *_centerImage;	// 84 = 0x54
	BRImage *_rightImage;	// 88 = 0x58
	BRTextControl *_textControl;	// 92 = 0x5c
	BRImageControl *_leftEndLayer;	// 96 = 0x60
	NSMutableArray *_centerLayers;	// 100 = 0x64
	BRImageControl *_rightEndLayer;	// 104 = 0x68
	float _animationDuration;	// 108 = 0x6c
	BOOL _animationEnabled;	// 112 = 0x70
	int _numSegments;	// 116 = 0x74
}
@property(assign) float animationDuration;	// G=0x3093e1; S=0x309275; converted property
@property(retain) id attributedString;	// G=0x309551; S=0x309491; converted property
@property(readonly, retain) BRImage *centerImage;	// G=0x309229; converted property
@property(readonly, retain) NSMutableArray *centerLayers;	// G=0x309af1; converted property
@property(readonly, retain) BRImageControl *leftEndLayer;	// G=0x309ae1; converted property
@property(readonly, retain) BRImage *leftImage;	// G=0x309219; converted property
@property(readonly, retain) BRImageControl *rightEndLayer;	// G=0x309b21; converted property
@property(readonly, retain) BRImage *rightImage;	// G=0x309239; converted property
@property(assign) BOOL sublayerAnimationEnabled;	// G=0x309401; S=0x3093f1; converted property
- (id)init;	// 0x308f45
- (void)_reloadSegments;	// 0x309b51
- (id)accessibilityLabel;	// 0x309b31
// converted property getter: - (float)animationDuration;	// 0x3093e1
// converted property getter: - (id)attributedString;	// 0x309551
// converted property getter: - (id)centerImage;	// 0x309229
- (id)centerLayer;	// 0x309b01
// converted property getter: - (id)centerLayers;	// 0x309af1
- (void)dealloc;	// 0x308f8d
- (void)layoutSubcontrols;	// 0x30968d
// converted property getter: - (id)leftEndLayer;	// 0x309ae1
// converted property getter: - (id)leftImage;	// 0x309219
// converted property getter: - (id)rightEndLayer;	// 0x309b21
// converted property getter: - (id)rightImage;	// 0x309239
// converted property setter: - (void)setAnimationDuration:(float)duration;	// 0x309275
// converted property setter: - (void)setAttributedString:(id)string;	// 0x309491
- (void)setLeftFile:(id)file centerFile:(id)file2 rightFile:(id)file3;	// 0x309055
- (void)setLeftImage:(id)image centerImage:(id)image2 rightImage:(id)image3;	// 0x30910d
- (void)setNumSegments:(int)segments;	// 0x309249
// converted property setter: - (void)setSublayerAnimationEnabled:(BOOL)enabled;	// 0x3093f1
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x309411
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x309571
// converted property getter: - (BOOL)sublayerAnimationEnabled;	// 0x309401
@end
