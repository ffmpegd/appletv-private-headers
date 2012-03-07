/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray;
@protocol ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVPhotoFullScreenView : BRControl {
@private
	id<ATVPhotoFullScreenViewDataSource> dataSource;	// 48 = 0x30
	id<ATVPhotoFullScreenViewDelegate> delegate;	// 52 = 0x34
	BOOL prefetchImages;	// 56 = 0x38
	long _startIndex;	// 60 = 0x3c
	long _displayedItemIndex;	// 64 = 0x40
	BOOL _initialLayoutCompleted;	// 68 = 0x44
	int _startTouchXPosition;	// 72 = 0x48
	float _curTouchOffset;	// 76 = 0x4c
	NSMutableArray *_requestedImages;	// 80 = 0x50
	unsigned _lastRequestedItemIndex;	// 84 = 0x54
}
@property(assign, nonatomic) float _curTouchOffset;	// G=0x33b90bad; S=0x33b90bbd; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x33b90b4d; S=0x33b90b5d; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x33b90b6d; S=0x33b90b7d; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x33b90c01; S=0x33b90c11; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x33b90bcd; S=0x33b90bdd; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x33b90b2d; S=0x33b90b3d; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x33b90b8d; S=0x33b90b9d; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x33b90acd; S=0x33b90add; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x33b90aed; S=0x33b90afd; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x33b90b0d; S=0x33b90b1d; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x33b8fa21
- (id)initWithStartIndex:(long)startIndex;	// 0x33b8fa69
// declared property getter: - (float)_curTouchOffset;	// 0x33b90bad
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x33b9039d
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x33b902dd
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x33b9033d
// declared property getter: - (long)_displayedItemIndex;	// 0x33b90b4d
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x33b90b6d
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x33b90c01
- (void)_requestNextImage;	// 0x33b908a1
- (void)_requestedImageWritten:(id)written;	// 0x33b90a41
// declared property getter: - (id)_requestedImages;	// 0x33b90bcd
- (void)_setImageLayerTargetBounds;	// 0x33b90745
// declared property getter: - (long)_startIndex;	// 0x33b90b2d
// declared property getter: - (int)_startTouchXPosition;	// 0x33b90b8d
- (id)accessibilityLabel;	// 0x33b8fe95
- (BOOL)brEventAction:(id)action;	// 0x33b8ffa1
- (void)controlWasActivated;	// 0x33b8fc1d
- (void)controlWasDeactivated;	// 0x33b8fcad
// declared property getter: - (id)dataSource;	// 0x33b90acd
- (void)dealloc;	// 0x33b8fb85
// declared property getter: - (id)delegate;	// 0x33b90aed
- (BOOL)isAccessibilityElement;	// 0x33b8fd31
- (void)layoutSubcontrols;	// 0x33b8fd35
// declared property getter: - (BOOL)prefetchImages;	// 0x33b90b0d
- (void)reload;	// 0x33b8fe3d
// declared property setter: - (void)setDataSource:(id)source;	// 0x33b90add
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33b90afd
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x33b90b1d
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x33b90bbd
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x33b90b5d
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x33b90b7d
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x33b90c11
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x33b90bdd
// declared property setter: - (void)set_startIndex:(long)index;	// 0x33b90b3d
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x33b90b9d
@end

