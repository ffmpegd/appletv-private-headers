/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SAReminderListSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x326c6e29; S=0x326c6e91; 
+ (id)listSearchCompleted;	// 0x326c6d99
+ (id)listSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326c6ddd
- (id)encodedClassName;	// 0x326c6d8d
- (id)groupIdentifier;	// 0x326c6d7d
// declared property getter: - (id)results;	// 0x326c6e29
// declared property setter: - (void)setResults:(id)results;	// 0x326c6e91
@end
