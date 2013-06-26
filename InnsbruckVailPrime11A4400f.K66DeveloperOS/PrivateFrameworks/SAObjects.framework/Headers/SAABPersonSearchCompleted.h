/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x326b28b5; S=0x326b291d; 
+ (id)personSearchCompleted;	// 0x326b27a9
+ (id)personSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326b27ed
+ (id)personSearchCompletedWithResults:(id)results;	// 0x326b2839
- (id)initWithResults:(id)results;	// 0x326b2881
- (id)encodedClassName;	// 0x326b279d
- (id)groupIdentifier;	// 0x326b278d
// declared property getter: - (id)results;	// 0x326b28b5
// declared property setter: - (void)setResults:(id)results;	// 0x326b291d
@end
