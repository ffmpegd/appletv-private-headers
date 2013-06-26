/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;
@protocol BRTumblerDelegate, BRTumblerDataSource;

__attribute__((visibility("hidden")))
@interface BRTumblerControl : BRControl {
	id<BRTumblerDataSource> _dataSource;	// 84 = 0x54
	id<BRTumblerDelegate> _delegate;	// 88 = 0x58
	unsigned _currentIndex;	// 92 = 0x5c
	unsigned _itemCount;	// 96 = 0x60
	BRControl *_currentItem;	// 100 = 0x64
	BRControl *_nextItem;	// 104 = 0x68
	BRControl *_prevItem;	// 108 = 0x6c
	BRControl *_nextNextItem;	// 112 = 0x70
	BRControl *_prevPrevItem;	// 116 = 0x74
	int _tumbleState;	// 120 = 0x78
	BRControl *_nextFade;	// 124 = 0x7c
	BRControl *_prevFade;	// 128 = 0x80
	BRControl *_nextBlackout;	// 132 = 0x84
	BRControl *_prevBlackout;	// 136 = 0x88
	BRImageControl *_nextArrow;	// 140 = 0x8c
	BRImageControl *_prevArrow;	// 144 = 0x90
	CGSize _sizeThatFits;	// 148 = 0x94
}
@property(readonly, assign, nonatomic) BRControl *currentItem;	// G=0x31f9dd; @synthesize=_currentItem
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x31eb59; S=0x31eb69; 
@property(assign, nonatomic) id<BRTumblerDataSource> dataSource;	// G=0x31f9ad; S=0x31f209; @synthesize=_dataSource
@property(assign, nonatomic) id<BRTumblerDelegate> delegate;	// G=0x31f9bd; S=0x31f9cd; @synthesize=_delegate
@property(readonly, assign) float itemPadding;	// G=0x31f4e9; @dynamic
- (id)init;	// 0x31e5f9
- (id)_arrowAnimations;	// 0x31fe61
- (id)_controlFromDataSourceAtIndex:(unsigned)index;	// 0x31ff81
- (CGPoint)_currentPos;	// 0x31fd05
- (id)_nextFadeFilters;	// 0x31f9ed
- (CGPoint)_nextNextPos;	// 0x31fde9
- (CGPoint)_nextPos;	// 0x31fd79
- (id)_prevFadeFilters;	// 0x31fb01
- (CGPoint)_prevPos;	// 0x31fc8d
- (CGPoint)_prevPrevPos;	// 0x31fc15
- (BOOL)_tumbleNextShouldAnimate:(BOOL)_tumbleNext;	// 0x320561
- (BOOL)_tumblePrevShouldAnimate:(BOOL)_tumblePrev;	// 0x31ffcd
- (id)accessibilityLabel;	// 0x320af5
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x31f951
- (BOOL)brEventAction:(id)action;	// 0x31f599
// declared property getter: - (id)currentItem;	// 0x31f9dd
// declared property getter: - (unsigned)currentItemIndex;	// 0x31eb59
// declared property getter: - (id)dataSource;	// 0x31f9ad
- (void)dealloc;	// 0x31ea41
// declared property getter: - (id)delegate;	// 0x31f9bd
// declared property getter: - (float)itemPadding;	// 0x31f4e9
- (void)layoutSubcontrols;	// 0x31ec69
- (void)reload;	// 0x31f229
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x31eb69
// declared property setter: - (void)setDataSource:(id)source;	// 0x31f209
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31f9cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31eb91
@end
