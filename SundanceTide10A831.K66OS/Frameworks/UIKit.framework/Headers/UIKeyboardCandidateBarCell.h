/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKBCacheableView.h"

@class UIKeyboardCandidate, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UIView <UIKBCacheableView> {
	UIKeyboardCandidate *m_candidate;	// 84 = 0x54
	NSString *m_candidateText;	// 88 = 0x58
	id m_target;	// 92 = 0x5c
	SEL m_action;	// 96 = 0x60
	CGSize m_textSize;	// 100 = 0x64
	BOOL m_highlighted;	// 108 = 0x6c
	BOOL m_special;	// 109 = 0x6d
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x31f11865; 
@property(readonly, assign, nonatomic) float cachedWidth;	// G=0x31f11869; 
@property(assign, nonatomic) BOOL highlighted;	// G=0x31f11629; S=0x31f11639; 
@property(readonly, assign, nonatomic) CGSize stringSize;	// G=0x31f11b61; @synthesize=m_textSize
+ (id)fontForCandidateText:(id)candidateText;	// 0x31f11059
- (id)initWithCandidate:(id)candidate tag:(int)tag target:(id)target action:(SEL)action;	// 0x31f1155d
- (id)initWithCandidateText:(id)candidateText tag:(int)tag target:(id)target action:(SEL)action;	// 0x31f1107d
// declared property getter: - (BOOL)cacheDeferable;	// 0x31f11865
- (id)cacheKey;	// 0x31f11665
// declared property getter: - (float)cachedWidth;	// 0x31f11869
- (void)dealloc;	// 0x31f115c5
- (void)displayLayer:(id)layer;	// 0x31f116e1
- (void)drawRect:(CGRect)rect;	// 0x31f1189d
// declared property getter: - (BOOL)highlighted;	// 0x31f11629
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x31f11639
- (BOOL)shouldCache;	// 0x31f116dd
// declared property getter: - (CGSize)stringSize;	// 0x31f11b61
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31f119f9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31f11b41
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31f11ab5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31f11a19
@end

