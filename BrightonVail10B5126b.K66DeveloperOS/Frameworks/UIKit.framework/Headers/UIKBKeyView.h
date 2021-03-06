/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKBCacheableView.h"

@class UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyView : UIView <UIKBCacheableView> {
	UIKBTree *m_keyboard;	// 84 = 0x54
	UIKBTree *m_key;	// 88 = 0x58
	int m_state;	// 92 = 0x5c
	CGPoint m_drawOrigin;	// 96 = 0x60
	int m_clipCorners;	// 104 = 0x68
	CFBooleanRef m_allowsCaching;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x32bf6609; 
@property(readonly, assign, nonatomic) float cachedWidth;	// G=0x32dfdd49; 
@property(assign, nonatomic) int clipCorners;	// G=0x32bf66c9; S=0x32be95a1; @synthesize=m_clipCorners
@property(assign, nonatomic) CGPoint drawOrigin;	// G=0x32dfdd8d; S=0x32be95cd; @synthesize=m_drawOrigin
@property(readonly, assign, nonatomic) UIKBTree *key;	// G=0x32c0c63d; @synthesize=m_key
@property(readonly, assign, nonatomic) UIKBTree *keyboard;	// G=0x32dfdd7d; @synthesize=m_keyboard
@property(readonly, assign) BOOL shouldCache;	// G=0x32bf6209; 
@property(readonly, assign, nonatomic) int state;	// G=0x32c13c95; @synthesize=m_state
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x32be93dd
// declared property getter: - (BOOL)cacheDeferable;	// 0x32bf6609
- (id)cacheKey;	// 0x32bf62e9
// declared property getter: - (float)cachedWidth;	// 0x32dfdd49
// declared property getter: - (int)clipCorners;	// 0x32bf66c9
- (void)dealloc;	// 0x32c14ad1
- (void)displayLayer:(id)layer;	// 0x32bf6179
// declared property getter: - (CGPoint)drawOrigin;	// 0x32dfdd8d
- (void)drawRect:(CGRect)rect;	// 0x32bf660d
// declared property getter: - (id)key;	// 0x32c0c63d
// declared property getter: - (id)keyboard;	// 0x32dfdd7d
// declared property setter: - (void)setClipCorners:(int)corners;	// 0x32be95a1
// declared property setter: - (void)setDrawOrigin:(CGPoint)origin;	// 0x32be95cd
// declared property getter: - (BOOL)shouldCache;	// 0x32bf6209
// declared property getter: - (int)state;	// 0x32c13c95
- (int)textEffectsVisibilityLevel;	// 0x32c0d4dd
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x32be95c9
@end

