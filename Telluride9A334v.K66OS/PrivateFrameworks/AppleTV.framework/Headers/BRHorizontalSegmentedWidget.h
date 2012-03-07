/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, BRTextControl, NSMutableArray, BRImageControl;

@interface BRHorizontalSegmentedWidget : BRControl {
@private
	BRImage *_leftImage;	// 48 = 0x30
	BRImage *_centerImage;	// 52 = 0x34
	BRImage *_rightImage;	// 56 = 0x38
	BRTextControl *_textControl;	// 60 = 0x3c
	BRImageControl *_leftEndLayer;	// 64 = 0x40
	NSMutableArray *_centerLayers;	// 68 = 0x44
	BRImageControl *_rightEndLayer;	// 72 = 0x48
	float _animationDuration;	// 76 = 0x4c
	BOOL _animationEnabled;	// 80 = 0x50
	int _numSegments;	// 84 = 0x54
}
@property(assign) float animationDuration;	// G=0x33259585; S=0x33259421; converted property
@property(retain) id attributedString;	// G=0x332596fd; S=0x33259635; converted property
@property(readonly, retain) BRImage *centerImage;	// G=0x332593d1; converted property
@property(readonly, retain) NSMutableArray *centerLayers;	// G=0x33259ccd; converted property
@property(readonly, retain) BRImageControl *leftEndLayer;	// G=0x33259cbd; converted property
@property(readonly, retain) BRImage *leftImage;	// G=0x332593c1; converted property
@property(readonly, retain) BRImageControl *rightEndLayer;	// G=0x33259cfd; converted property
@property(readonly, retain) BRImage *rightImage;	// G=0x332593e1; converted property
@property(assign) BOOL sublayerAnimationEnabled;	// G=0x332595a5; S=0x33259595; converted property
- (id)init;	// 0x332590f5
- (void)_reloadSegments;	// 0x33259d2d
- (id)accessibilityLabel;	// 0x33259d0d
// converted property getter: - (float)animationDuration;	// 0x33259585
// converted property getter: - (id)attributedString;	// 0x332596fd
// converted property getter: - (id)centerImage;	// 0x332593d1
- (id)centerLayer;	// 0x33259cdd
// converted property getter: - (id)centerLayers;	// 0x33259ccd
- (void)dealloc;	// 0x3325913d
- (void)layoutSubcontrols;	// 0x3325983d
// converted property getter: - (id)leftEndLayer;	// 0x33259cbd
// converted property getter: - (id)leftImage;	// 0x332593c1
// converted property getter: - (id)rightEndLayer;	// 0x33259cfd
// converted property getter: - (id)rightImage;	// 0x332593e1
// converted property setter: - (void)setAnimationDuration:(float)duration;	// 0x33259421
// converted property setter: - (void)setAttributedString:(id)string;	// 0x33259635
- (void)setLeftFile:(id)file centerFile:(id)file2 rightFile:(id)file3;	// 0x33259201
- (void)setLeftImage:(id)image centerImage:(id)image2 rightImage:(id)image3;	// 0x332592b5
- (void)setNumSegments:(int)segments;	// 0x332593f1
// converted property setter: - (void)setSublayerAnimationEnabled:(BOOL)enabled;	// 0x33259595
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x332595b5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3325971d
// converted property getter: - (BOOL)sublayerAnimationEnabled;	// 0x332595a5
@end

