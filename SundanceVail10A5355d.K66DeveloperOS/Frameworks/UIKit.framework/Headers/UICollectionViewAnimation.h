/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface UICollectionViewAnimation : NSObject {
	UICollectionReusableView *_view;	// 4 = 0x4
	UICollectionViewLayoutAttributes *_finalLayoutAttributes;	// 8 = 0x8
	float _startFraction;	// 12 = 0xc
	float _endFraction;	// 16 = 0x10
	int _viewType;	// 20 = 0x14
	NSMutableArray *_completionHandlers;	// 24 = 0x18
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _collectionViewAnimationFlags;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL animateFromCurrentPosition;	// G=0x33de6849; 
@property(readonly, assign, nonatomic) BOOL deleteAfterAnimation;	// G=0x33de685d; 
@property(readonly, assign, nonatomic) float endFraction;	// G=0x33de6f59; @synthesize=_endFraction
@property(readonly, assign, nonatomic) UICollectionViewLayoutAttributes *finalLayoutAttributes;	// G=0x33de6f39; @synthesize=_finalLayoutAttributes
@property(assign, nonatomic) BOOL rasterizeAfterAnimation;	// G=0x33de6895; S=0x33de6871; 
@property(assign, nonatomic) BOOL resetRasterizationAfterAnimation;	// G=0x33de68cd; S=0x33de68a9; 
@property(readonly, assign, nonatomic) float startFraction;	// G=0x33de6f49; @synthesize=_startFraction
@property(readonly, assign, nonatomic) UICollectionReusableView *view;	// G=0x33de6f19; @synthesize=_view
@property(readonly, assign, nonatomic) int viewType;	// G=0x33de6f29; @synthesize=_viewType
- (id)initWithView:(id)view viewType:(int)type finalLayoutAttributes:(id)attributes startFraction:(float)fraction endFraction:(float)fraction5 animateFromCurrentPostion:(BOOL)currentPostion deleteAfterAnimation:(BOOL)animation;	// 0x33de6691
- (void)addCompletionHandler:(id)handler;	// 0x33de6ec5
// declared property getter: - (BOOL)animateFromCurrentPosition;	// 0x33de6849
- (void)dealloc;	// 0x33de67d1
// declared property getter: - (BOOL)deleteAfterAnimation;	// 0x33de685d
// declared property getter: - (float)endFraction;	// 0x33de6f59
// declared property getter: - (id)finalLayoutAttributes;	// 0x33de6f39
// declared property getter: - (BOOL)rasterizeAfterAnimation;	// 0x33de6895
// declared property getter: - (BOOL)resetRasterizationAfterAnimation;	// 0x33de68cd
// declared property setter: - (void)setRasterizeAfterAnimation:(BOOL)animation;	// 0x33de6871
// declared property setter: - (void)setResetRasterizationAfterAnimation:(BOOL)animation;	// 0x33de68a9
- (void)start;	// 0x33de68e1
// declared property getter: - (float)startFraction;	// 0x33de6f49
// declared property getter: - (id)view;	// 0x33de6f19
// declared property getter: - (int)viewType;	// 0x33de6f29
@end

