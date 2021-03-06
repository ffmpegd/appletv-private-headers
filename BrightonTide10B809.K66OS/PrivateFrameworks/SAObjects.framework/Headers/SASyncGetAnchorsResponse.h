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
@property(copy, nonatomic) NSArray *anchors;	// G=0x353c71b9; S=0x353c7235; 
+ (id)getAnchorsResponse;	// 0x353c7129
+ (id)getAnchorsResponseWithDictionary:(id)dictionary context:(id)context;	// 0x353c716d
// declared property getter: - (id)anchors;	// 0x353c71b9
- (id)encodedClassName;	// 0x353c711d
- (id)groupIdentifier;	// 0x353c710d
- (BOOL)requiresResponse;	// 0x353c729d
// declared property setter: - (void)setAnchors:(id)anchors;	// 0x353c7235
@end

