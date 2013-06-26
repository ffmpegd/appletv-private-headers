/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *anchors;	// G=0x304d7ce1; S=0x304d7d5d; 
+ (id)getAnchorsResponse;	// 0x304d7c51
+ (id)getAnchorsResponseWithDictionary:(id)dictionary context:(id)context;	// 0x304d7c95
// declared property getter: - (id)anchors;	// 0x304d7ce1
- (id)encodedClassName;	// 0x304d7c45
- (id)groupIdentifier;	// 0x304d7c35
- (BOOL)requiresResponse;	// 0x304d7dc5
// declared property setter: - (void)setAnchors:(id)anchors;	// 0x304d7d5d
@end
