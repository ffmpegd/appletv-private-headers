/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBCacheableView.h"
#import "UIKBSplitImageView.h"

@class UIKBTree, NSString, UIKBCacheToken, NSTimer, UIKBKeyView, UIKBRenderConfig, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {
	UIKBTree *_keyplane;	// 108 = 0x6c
	UIKBTree *_defaultKeyplane;	// 112 = 0x70
	UIKBCacheToken *_cacheToken;	// 116 = 0x74
	UIKBKeyView *_candidateGapView;	// 120 = 0x78
	NSMutableDictionary *_subviewIndex;	// 124 = 0x7c
	NSMutableDictionary *_activeViewIndex;	// 128 = 0x80
	NSMutableDictionary *_renderedKeyViews;	// 132 = 0x84
	NSMutableDictionary *_delayedDeactivationKeys;	// 136 = 0x88
	NSTimer *_activatedTimer;	// 140 = 0x8c
	BOOL _performingDeactivation;	// 144 = 0x90
	BOOL _shouldDrawRect;	// 145 = 0x91
	UIKBRenderConfig *_renderConfig;	// 148 = 0x94
	UIKBSplitImageView *_keyBorders;	// 152 = 0x98
	UIKBSplitImageView *_keyBackgrounds;	// 156 = 0x9c
	UIKBSplitImageView *_keyCaps;	// 160 = 0xa0
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x2f4d1385; 
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x2f4d0f11; 
@property(retain, nonatomic) UIKBCacheToken *cacheToken;	// G=0x2f858999; S=0x2f8589a9; @synthesize=_cacheToken
@property(readonly, assign, nonatomic) float cachedWidth;	// G=0x2f4d1389; 
@property(retain, nonatomic) UIKBTree *defaultKeyplane;	// G=0x2f858979; S=0x2f858989; @synthesize=_defaultKeyplane
@property(readonly, assign, nonatomic) BOOL keepNonPersistent;	// G=0x2f857f3d; 
@property(retain, nonatomic) UIKBTree *keyplane;	// G=0x2f858969; S=0x2f4f1951; @synthesize=_keyplane
@property(retain, nonatomic) UIKBRenderConfig *renderConfig;	// G=0x2f8589b9; S=0x2f857a8d; @synthesize=_renderConfig
- (id)initWithFrame:(CGRect)frame keyplane:(id)keyplane;	// 0x2f8578a5
- (id)_setupSplitImageViewIfNeeded:(id)needed withImage:(CGImageRef)image;	// 0x2f857dd1
- (BOOL)_shouldDrawLowResBackground;	// 0x2f4d1841
- (void)activateKeys;	// 0x2f858861
- (void)addKeyToDelayedDeactivationSet:(id)delayedDeactivationSet;	// 0x2f4eccb1
// declared property getter: - (BOOL)cacheDeferable;	// 0x2f4d1385
- (id)cacheIdentifierForKey:(id)key;	// 0x2f858381
- (id)cacheIdentifierForKey:(id)key withState:(int)state;	// 0x2f4cb899
// declared property getter: - (id)cacheKey;	// 0x2f4d0f11
- (id)cacheKeysForRenderFlags:(id)renderFlags;	// 0x2f857c71
// declared property getter: - (id)cacheToken;	// 0x2f858999
// declared property getter: - (float)cachedWidth;	// 0x2f4d1389
- (void)cancelDelayedDeactivation;	// 0x2f4ef151
- (Class)classForKey:(id)key;	// 0x2f4cc735
- (id)containingViewForKey:(id)key withState:(int)state;	// 0x2f4cb0e1
- (int)cornerMaskForKey:(id)key recursive:(BOOL)recursive;	// 0x2f4cb365
- (void)deactivateAdaptiveKey:(id)key;	// 0x2f8584bd
- (void)deactivateKey:(id)key previousState:(int)state;	// 0x2f858675
- (void)deactivateKeys;	// 0x2f4efb11
- (void)dealloc;	// 0x2f4f3115
// declared property getter: - (id)defaultKeyplane;	// 0x2f858979
- (void)dimKeyCaps:(float)caps duration:(float)duration;	// 0x2f85851d
- (void)displayLayer:(id)layer;	// 0x2f4d08c9
- (void)drawContentsOfRenderers:(id)renderers;	// 0x2f857f41
- (void)drawRect:(CGRect)rect;	// 0x2f4d1489
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f4eb639
// declared property getter: - (BOOL)keepNonPersistent;	// 0x2f857f3d
// declared property getter: - (id)keyplane;	// 0x2f858969
- (void)performDelayedDeactivation:(id)deactivation;	// 0x2f4eefc9
- (void)purgeKeyViews;	// 0x2f4f0b79
- (void)purgeSubviews;	// 0x2f4f0df1
- (void)removeFromSuperview;	// 0x2f4f0dad
- (void)removeKeyFromDelayedDeactivationSet:(id)delayedDeactivationSet;	// 0x2f4caf81
// declared property getter: - (id)renderConfig;	// 0x2f8589b9
- (void)scheduleDelayedDeactivation;	// 0x2f4ece19
// declared property setter: - (void)setCacheToken:(id)token;	// 0x2f8589a9
// declared property setter: - (void)setDefaultKeyplane:(id)keyplane;	// 0x2f858989
// declared property setter: - (void)setKeyplane:(id)keyplane;	// 0x2f4f1951
// declared property setter: - (void)setRenderConfig:(id)config;	// 0x2f857a8d
- (void)setState:(int)state forKey:(id)key;	// 0x2f4ca515
- (int)stateForKey:(id)key;	// 0x2f4cd7cd
- (void)updateDecorationViewsIfNeeded;	// 0x2f4ca1f9
- (BOOL)validForKeyplane:(id)keyplane withVisualStyle:(int)visualStyle;	// 0x2f4f1871
- (id)viewForKey:(id)key;	// 0x2f4cb069
- (id)viewForKey:(id)key state:(int)state;	// 0x2f858481
@end
