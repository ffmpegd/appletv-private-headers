/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAFmfVisibilityStateSet : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353d86ed; S=0x353d8769; 
@property(assign, nonatomic) BOOL visible;	// G=0x353d87c9; S=0x353d8841; 
+ (id)visibilityStateSet;	// 0x353d865d
+ (id)visibilityStateSetWithDictionary:(id)dictionary context:(id)context;	// 0x353d86a1
- (id)encodedClassName;	// 0x353d8651
- (id)groupIdentifier;	// 0x353d8641
- (BOOL)requiresResponse;	// 0x353d8885
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353d8769
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x353d8841
// declared property getter: - (id)targetAppId;	// 0x353d86ed
// declared property getter: - (BOOL)visible;	// 0x353d87c9
@end

