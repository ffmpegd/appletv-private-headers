/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSURL, NSString;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) BOOL alreadyExists;	// G=0x326b0e95; S=0x326b0f0d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *worldClockId;	// G=0x326b0f51; S=0x326b0fcd; 
+ (id)addCompleted;	// 0x326b0e05
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326b0e49
// declared property getter: - (BOOL)alreadyExists;	// 0x326b0e95
- (id)encodedClassName;	// 0x326b0df9
- (id)groupIdentifier;	// 0x326b0de9
// declared property setter: - (void)setAlreadyExists:(BOOL)exists;	// 0x326b0f0d
// declared property setter: - (void)setWorldClockId:(id)anId;	// 0x326b0fcd
// declared property getter: - (id)worldClockId;	// 0x326b0f51
@end

