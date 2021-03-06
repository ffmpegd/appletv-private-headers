/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class NSArray, UIColor, UIFont, NSString;

__attribute__((visibility("hidden")))
@interface UITableViewIndex : UIControl {
@private
	NSArray *_titles;	// 72 = 0x48
	UIFont *_font;	// 76 = 0x4c
	int _selectedSection;	// 80 = 0x50
	BOOL _pastTop;	// 84 = 0x54
	BOOL _pastBottom;	// 85 = 0x55
	CGSize _cachedSize;	// 88 = 0x58
	CGSize _cachedSizeToFit;	// 96 = 0x60
	UIColor *_indexColor;	// 104 = 0x68
	UIColor *_indexBackgroundColor;	// 108 = 0x6c
}
@property(retain, nonatomic) UIFont *font;	// G=0x32f57401; S=0x3312cd39; 
@property(retain, nonatomic) UIColor *indexBackgroundColor;	// G=0x3312ce65; S=0x32f570c5; 
@property(retain, nonatomic) UIColor *indexColor;	// G=0x3312ce2d; S=0x32f5706d; 
@property(readonly, assign, nonatomic) BOOL pastBottom;	// G=0x3312ce9d; @synthesize=_pastBottom
@property(readonly, assign, nonatomic) BOOL pastTop;	// G=0x33022da5; @synthesize=_pastTop
@property(readonly, assign, nonatomic) int selectedSection;	// G=0x32fe2625; @synthesize=_selectedSection
@property(readonly, assign, nonatomic) NSString *selectedSectionTitle;	// G=0x32fe2635; 
@property(retain, nonatomic) NSArray *titles;	// G=0x3312cd29; S=0x32f57151; 
- (id)initWithFrame:(CGRect)frame;	// 0x32f56f41
- (id)_createTouchesWithMouseEvent:(GSEventRef)mouseEvent phase:(int)phase;	// 0x3312cead
- (id)_displayTitles;	// 0x32f593e5
- (void)_selectSectionForTouch:(id)touch withEvent:(id)event;	// 0x32fe20ed
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32fe20bd
- (void)cancelTrackingWithEvent:(id)event;	// 0x3312cdb9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33022d8d
- (void)dealloc;	// 0x3312cca1
- (void)drawRect:(CGRect)rect;	// 0x32f58ca5
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32fe2e95
// declared property getter: - (id)font;	// 0x32f57401
// declared property getter: - (id)indexBackgroundColor;	// 0x3312ce65
// declared property getter: - (id)indexColor;	// 0x3312ce2d
- (unsigned)maximumNumberOfTitlesWithoutTruncationForHeight:(float)height;	// 0x3312cd91
- (void)mouseDown:(GSEventRef)down;	// 0x3312cfe5
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3312d06d
- (void)mouseUp:(GSEventRef)up;	// 0x3312d0f5
// declared property getter: - (BOOL)pastBottom;	// 0x3312ce9d
// declared property getter: - (BOOL)pastTop;	// 0x33022da5
// declared property getter: - (int)selectedSection;	// 0x32fe2625
// declared property getter: - (id)selectedSectionTitle;	// 0x32fe2635
// declared property setter: - (void)setFont:(id)font;	// 0x3312cd39
// declared property setter: - (void)setIndexBackgroundColor:(id)color;	// 0x32f570c5
// declared property setter: - (void)setIndexColor:(id)color;	// 0x32f5706d
// declared property setter: - (void)setTitles:(id)titles;	// 0x32f57151
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f571dd
// declared property getter: - (id)titles;	// 0x3312cd29
@end

