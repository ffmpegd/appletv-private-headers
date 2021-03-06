/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSArray;

@interface SAClockDelete : SADomainCommand {
}
@property(copy, nonatomic) NSArray *clockIds;	// G=0x326b10d9; S=0x326b1179; 
+ (id)delete;	// 0x326b1049
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x326b108d
// declared property getter: - (id)clockIds;	// 0x326b10d9
- (id)encodedClassName;	// 0x326b103d
- (id)groupIdentifier;	// 0x326b102d
- (BOOL)requiresResponse;	// 0x326b11f9
// declared property setter: - (void)setClockIds:(id)ids;	// 0x326b1179
@end

