/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SASetApplicationContext : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *orderedContext;	// G=0x353e1eed; S=0x353e1f09; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)setApplicationContext;	// 0x353e1e5d
+ (id)setApplicationContextWithDictionary:(id)dictionary context:(id)context;	// 0x353e1ea1
- (id)encodedClassName;	// 0x353e1e51
- (id)groupIdentifier;	// 0x353e1e41
// declared property getter: - (id)orderedContext;	// 0x353e1eed
// declared property setter: - (void)setOrderedContext:(id)context;	// 0x353e1f09
@end
