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
@property(assign, nonatomic) float _curTouchOffset;	// G=0x367a3a55; S=0x367a3a65; @synthesize
@property(assign, nonatomic) long _displayedItemIndex;	// G=0x367a39f5; S=0x367a3a05; @synthesize
@property(assign, nonatomic) BOOL _initialLayoutCompleted;	// G=0x367a3a15; S=0x367a3a25; @synthesize
@property(assign, nonatomic) unsigned _lastRequestedItemIndex;	// G=0x367a3aa9; S=0x367a3ab9; @synthesize
@property(retain, nonatomic) NSMutableArray *_requestedImages;	// G=0x367a3a75; S=0x367a3a85; @synthesize
@property(assign, nonatomic) long _startIndex;	// G=0x367a39d5; S=0x367a39e5; @synthesize
@property(assign, nonatomic) int _startTouchXPosition;	// G=0x367a3a35; S=0x367a3a45; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDataSource> dataSource;	// G=0x367a3975; S=0x367a3985; @synthesize
@property(assign, nonatomic) id<ATVPhotoFullScreenViewDelegate> delegate;	// G=0x367a3995; S=0x367a39a5; @synthesize
@property(assign, nonatomic) BOOL prefetchImages;	// G=0x367a39b5; S=0x367a39c5; @synthesize
+ (id)fullScreenWithStartIndex:(long)startIndex;	// 0x367a28c9
- (id)initWithStartIndex:(long)startIndex;	// 0x367a2911
// declared property getter: - (float)_curTouchOffset;	// 0x367a3a55
- (long)_displayItemAtIndex:(long)index withTransition:(BOOL)transition;	// 0x367a3245
- (void)_displayNextWithTransition:(BOOL)transition;	// 0x367a3185
- (void)_displayPreviousWithTransition:(BOOL)transition;	// 0x367a31e5
// declared property getter: - (long)_displayedItemIndex;	// 0x367a39f5
// declared property getter: - (BOOL)_initialLayoutCompleted;	// 0x367a3a15
// declared property getter: - (unsigned)_lastRequestedItemIndex;	// 0x367a3aa9
- (void)_requestNextImage;	// 0x367a3749
- (void)_requestedImageWritten:(id)written;	// 0x367a38e9
// declared property getter: - (id)_requestedImages;	// 0x367a3a75
- (void)_setImageLayerTargetBounds;	// 0x367a35ed
// declared property getter: - (long)_startIndex;	// 0x367a39d5
// declared property getter: - (int)_startTouchXPosition;	// 0x367a3a35
- (id)accessibilityLabel;	// 0x367a2d3d
- (BOOL)brEventAction:(id)action;	// 0x367a2e49
- (void)controlWasActivated;	// 0x367a2ac5
- (void)controlWasDeactivated;	// 0x367a2b55
// declared property getter: - (id)dataSource;	// 0x367a3975
- (void)dealloc;	// 0x367a2a2d
// declared property getter: - (id)delegate;	// 0x367a3995
- (BOOL)isAccessibilityElement;	// 0x367a2bd9
- (void)layoutSubcontrols;	// 0x367a2bdd
// declared property getter: - (BOOL)prefetchImages;	// 0x367a39b5
- (void)reload;	// 0x367a2ce5
// declared property setter: - (void)setDataSource:(id)source;	// 0x367a3985
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x367a39a5
// declared property setter: - (void)setPrefetchImages:(BOOL)images;	// 0x367a39c5
// declared property setter: - (void)set_curTouchOffset:(float)offset;	// 0x367a3a65
// declared property setter: - (void)set_displayedItemIndex:(long)index;	// 0x367a3a05
// declared property setter: - (void)set_initialLayoutCompleted:(BOOL)completed;	// 0x367a3a25
// declared property setter: - (void)set_lastRequestedItemIndex:(unsigned)index;	// 0x367a3ab9
// declared property setter: - (void)set_requestedImages:(id)images;	// 0x367a3a85
// declared property setter: - (void)set_startIndex:(long)index;	// 0x367a39e5
// declared property setter: - (void)set_startTouchXPosition:(int)position;	// 0x367a3a45
@end

