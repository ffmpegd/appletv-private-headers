/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange {
	DOMRange *_domRange;	// 4 = 0x4
	int _affinityIfCollapsed;	// 8 = 0x8
}
@property(assign, nonatomic) int affinity;	// G=0x31cc510d; S=0x31cc397d; @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange *domRange;	// G=0x31cc4e95; S=0x31cc396d; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x31c5ad4d
+ (id)wrapDOMRange:(id)range withAffinity:(int)affinity;	// 0x31c5ad61
- (void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;	// 0x31cc509d
// declared property getter: - (int)affinity;	// 0x31cc510d
- (void)dealloc;	// 0x31cdd8a1
- (id)description;	// 0x31ede279
// declared property getter: - (id)domRange;	// 0x31cc4e95
- (id)end;	// 0x31cf16c5
- (BOOL)isEmpty;	// 0x31cc4e61
- (BOOL)isEqual:(id)equal;	// 0x31cf1bc9
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x31cc397d
// declared property setter: - (void)setDomRange:(id)range;	// 0x31cc396d
- (id)start;	// 0x31cc4ff1
@end
