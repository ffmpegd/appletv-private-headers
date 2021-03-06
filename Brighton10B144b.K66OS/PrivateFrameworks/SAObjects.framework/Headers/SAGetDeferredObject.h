/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSURL;

@interface SAGetDeferredObject : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *identifier;	// G=0x353fd019; S=0x353fd095; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)getDeferredObject;	// 0x353fcf89
+ (id)getDeferredObjectWithDictionary:(id)dictionary context:(id)context;	// 0x353fcfcd
- (id)encodedClassName;	// 0x353fcf7d
- (id)groupIdentifier;	// 0x353fcf6d
// declared property getter: - (id)identifier;	// 0x353fd019
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353fd095
@end

