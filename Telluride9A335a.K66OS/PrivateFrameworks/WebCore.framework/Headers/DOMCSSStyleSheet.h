/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMStyleSheet.h"

@class DOMCSSRule, DOMCSSRuleList;

__attribute__((visibility("hidden")))
@interface DOMCSSStyleSheet : DOMStyleSheet {
}
@property(readonly, retain) DOMCSSRuleList *cssRules;	// G=0x35ba9685; 
@property(readonly, retain) DOMCSSRule *ownerRule;	// G=0x35ba95c1; 
@property(readonly, retain) DOMCSSRuleList *rules;	// G=0x35ba97c9; 
- (int)addRule:(id)rule style:(id)style index:(unsigned)index;	// 0x35ba9d41
// declared property getter: - (id)cssRules;	// 0x35ba9685
- (void)deleteRule:(unsigned)rule;	// 0x35ba9ba9
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x35ba9a59
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x35ba9909
// declared property getter: - (id)ownerRule;	// 0x35ba95c1
- (void)removeRule:(unsigned)rule;	// 0x35ba9c75
// declared property getter: - (id)rules;	// 0x35ba97c9
@end

