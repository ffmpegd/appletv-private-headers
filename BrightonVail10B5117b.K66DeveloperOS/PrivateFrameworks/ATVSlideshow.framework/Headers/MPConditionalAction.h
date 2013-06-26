/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPActionSupport.h"
#import "MPAction.h"

@class NSString;

@interface MPConditionalAction : MPAction <MPActionSupport> {
	NSString *_predicate;	// 16 = 0x10
	MPAction *_actionIfTrue;	// 20 = 0x14
	MPAction *_actionIfFalse;	// 24 = 0x18
}
@property(readonly, assign) MPAction *actionIfFalse;	// G=0x33283025; @synthesize=_actionIfFalse
@property(readonly, assign) MPAction *actionIfTrue;	// G=0x33283011; @synthesize=_actionIfTrue
@property(copy, nonatomic) NSString *predicate;	// G=0x33282ffd; S=0x33282ab9; @synthesize=_predicate
+ (id)conditionalAction;	// 0x33282729
- (id)init;	// 0x3328276d
- (id)initWithCoder:(id)coder;	// 0x332827c9
// declared property getter: - (id)actionIfFalse;	// 0x33283025
// declared property getter: - (id)actionIfTrue;	// 0x33283011
- (void)configureActions;	// 0x33282ca5
- (void)configureTarget;	// 0x33282fa5
- (id)copyWithZone:(NSZone *)zone;	// 0x332829e1
- (void)dealloc;	// 0x332828b5
- (void)encodeWithCoder:(id)coder;	// 0x3328292d
// declared property getter: - (id)predicate;	// 0x33282ffd
- (void)setAction:(id)action;	// 0x33282c35
- (void)setAction:(id)action forCondition:(BOOL)condition;	// 0x33282b25
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x33282ab9
@end
