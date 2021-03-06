/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, BRImageControl, NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface BRSegmentedSortControl : BRControl {
	BRImageControl *_leftEndCapLayer;	// 84 = 0x54
	NSMutableArray *_dividerLayers;	// 88 = 0x58
	NSMutableArray *_contentLayers;	// 92 = 0x5c
	NSMutableArray *_textLayers;	// 96 = 0x60
	BRImageControl *_rightEndCapLayer;	// 100 = 0x64
	NSArray *_segmentNames;	// 104 = 0x68
	NSMutableDictionary *_images;	// 108 = 0x6c
	int _selectedSegment;	// 112 = 0x70
	float _widthRatio;	// 116 = 0x74
}
@property(assign) int selectedSegment;	// G=0x316949; S=0x316869; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x316401
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x316425
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x31711d
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x3170ed
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x3170d1
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x317071
- (id)_loadImageFromFile:(id)file;	// 0x3171e9
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x3170a1
- (void)_updateSegmentState;	// 0x3172f1
- (id)accessibilityLabel;	// 0x31700d
- (BOOL)brEventAction:(id)action;	// 0x316a1d
- (void)dealloc;	// 0x316781
- (void)layoutSubcontrols;	// 0x316ae9
- (int)segmentCount;	// 0x316849
// converted property getter: - (int)selectedSegment;	// 0x316949
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x316869
- (float)visualHorizontalCenter;	// 0x316959
@end

