/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32f3ebcd; S=0x32f3ec49; 
+ (id)personSearchCompleted;	// 0x32f3eac1
+ (id)personSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f3eb05
+ (id)personSearchCompletedWithResults:(id)results;	// 0x32f3eb51
- (id)initWithResults:(id)results;	// 0x32f3eb99
- (id)encodedClassName;	// 0x32f3eab5
- (id)groupIdentifier;	// 0x32f3eaa5
// declared property getter: - (id)results;	// 0x32f3ebcd
// declared property setter: - (void)setResults:(id)results;	// 0x32f3ec49
@end

