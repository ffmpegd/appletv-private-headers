/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAClockSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32f3dfc1; S=0x32f3e03d; 
+ (id)searchCompleted;	// 0x32f3deb5
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f3def9
+ (id)searchCompletedWithResults:(id)results;	// 0x32f3df45
- (id)initWithResults:(id)results;	// 0x32f3df8d
- (id)encodedClassName;	// 0x32f3dea9
- (id)groupIdentifier;	// 0x32f3de99
// declared property getter: - (id)results;	// 0x32f3dfc1
// declared property setter: - (void)setResults:(id)results;	// 0x32f3e03d
@end
