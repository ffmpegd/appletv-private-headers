/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *dialogPhase;	// G=0x304d37ad; S=0x304d37c9; 
@property(assign, nonatomic) BOOL scrollToTop;	// G=0x304d3819; S=0x304d3891; 
@property(assign, nonatomic) BOOL temporary;	// G=0x304d38d5; S=0x304d394d; 
@property(copy, nonatomic) NSArray *views;	// G=0x304d3991; S=0x304d3a0d; 
+ (id)addViews;	// 0x304d371d
+ (id)addViewsWithDictionary:(id)dictionary context:(id)context;	// 0x304d3761
// declared property getter: - (id)dialogPhase;	// 0x304d37ad
- (id)encodedClassName;	// 0x304d3711
- (id)groupIdentifier;	// 0x304d3701
- (BOOL)requiresResponse;	// 0x304d3a75
// declared property getter: - (BOOL)scrollToTop;	// 0x304d3819
// declared property setter: - (void)setDialogPhase:(id)phase;	// 0x304d37c9
// declared property setter: - (void)setScrollToTop:(BOOL)top;	// 0x304d3891
// declared property setter: - (void)setTemporary:(BOOL)temporary;	// 0x304d394d
// declared property setter: - (void)setViews:(id)views;	// 0x304d3a0d
// declared property getter: - (BOOL)temporary;	// 0x304d38d5
// declared property getter: - (id)views;	// 0x304d3991
@end

